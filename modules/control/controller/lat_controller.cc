/*****************************************************************************
 * Copyright 2017 The JmcAuto Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#include "modules/control/controller/lat_controller.h"

#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <utility>
#include <vector>

#include "Eigen/LU"

#include "modules/common/configs/vehicle_config_helper.h"
#include "modules/common/log.h"
#include "modules/common/math/linear_quadratic_regulator.h"
#include "modules/common/math/math_utils.h"
#include "modules/common/math/quaternion.h"
#include "modules/common/time/time.h"
#include "modules/common/util/string_util.h"
#include "modules/control/common/control_gflags.h"
#include "modules/common/configs/config_gflags.h"

namespace jmc_auto {
namespace control {

using jmc_auto::common::ErrorCode;
using jmc_auto::common::Point3D;
using jmc_auto::common::Status;
using jmc_auto::common::TrajectoryPoint;
using jmc_auto::common::VehicleStateProvider;
using jmc_auto::common::util::StrCat;
using Matrix = Eigen::MatrixXd;
using jmc_auto::common::time::Clock;

namespace {

std::string GetLogFileName() {
  time_t raw_time;
  char name_buffer[80];
  std::time(&raw_time);
  strftime(name_buffer, 80, "/tmp/steer_log_simple_optimal_%F_%H%M%S.csv",
           localtime(&raw_time));
  return std::string(name_buffer);
}

void WriteHeaders(std::ofstream &file_stream) {
  file_stream << "current_lateral_error,"
              << "current_ref_heading,"
              << "current_heading,"
              << "current_heading_error,"
              << "heading_error_rate,"
              << "lateral_error_rate,"
              << "current_curvature,"
              << "steer_angle,"
              << "steer_angle_feedforward,"
              << "steer_angle_lateral_contribution,"
              << "steer_angle_lateral_rate_contribution,"
              << "steer_angle_heading_contribution,"
              << "steer_angle_heading_rate_contribution,"
              << "steer_angle_feedback,"
              << "steering_position,"
              << "v" << std::endl;
}
}  // namespace

LatController::LatController() : name_("LQR-based Lateral Controller") {
  if (FLAGS_enable_csv_debug) {
    steer_log_file_.open(GetLogFileName());
    steer_log_file_ << std::fixed;
    steer_log_file_ << std::setprecision(6);
    WriteHeaders(steer_log_file_);
  }
  AINFO << "Using " << name_;
}

LatController::~LatController() { CloseLogFile(); }

bool LatController::LoadControlConf(const ControlConf *control_conf) {
  const auto &vehicle_param_ =
      common::VehicleConfigHelper::instance()->GetConfig().vehicle_param();
  ts_ = control_conf->lat_controller_conf().ts();
  CHECK_GT(ts_, 0.0) << "[LatController] Invalid control update interval.";
  cf_ = control_conf->lat_controller_conf().cf();
  cr_ = control_conf->lat_controller_conf().cr();
  preview_window_ = control_conf->lat_controller_conf().preview_window();
  wheelbase_ = vehicle_param_.wheel_base();
  steer_transmission_ratio_ = vehicle_param_.steer_ratio();
  steer_single_direction_max_degree_ =
  vehicle_param_.max_steer_angle() / M_PI * 180;
  max_lat_acc_ = control_conf->lat_controller_conf().max_lateral_acceleration();

  const double mass_fl = control_conf->lat_controller_conf().mass_fl();
  const double mass_fr = control_conf->lat_controller_conf().mass_fr();
  const double mass_rl = control_conf->lat_controller_conf().mass_rl();
  const double mass_rr = control_conf->lat_controller_conf().mass_rr();
  const double mass_front = mass_fl + mass_fr;//
  const double mass_rear = mass_rl + mass_rr;
  mass_ = mass_front + mass_rear;

  lf_ = wheelbase_ * (1.0 - mass_front / mass_);// mass_front越大，Lf越小
  lr_ = wheelbase_ * (1.0 - mass_rear / mass_);
  // moment of inertia
  iz_ = lf_ * lf_ * mass_front + lr_ * lr_ * mass_rear;
  lqr_eps_ = control_conf->lat_controller_conf().eps();
  lqr_max_iteration_ = control_conf->lat_controller_conf().max_iteration();
  minimum_speed_protection_ = control_conf->minimum_speed_protection();
  AINFO << "Load lat control conf file succeed!" ;
  return true;
}

void LatController::ProcessLogs(const SimpleLateralDebug *debug,
                                const canbus::Chassis *chassis) {
  // StrCat supports 9 arguments at most.
  const std::string log_str = StrCat(
      StrCat(debug->lateral_error(), ",", debug->ref_heading(), ",",
             VehicleStateProvider::instance()->heading(), ",",
             debug->heading_error(), ","),
      StrCat(debug->heading_error_rate(), ",", debug->lateral_error_rate(), ",",
             debug->curvature(), ",", debug->steer_angle(), ","),
      StrCat(debug->steer_angle_feedforward(), ",",
             debug->steer_angle_lateral_contribution(), ",",
             debug->steer_angle_lateral_rate_contribution(), ",",
             debug->steer_angle_heading_contribution(), ","),
      StrCat(debug->steer_angle_heading_rate_contribution(), ",",
             debug->steer_angle_feedback(), ",", chassis->steering_percentage(),
             ",", VehicleStateProvider::instance()->linear_velocity()));
  if (FLAGS_enable_csv_debug) {
    steer_log_file_ << log_str << std::endl;
  }
  //ADEBUG << "Steer_Control_Detail: " << log_str;
}

void LatController::LogInitParameters() {
  AINFO << name_ << " begin.";
  AINFO << "[LatController parameters]"
        << " mass_: " << mass_ << ","
        << " iz_: " << iz_ << ","
        << " lf_: " << lf_ << ","
        << " lr_: " << lr_;
}

void LatController::InitializeFilters(const ControlConf *control_conf) {
  // Low pass filter
  std::vector<double> den(3, 0.0);
  std::vector<double> num(3, 0.0);
  common::LpfCoefficients(
      ts_, control_conf->lat_controller_conf().cutoff_freq(), &den, &num);
  digital_filter_.set_coefficients(den, num);
  lateral_error_filter_ = common::MeanFilter(
      control_conf->lat_controller_conf().mean_filter_window_size());
  heading_error_filter_ = common::MeanFilter(
      control_conf->lat_controller_conf().mean_filter_window_size());
  AINFO << "LAT Filter init succeed!" ;
}

Status LatController::Init(const ControlConf *control_conf) {
  if (!LoadControlConf(control_conf)) {
    AERROR << "failed to load control conf";
    return Status(ErrorCode::CONTROL_COMPUTE_ERROR,
                  "failed to load control_conf");
  }
  // Matrix init operations.
  const int matrix_size = basic_state_size_ + preview_window_;
  matrix_a_ = Matrix::Zero(basic_state_size_, basic_state_size_); //矩阵A初始化为全零矩阵
  matrix_ad_ = Matrix::Zero(basic_state_size_, basic_state_size_);
  matrix_adc_ = Matrix::Zero(matrix_size, matrix_size);
  //矩阵A中的常数项
  matrix_a_(0, 1) = 1.0; 
  matrix_a_(1, 2) = (cf_ + cr_) / mass_;
  matrix_a_(2, 3) = 1.0;
  matrix_a_(3, 2) = (lf_ * cf_ - lr_ * cr_) / iz_;
  //矩阵A中和速度V相关的变量
  matrix_a_coeff_ = Matrix::Zero(matrix_size, matrix_size); 
  matrix_a_coeff_(1, 1) = -(cf_ + cr_) / mass_;
  matrix_a_coeff_(1, 3) = (lr_ * cr_ - lf_ * cf_) / mass_;
  matrix_a_coeff_(2, 3) = 1.0;
  matrix_a_coeff_(3, 1) = (lr_ * cr_ - lf_ * cf_) / iz_;
  matrix_a_coeff_(3, 3) = -1.0 * (lf_ * lf_ * cf_ + lr_ * lr_ * cr_) / iz_;

  matrix_b_ = Matrix::Zero(basic_state_size_, 1);
  matrix_bd_ = Matrix::Zero(basic_state_size_, 1);
  matrix_bdc_ = Matrix::Zero(matrix_size, 1);
  matrix_b_(1, 0) = cf_ / mass_;
  matrix_b_(3, 0) = lf_ * cf_ / iz_;
  matrix_bd_ = matrix_b_ * ts_;

  matrix_state_ = Matrix::Zero(matrix_size, 1);
  matrix_k_ = Matrix::Zero(1, matrix_size);
  matrix_r_ = Matrix::Identity(1, 1);
  matrix_q_ = Matrix::Zero(matrix_size, matrix_size);
  int q_param_size = control_conf->lat_controller_conf().matrix_q_size();

  for (int i = 0; i < q_param_size; ++i) {
    matrix_q_(i, i) = control_conf->lat_controller_conf().matrix_q(i);
  }
  matrix_q_updated_ = matrix_q_;
  InitializeFilters(control_conf);
  auto &lat_controller_conf = control_conf->lat_controller_conf();
  LoadLatGainScheduler(lat_controller_conf);
  LoadSteerCalibrationTable(lat_controller_conf);
  steering_pid_controller_.Init(lat_controller_conf.steering_pid_conf()) ;
  AINFO << "LAT PID coeff " << lat_controller_conf.steering_pid_conf().kp() ;
  LogInitParameters();
  AINFO << "Lat init succeed!";
  return Status::OK();
}

void LatController::CloseLogFile() {
  if (FLAGS_enable_csv_debug && steer_log_file_.is_open()) {
    steer_log_file_.close();
  }
}

void LatController::LoadLatGainScheduler(
    const LatControllerConf &lat_controller_conf) {
  const auto &lat_err_gain_scheduler =
      lat_controller_conf.lat_err_gain_scheduler();
  const auto &heading_err_gain_scheduler =
      lat_controller_conf.heading_err_gain_scheduler();
  AINFO << "Lateral control gain scheduler loaded";
  Interpolation1D::DataType xy1, xy2;
  for (const auto &scheduler : lat_err_gain_scheduler.scheduler()) {
    xy1.push_back(std::make_pair(scheduler.speed(), scheduler.ratio()));
  }
  for (const auto &scheduler : heading_err_gain_scheduler.scheduler()) {
    xy2.push_back(std::make_pair(scheduler.speed(), scheduler.ratio()));
  }

  lat_err_interpolation_.reset(new Interpolation1D);
  CHECK(lat_err_interpolation_->Init(xy1))
      << "Fail to load lateral error gain scheduler";

  heading_err_interpolation_.reset(new Interpolation1D);
  CHECK(heading_err_interpolation_->Init(xy2))
      << "Fail to load heading error gain scheduler";
  AINFO << "Load Lateral control gain scheduler succeed!";
}

void LatController::Stop() { CloseLogFile(); }

std::string LatController::Name() const { return name_; }

Status LatController::ComputeControlCommand(
    const localization::LocalizationEstimate *localization,
    const canbus::Chassis *chassis,
    const planning::ADCTrajectory *planning_published_trajectory,
    ControlCommand *cmd) {
  if(!steer_torque_interpolation_){
      AERROR << "Fail to initialize steer calibration table ." ;
      return Status(ErrorCode::CONTROL_COMPUTE_ERROR,"Fail to initialize steer calibration table .") ;
  } 
  VehicleStateProvider::instance()->set_linear_velocity(chassis->speed_mps());
//planning发布的轨迹
   trajectory_analyzer_ =
      std::move(TrajectoryAnalyzer(planning_published_trajectory)); 

   SimpleLateralDebug *debug = cmd->mutable_debug()->mutable_simple_lat_debug();
  debug->Clear();
  // Update state = [Lateral Error, Lateral Error Rate, Heading Error, Heading
  // Error Rate, preview lateral error1 , preview lateral error2, ...]
  UpdateState(debug);    //state matrix X
  UpdateMatrix();    //获取系数矩阵A，  matrix_a_，采用离散化公式获得matrix_ad_
  UpdateMatrixCompound(); //道路预览模型复合化离散矩阵 matrix_adc_
  // Add gain sheduler for higher speed steering增加增益sheduler以实现更高的转向速度，
  //在原来的q矩阵的基础上乘以系数，速度越大，系数越小
  if (FLAGS_enable_gain_scheduler) {
    matrix_q_updated_(0, 0) =
        matrix_q_(0, 0) *
        lat_err_interpolation_->Interpolate(
            VehicleStateProvider::instance()->linear_velocity());//车速越高ratio越小，q(0,0)越小
    matrix_q_updated_(2, 2) =
        matrix_q_(2, 2) *
        heading_err_interpolation_->Interpolate(
            VehicleStateProvider::instance()->linear_velocity());
    ADEBUG<< "Q(0) = " << matrix_q_updated_(0, 0) ;
    ADEBUG << "Q(2) = " << matrix_q_updated_(2, 2) ;
    common::math::SolveLQRProblem(matrix_adc_, matrix_bdc_, matrix_q_updated_,
                                  matrix_r_, lqr_eps_, lqr_max_iteration_,
                                  &matrix_k_);
  } else {
    ADEBUG << "Q(0) = " << matrix_q_updated_(0, 0) ;
    ADEBUG << "Q(2) = " << matrix_q_updated_(2, 2) ;
    common::math::SolveLQRProblem(matrix_adc_, matrix_bdc_, matrix_q_,
                                  matrix_r_, lqr_eps_, lqr_max_iteration_,
                                  &matrix_k_);
  }
  ADEBUG << "Solve LQR succeed!" ;
  // feedback = - K * state
  // Convert vehicle steer angle from rad to degree and then to steering degree
  // then to 100% ratio
  const double steer_angle_feedback = -(matrix_k_ * matrix_state_)(0, 0) * 180 /
                                      M_PI * steer_transmission_ratio_ /
                                      steer_single_direction_max_degree_ * 100;
  AINFO << "steer_angle_feedback = " << steer_angle_feedback ;
  //计算前馈
  const double steer_angle_feedforward = ComputeFeedForward(debug->curvature());
  AINFO << "steer_angle_feedforward = " << steer_angle_feedforward ;
  // Clamp the steer angle to -100.0 to 100.0
  double steer_angle = common::math::Clamp(
      steer_angle_feedback + steer_angle_feedforward, -100.0, 100.0);
   AINFO << "steer_angle = " << steer_angle <<"%";
  if (FLAGS_set_steer_limit) {
    
    const double steer_limit =
        std::atan(max_lat_acc_ * wheelbase_ /
                  (VehicleStateProvider::instance()->linear_velocity() *
                   VehicleStateProvider::instance()->linear_velocity())) *
        steer_transmission_ratio_ * 180 / M_PI /
        steer_single_direction_max_degree_ * 100;//根据车速限制车轮最大转向角
    // Clamp the steer angle
    double steer_angle_limited =
        common::math::Clamp(steer_angle, -steer_limit, steer_limit);//将计算出的车轮转角限制在最大转向角内
    steer_angle_limited = digital_filter_.Filter(steer_angle_limited);//数字滤波，滤去高频信号
    steer_angle = steer_angle_limited;
    debug->set_steer_angle_limited(steer_angle_limited);
    AINFO << "Limited steer angle according to vehicle speed " << steer_angle_limited;
  } else {
    steer_angle = digital_filter_.Filter(steer_angle);
  }

//车速<锁轮速度且D档且完全自动驾驶
  if (VehicleStateProvider::instance()->linear_velocity() <
          FLAGS_lock_steer_speed &&
      VehicleStateProvider::instance()->gear() == canbus::Chassis::GEAR_DRIVE &&
      chassis->driving_mode() == canbus::Chassis::COMPLETE_AUTO_DRIVE) {
    steer_angle = pre_steer_angle_;
    AINFO << "vehicle speed <lock_steer_speed, Use pre_steer_angle!" ;
  }
  pre_steer_angle_ = steer_angle;

  double steer_angle_diff = steer_angle - previous_steer_angle ; //前后两次计算的转角百分比的差值
  steer_angle_diff = common::math::Clamp(steer_angle_diff,-10.0,10.0);
  steer_angle = previous_steer_angle + steer_angle_diff ;
  previous_steer_angle = steer_angle ;
  //将转角百分比转化到角度
  double steering_angle_ = steer_angle * steer_single_direction_max_degree_ / 100 ;
 // double steer_calibration = 0.0 ;
  ADEBUG << "Vehicle speed is :" << VehicleStateProvider::instance()->linear_velocity() ;
  AINFO << "CALIBRATION angle is :" << steering_angle_ ;
  //插值求转矩
  double steer_calibration = steer_torque_interpolation_->Interpolate(steering_angle_) ;
  AINFO << "Steering calibration value = " << steer_calibration ;
  if (!FLAGS_enable_use_steering_pid){
     AINFO << "Not use steering PID" ;
     steer_calibration  =  VehicleStateProvider::instance()->linear_velocity() * FLAGS_steering_calibration_coeff * steer_calibration ;
     const auto preview_point = traje ctory_analyzer_.QueryNearestPointByRelativeTime(2*ts_*preview_window_);
     const auto matched_point = trajectory_analyzer_.QueryNearestPointByPosition(vehicle_x , vehicle_y);
     double linear_v = VehicleStateProvider::instance()->linear_velocity() ;
     if(linear_v !=0){
        auto matched_to_preview_time_t =std::fabs((preview_point.path_point().s()-matched_point.path_point().s()) / linear_v);
        AINFO << "preview s :" << preview_point.path_point().s() << ", matched s" << matched_point.path_point().s();
        if(matched_to_preview_time_t !=0){
           //auto steering_angle_change_rate = (steering_angle_ - chassis->steering_percentage())/matched_to_preview_time_t ;
          auto steering_angle_change_rate = (common::math::NormalizeAngle(preview_point.path_point().theta()-VehicleStateProvider::instance()->heading()))/matched_to_preview_time_t ;
          AINFO << "matched_to_preview_time_t = " << matched_to_preview_time_t ;
            // AINFO << "DETA THETA  = " << steering_angle_ - chassis->steering_percentage() ;
          AINFO << "Heading error  = " << common::math::NormalizeAngle(preview_point.path_point().theta()-VehicleStateProvider::instance()->heading());
          AINFO << "heading_error_change_rate  = " << steering_angle_change_rate ;
          steer_calibration = steer_calibration + steering_angle_change_rate * FLAGS_steering_angle_change_rate_coeff ;
          AINFO << "steering_angle_change_rate influence torque  = " <<  steering_angle_change_rate * FLAGS_steering_angle_change_rate_coeff << ",the coeff is" << FLAGS_steering_angle_change_rate_coeff;
        }
     }
  } else{
    AINFO << "Use steering PID";
    auto steering_angle_error = steering_angle_ - chassis->steering_percentage();
    AINFO << "steering_angle_error  = " << (steering_angle_ - chassis->steering_percentage()) ;
    auto steering_torque_offset = steering_pid_controller_.Control(steering_angle_error , ts_) ;
    steer_calibration = steer_calibration + steering_torque_offset ;
    AINFO << "steering_torque_offset = " << steering_torque_offset ;
  }
  steer_calibration = common::math::Clamp(steer_calibration , -3.0 , 3.0) ;
  cmd->set_steering_torque(steer_calibration);
  //USING PID
  AINFO << "Steering torque is " << cmd->steering_torque();
  cmd->set_steering_rate(FLAGS_steer_angle_rate);

  debug->set_heading(VehicleStateProvider::instance()->heading());
  debug->set_steer_angle(steering_angle_);
  debug->set_steering_torque(steer_calibration) ;
  debug->set_steer_angle_feedforward(steer_angle_feedforward);
  debug->set_steer_angle_feedback(steer_angle_feedback);
  debug->set_steering_position(chassis->steering_percentage());
  debug->set_ref_speed(VehicleStateProvider::instance()->linear_velocity());
  debug->set_steer_targe_position_error(steer_angle - chassis->steering_percentage()) ;//增加车轮目标位置和实际位置误差输出信息
  ProcessLogs(debug, chassis); 
  return Status::OK();
}

Status LatController::Reset() {
  steering_pid_controller_.Reset();
  return Status::OK();
}
//更新状态矩阵
void LatController::UpdateState(SimpleLateralDebug *debug) {
    const auto &com = VehicleStateProvider::instance()->ComputeCOMPosition(lr_);
    vehicle_x = com.x() ; 
    vehicle_y = com.y() ;
   // vehicle_x = VehicleStateProvider::instance()->x() ;
   // vehicle_y = VehicleStateProvider::instance()->y();
     ComputeLateralErrors(vehicle_x,vehicle_y,
                         VehicleStateProvider::instance()->heading(),
                         VehicleStateProvider::instance()->linear_velocity(),
                         VehicleStateProvider::instance()->angular_velocity(),
                         trajectory_analyzer_, debug);
  // Reverse heading error if vehicle is going in reverse
  if (VehicleStateProvider::instance()->gear() ==
      canbus::Chassis::GEAR_REVERSE) {
    debug->set_heading_error(-debug->heading_error());
    AINFO << "vehicle is going in reverse!" ;
  }
  // State matrix update;First four elements are fixed;
  AINFO << "Lateral error is :" << debug->lateral_error() ;
  AINFO << "Heading error is :" << debug->heading_error() ;
  matrix_state_(0, 0) = debug->lateral_error();
  matrix_state_(1, 0) = debug->lateral_error_rate();
  matrix_state_(2, 0) = debug->heading_error();
  matrix_state_(3, 0) = debug->heading_error_rate();
  // Next elements are depending on preview window size;后四个元素取决于预瞄窗口的大小，设置的preview_window=0 ;
  for (int i = 0; i < preview_window_; ++i) {
  //  AINFO << "lat use preview_window, lat preview_window size is :" << preview_window_ ;
    const double preview_time = ts_ * (i + 1);
    const auto preview_point =
        trajectory_analyzer_.QueryNearestPointByRelativeTime(preview_time);//这应该是目标轨迹点
   // AINFO << "preview_point information:" << preview_point.ShortDebugString() ;
    const auto matched_point = trajectory_analyzer_.QueryNearestPointByPosition(
        preview_point.path_point().x(), preview_point.path_point().y());//???matched point和preview——point为一个点？这应该是
        //预瞄时间之后的车辆位置
      //  AINFO << "matched_point information:" << matched_point.ShortDebugString() ;
    const double dx =
        preview_point.path_point().x() - matched_point.path_point().x();
    const double dy =
        preview_point.path_point().y() - matched_point.path_point().y();
    const double cos_matched_theta =
        std::cos(matched_point.path_point().theta());
    const double sin_matched_theta =
        std::sin(matched_point.path_point().theta());
    const double preview_d_error =
        cos_matched_theta * dy - sin_matched_theta * dx;//预瞄横向误差
    matrix_state_(basic_state_size_ + i, 0) = preview_d_error;//在X的下一行增加预瞄横向误差
  }
  AINFO << "Update state X succeed!";
}

void LatController::UpdateMatrix() {
  const double v = std::max(VehicleStateProvider::instance()->linear_velocity(),
                            minimum_speed_protection_);
  matrix_a_(1, 1) = matrix_a_coeff_(1, 1) / v;
  matrix_a_(1, 3) = matrix_a_coeff_(1, 3) / v;
  matrix_a_(3, 1) = matrix_a_coeff_(3, 1) / v;
  matrix_a_(3, 3) = matrix_a_coeff_(3, 3) / v;
  Matrix matrix_i = Matrix::Identity(matrix_a_.cols(), matrix_a_.cols());
  matrix_ad_ = (matrix_i - ts_ * 0.5 * matrix_a_).inverse() *
               (matrix_i + ts_ * 0.5 * matrix_a_);
  AINFO << "Update Matrix A succeed!" ;
}

void LatController::UpdateMatrixCompound() {
  // Initialize preview matrix
  matrix_adc_.block(0, 0, basic_state_size_, basic_state_size_) = matrix_ad_;
  matrix_bdc_.block(0, 0, basic_state_size_, 1) = matrix_bd_;
  if (preview_window_ > 0) {
    matrix_bdc_(matrix_bdc_.rows() - 1, 0) = 1;
    // Update A matrix;
    for (int i = 0; i < preview_window_ - 1; ++i) {
      matrix_adc_(basic_state_size_ + i, basic_state_size_ + 1 + i) = 1;
    }
  }
  AINFO << "UpdateMatrixCompound succeed!" ;
}

double LatController::ComputeFeedForward(double ref_curvature) const {
  const double kv =
      lr_ * mass_ / 2 / cf_ / wheelbase_ - lf_ * mass_ / 2 / cr_ / wheelbase_;

  // then change it from rad to %
  const double v = VehicleStateProvider::instance()->linear_velocity();
  const double steer_angle_feedforwardterm =
      (wheelbase_ * ref_curvature + kv * v * v * ref_curvature -
       matrix_k_(0, 2) *
           (lr_ * ref_curvature -
            lf_ * mass_ * v * v * ref_curvature / 2 / cr_ / wheelbase_)) *
      180 / M_PI * steer_transmission_ratio_ /
      steer_single_direction_max_degree_ * 100;
  AINFO << "ComputeFeedForward succeed!" ;
  return steer_angle_feedforwardterm;
}

void LatController::ComputeLateralErrors(
    const double x, const double y, const double theta, const double linear_v,
    const double angular_v, const TrajectoryAnalyzer &trajectory_analyzer,
    SimpleLateralDebug *debug) {
  TrajectoryPoint target_point = trajectory_analyzer.QueryNearestPointByPosition(x, y);
  const double dx = x - target_point.path_point().x();
  const double dy = y - target_point.path_point().y();

  AINFO << "x point: " << x << " y point: " << y;
  AINFO << "match point information : " << target_point.ShortDebugString();

  const double cos_target_heading = std::cos(target_point.path_point().theta());
  const double sin_target_heading = std::sin(target_point.path_point().theta());

  const double lateral_error =cos_target_heading * dy - sin_target_heading * dx;
  AINFO << "cos_target_heading =" << cos_target_heading << ",sin_target_heading = " << sin_target_heading ;
  AINFO << "dx = " << dx << ",dy = " << dy << ",lateral_error =" << lateral_error ;
  debug->set_lateral_error(lateral_error);

  const double heading_error = common::math::NormalizeAngle(theta - target_point.path_point().theta());
  AINFO << "cos_target_heading =" << cos_target_heading << ",sin_target_heading = " << sin_target_heading ;
  AINFO << "dx = " << dx << ",dy = " << dy << ",lateral_error =" << lateral_error ;
  debug->set_heading_error(heading_error);
  auto lateral_error_rate = linear_v * std::sin(heading_error);
  debug->set_lateral_error_rate(lateral_error_rate);//横向误差变化率

  auto heading_error_rate = angular_v - target_point.path_point().kappa() * target_point.v() ;
  debug->set_heading_error_rate(heading_error_rate);//航向误差率

  debug->set_ref_heading(target_point.path_point().theta());//参考航向
  debug->set_curvature(target_point.path_point().kappa());//参考曲率
}

//load steer_torque calibration
void LatController::LoadSteerCalibrationTable(const LatControllerConf &lat_controller_conf){
  const auto &steer_torque_table = lat_controller_conf.steer_calibration_table() ;
  AINFO << "Steer_torque calibration table is loaded,the size of calibration is" 
      << steer_torque_table.steer_calibration_size() ;
  Interpolation1D::DataType xy ;
  for (const auto &calibration : steer_torque_table.steer_calibration()){
    xy.push_back(std::make_pair(calibration.angle(),
                                  calibration.torque())) ;
  }
  steer_torque_interpolation_.reset(new Interpolation1D) ;
  CHECK(steer_torque_interpolation_->Init(xy))<<"Fail to init steer_torque_interpolation"  ;
   AINFO << "Load Lateral control steering-torque calibration succeed!";
}


}  // namespace control
}  // namespace jmc_auto
