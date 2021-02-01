/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_chassis_h
#define impl_type_chassis_h














































































#include "impl_type_gearposition.h"
#include "impl_type_double.h"
#include "impl_type_brkpedalstasus.h"
#include "impl_type_bool.h"
#include "impl_type_float.h"
#include "impl_type_int32.h"
#include "impl_type_drivingmode.h"
#include "impl_type_chassiserrorcode.h"
#include "impl_type_chassisgps.h"
#include "impl_type_wheel_speed_rpt_7a.h"


struct Chassis {
    ::Bool engine_started;
    
    ::Float engine_rpm;
    
    ::Float speed_mps;
    
    ::Float odometer_m;
    
    ::Int32 fuel_range_m;
    
    ::Float throttle_percentage;
    
    ::Float brake_percentage;
    
    ::Float steering_percentage;
    
    ::Float steering_torque_nm;
    
    ::Bool parking_brake;
    
    ::Bool high_beam_signal;
    
    ::Bool low_beam_signal;
    
    ::Bool left_turn_signal;
    
    ::Bool right_turn_signal;
    
    ::Bool horn;
    
    ::Bool wiper;
    
    ::Bool disengage_status;
    
    ::DrivingMode driving_mode;
    
    ::ChassisErrorCode error_code;
    
    ::GearPosition gear_location;
    
    ::Double steering_timestamp;
    
    
    ::Int32 chassis_error_mask;
    
    ::Bool signal;
    
    ::ChassisGPS chassis_gps;
    
    ::Bool engage_advice;
    
    ::Wheel_speed_rpt_7a wheel_speed;
    
    ::Bool surround;
    
    ::Bool license;
    
    ::Float lon_acc;
    
    ::Float steer_wheel_rot_spd;
    
    ::Bool abs_vehspdlgt_valid;
    
    ::Bool esp_algtstatus_valid;
    
    ::Bool sas_sasstssnsr_valid;
    
    ::Bool steerwheelrotspd_valid;
    
    ::Bool eps_lkaresponsetorque_valid;
    
    ::Float eps_torsionbartorque;
    
    ::Bool eps_tosionbartorquevalid;
    
    ::Int32 abs_whlmilgfrntri;
    
    ::Int32 abs_whlmilgfrntle;
    
    ::Int32 abs_whlmilgrearre;
    
    ::Int32 abs_whlmilgrearle;
    
    ::Int32 esp_wheelpulse_fl;
    
    ::Int32 esp_wheelpulse_fr;
    
    ::Int32 esp_wheelpulse_rl;
    
    ::Int32 esp_wheelpulse_rr;
    
    ::Double ems_accpedalratio;
    
    ::BrkPedalStasus brkpedalstasus;
    
    ::Double abs_whlspdfrntle;
    
    ::Double abs_whlspdfrntri;
    
    ::Double abs_whlspdrele;
    
    ::Double abs_whlspdreri;
    
    ::Double acc_x;
    
    ::Double acc_y;
    
    ::Double acc_z;
    
    ::Double gyro_x;
    
    ::Double gyro_y;
    
    ::Double gyro_z;
    
    ::Double ins_pitchangle;
    
    ::Double ins_rollangle;
    
    ::Double ins_headingangle;
    
    ::Double ins_locatheight;
    
    ::Double ins_time;
    
    ::Double ins_latitude;
    
    ::Double ins_longitude;
    
    ::Double ins_northspd;
    
    ::Double ins_eastspd;
    
    ::Double ins_togroundspd;
    
    ::Int32 ins_gpsflag_pos;
    
    ::Int32 ins_numsv;
    
    ::Int32 ins_gpsflag_heading;
    
    ::Int32 ins_gps_age;
    
    ::Int32 ins_car_status;
    
    ::Int32 ins_status;
    
    ::Double ins_std_lat;
    
    ::Double ins_std_lon;
    
    ::Double ins_std_locat_height;
    
    ::Double ins_std_heading;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(engine_started);
        fun(engine_rpm);
        fun(speed_mps);
        fun(odometer_m);
        fun(fuel_range_m);
        fun(throttle_percentage);
        fun(brake_percentage);
        fun(steering_percentage);
        fun(steering_torque_nm);
        fun(parking_brake);
        fun(high_beam_signal);
        fun(low_beam_signal);
        fun(left_turn_signal);
        fun(right_turn_signal);
        fun(horn);
        fun(wiper);
        fun(disengage_status);
        fun(driving_mode);
        fun(error_code);
        fun(gear_location);
        fun(steering_timestamp);
        fun(chassis_error_mask);
        fun(signal);
        fun(chassis_gps);
        fun(engage_advice);
        fun(wheel_speed);
        fun(surround);
        fun(license);
        fun(lon_acc);
        fun(steer_wheel_rot_spd);
        fun(abs_vehspdlgt_valid);
        fun(esp_algtstatus_valid);
        fun(sas_sasstssnsr_valid);
        fun(steerwheelrotspd_valid);
        fun(eps_lkaresponsetorque_valid);
        fun(eps_torsionbartorque);
        fun(eps_tosionbartorquevalid);
        fun(abs_whlmilgfrntri);
        fun(abs_whlmilgfrntle);
        fun(abs_whlmilgrearre);
        fun(abs_whlmilgrearle);
        fun(esp_wheelpulse_fl);
        fun(esp_wheelpulse_fr);
        fun(esp_wheelpulse_rl);
        fun(esp_wheelpulse_rr);
        fun(ems_accpedalratio);
        fun(brkpedalstasus);
        fun(abs_whlspdfrntle);
        fun(abs_whlspdfrntri);
        fun(abs_whlspdrele);
        fun(abs_whlspdreri);
        fun(acc_x);
        fun(acc_y);
        fun(acc_z);
        fun(gyro_x);
        fun(gyro_y);
        fun(gyro_z);
        fun(ins_pitchangle);
        fun(ins_rollangle);
        fun(ins_headingangle);
        fun(ins_locatheight);
        fun(ins_time);
        fun(ins_latitude);
        fun(ins_longitude);
        fun(ins_northspd);
        fun(ins_eastspd);
        fun(ins_togroundspd);
        fun(ins_gpsflag_pos);
        fun(ins_numsv);
        fun(ins_gpsflag_heading);
        fun(ins_gps_age);
        fun(ins_car_status);
        fun(ins_status);
        fun(ins_std_lat);
        fun(ins_std_lon);
        fun(ins_std_locat_height);
        fun(ins_std_heading);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(engine_started);
        fun(engine_rpm);
        fun(speed_mps);
        fun(odometer_m);
        fun(fuel_range_m);
        fun(throttle_percentage);
        fun(brake_percentage);
        fun(steering_percentage);
        fun(steering_torque_nm);
        fun(parking_brake);
        fun(high_beam_signal);
        fun(low_beam_signal);
        fun(left_turn_signal);
        fun(right_turn_signal);
        fun(horn);
        fun(wiper);
        fun(disengage_status);
        fun(driving_mode);
        fun(error_code);
        fun(gear_location);
        fun(steering_timestamp);
        fun(chassis_error_mask);
        fun(signal);
        fun(chassis_gps);
        fun(engage_advice);
        fun(wheel_speed);
        fun(surround);
        fun(license);
        fun(lon_acc);
        fun(steer_wheel_rot_spd);
        fun(abs_vehspdlgt_valid);
        fun(esp_algtstatus_valid);
        fun(sas_sasstssnsr_valid);
        fun(steerwheelrotspd_valid);
        fun(eps_lkaresponsetorque_valid);
        fun(eps_torsionbartorque);
        fun(eps_tosionbartorquevalid);
        fun(abs_whlmilgfrntri);
        fun(abs_whlmilgfrntle);
        fun(abs_whlmilgrearre);
        fun(abs_whlmilgrearle);
        fun(esp_wheelpulse_fl);
        fun(esp_wheelpulse_fr);
        fun(esp_wheelpulse_rl);
        fun(esp_wheelpulse_rr);
        fun(ems_accpedalratio);
        fun(brkpedalstasus);
        fun(abs_whlspdfrntle);
        fun(abs_whlspdfrntri);
        fun(abs_whlspdrele);
        fun(abs_whlspdreri);
        fun(acc_x);
        fun(acc_y);
        fun(acc_z);
        fun(gyro_x);
        fun(gyro_y);
        fun(gyro_z);
        fun(ins_pitchangle);
        fun(ins_rollangle);
        fun(ins_headingangle);
        fun(ins_locatheight);
        fun(ins_time);
        fun(ins_latitude);
        fun(ins_longitude);
        fun(ins_northspd);
        fun(ins_eastspd);
        fun(ins_togroundspd);
        fun(ins_gpsflag_pos);
        fun(ins_numsv);
        fun(ins_gpsflag_heading);
        fun(ins_gps_age);
        fun(ins_car_status);
        fun(ins_status);
        fun(ins_std_lat);
        fun(ins_std_lon);
        fun(ins_std_locat_height);
        fun(ins_std_heading);
    }

    bool operator == (const ::Chassis& t) const {
        return (engine_started == t.engine_started) && (engine_rpm == t.engine_rpm) && (speed_mps == t.speed_mps) && (odometer_m == t.odometer_m) && (fuel_range_m == t.fuel_range_m) && (throttle_percentage == t.throttle_percentage) && (brake_percentage == t.brake_percentage) && (steering_percentage == t.steering_percentage) && (steering_torque_nm == t.steering_torque_nm) && (parking_brake == t.parking_brake) && (high_beam_signal == t.high_beam_signal) && (low_beam_signal == t.low_beam_signal) && (left_turn_signal == t.left_turn_signal) && (right_turn_signal == t.right_turn_signal) && (horn == t.horn) && (wiper == t.wiper) && (disengage_status == t.disengage_status) && (driving_mode == t.driving_mode) && (error_code == t.error_code) && (gear_location == t.gear_location) && (steering_timestamp == t.steering_timestamp) && (chassis_error_mask == t.chassis_error_mask) && (signal == t.signal) && (chassis_gps == t.chassis_gps) && (engage_advice == t.engage_advice) && (wheel_speed == t.wheel_speed) && (surround == t.surround) && (license == t.license) && (lon_acc == t.lon_acc) && (steer_wheel_rot_spd == t.steer_wheel_rot_spd) && (abs_vehspdlgt_valid == t.abs_vehspdlgt_valid) && (esp_algtstatus_valid == t.esp_algtstatus_valid) && (sas_sasstssnsr_valid == t.sas_sasstssnsr_valid) && (steerwheelrotspd_valid == t.steerwheelrotspd_valid) && (eps_lkaresponsetorque_valid == t.eps_lkaresponsetorque_valid) && (eps_torsionbartorque == t.eps_torsionbartorque) && (eps_tosionbartorquevalid == t.eps_tosionbartorquevalid) && (abs_whlmilgfrntri == t.abs_whlmilgfrntri) && (abs_whlmilgfrntle == t.abs_whlmilgfrntle) && (abs_whlmilgrearre == t.abs_whlmilgrearre) && (abs_whlmilgrearle == t.abs_whlmilgrearle) && (esp_wheelpulse_fl == t.esp_wheelpulse_fl) && (esp_wheelpulse_fr == t.esp_wheelpulse_fr) && (esp_wheelpulse_rl == t.esp_wheelpulse_rl) && (esp_wheelpulse_rr == t.esp_wheelpulse_rr) && (ems_accpedalratio == t.ems_accpedalratio) && (brkpedalstasus == t.brkpedalstasus) && (abs_whlspdfrntle == t.abs_whlspdfrntle) && (abs_whlspdfrntri == t.abs_whlspdfrntri) && (abs_whlspdrele == t.abs_whlspdrele) && (abs_whlspdreri == t.abs_whlspdreri) && (acc_x == t.acc_x) && (acc_y == t.acc_y) && (acc_z == t.acc_z) && (gyro_x == t.gyro_x) && (gyro_y == t.gyro_y) && (gyro_z == t.gyro_z) && (ins_pitchangle == t.ins_pitchangle) && (ins_rollangle == t.ins_rollangle) && (ins_headingangle == t.ins_headingangle) && (ins_locatheight == t.ins_locatheight) && (ins_time == t.ins_time) && (ins_latitude == t.ins_latitude) && (ins_longitude == t.ins_longitude) && (ins_northspd == t.ins_northspd) && (ins_eastspd == t.ins_eastspd) && (ins_togroundspd == t.ins_togroundspd) && (ins_gpsflag_pos == t.ins_gpsflag_pos) && (ins_numsv == t.ins_numsv) && (ins_gpsflag_heading == t.ins_gpsflag_heading) && (ins_gps_age == t.ins_gps_age) && (ins_car_status == t.ins_car_status) && (ins_status == t.ins_status) && (ins_std_lat == t.ins_std_lat) && (ins_std_lon == t.ins_std_lon) && (ins_std_locat_height == t.ins_std_locat_height) && (ins_std_heading == t.ins_std_heading);
    }
};


#endif // impl_type_chassis_h
