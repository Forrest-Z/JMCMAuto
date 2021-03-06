/******************************************************************************
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

#include "modules/control/common/control_gflags.h"

DEFINE_string(control_conf_file, "modules/control/conf/vehicle.pb.txt",
              "default control conf data file");

DEFINE_string(control_adapter_config_filename,
              "modules/control/conf/adapter.conf", "The adapter config file");

DEFINE_bool(enable_csv_debug, false, "True to write out csv debug file.");
DEFINE_bool(enable_speed_station_preview, true, "enable speed/station preview");
DEFINE_string(control_node_name, "control", "The control node name in proto");
DEFINE_bool(is_control_test_mode, false, "True to run control in test mode");
DEFINE_double(control_test_duration, -1.0,
              "Control testing duration in seconds. This number is will not "
              "take effect if negative");
//DEFINE_bool(use_preview_speed_for_table, false,
  //          "True to use preview speed for table lookup");

DEFINE_bool(enable_input_timestamp_check, true,
            "True to enable input timestamp delay check");

DEFINE_int32(max_localization_miss_num, 20,
             "Max missing number of localization before entering estop mode");
DEFINE_int32(max_chassis_miss_num, 20,
             "Max missing number of chassis before entering estop mode");
DEFINE_int32(max_planning_miss_num, 20,
             "Max missing number of planning before entering estop mode");

DEFINE_double(max_acceleration_when_stopped, 0.01,
              "max acceleration can be observed when vehicle is stopped");

DEFINE_double(steer_angle_rate, 200.0,
              "Steer angle change rate in percentage.");
DEFINE_bool(enable_gain_scheduler, false,
            "Enable gain scheduler for higher vehicle speed");
DEFINE_bool(set_steer_limit, false, "Set steer limit");

DEFINE_bool(enable_slope_offset, false, "Enable slope offset compensation");

DEFINE_double(lock_steer_speed, 0.05,
              "Minimum speed to lock the steer, in m/s");

//DEFINE_bool(enable_navigation_mode_handlilng, false,
//            "Enable special handling for navigation mode");

DEFINE_bool(enable_persistent_estop, false,
            "True to persistent keep estop status, "
            "pad reset can reset the estop status.");
DEFINE_bool(enable_steering_calibration_compensate,false,"true to compensate steeing calibration") ;
DEFINE_double(steering_calibration_coeff, 1.0, "the coeff of steering calibration");
DEFINE_double(max_abs_speed_when_stopped, 0.01, "Stop speed");
DEFINE_double(stop_path_remain, 0.1, "Stop path remain");
DEFINE_double(steering_angle_change_rate_coeff , 0.5, "Steering change rate influence steering torque");
DEFINE_bool(enable_use_steering_pid , true , "True to use pid control to compensate steering torque,false to use coeff compensation") ;
DEFINE_bool(use_preview_point,false,"True to use new preview methed");
DEFINE_bool(reverse_heading_control,true, "test vehicle reverse control");

DEFINE_bool(
    trajectory_transform_to_com_reverse, false,
    "Enable planning trajectory coordinate transformation from center of "
    "rear-axis to center of mass, during reverse driving");
DEFINE_bool(
    trajectory_transform_to_com_drive,false,
    "Enable planning trajectory coordinate transformation from center of "
    "rear-axis to center of mass, during forward driving");

DEFINE_bool(enable_maximum_steer_rate_limit, false,
            "Enable steer rate limit obtained from vehicle_param.pb.txt");

DEFINE_bool(query_time_nearest_point_only, false,
            "only use the trajectory point at nearest time as target point");

DEFINE_bool(query_forward_time_point_only, false,
            "only use the trajectory point in future");

DEFINE_bool(enable_feedback_augment_on_high_speed, false,
            "Enable augmented control on lateral error on high speed");

DEFINE_bool(
    enable_gear_drive_negative_speed_protection, false,
    "Enable estop to prevent following negative speed during gear drive");

