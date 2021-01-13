/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_light_h
#define impl_type_light_h










#include "impl_type_float.h"
#include "impl_type_bool.h"
#include "impl_type_header.h"


struct Light {
    ::Float SOC;
    
    ::Float speed_mps;
    
    ::Float ACC_Speed;
    
    ::Float throttle_percentage;
    
    ::Float brake_percentage;
    
    ::Float steering_percentage;
    
    ::Float steering_percentage;
    
    ::Header header;
    
    ::Bool engine_started;
    

    static bool IsPlane()
    {
        return false;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(SOC);
        fun(speed_mps);
        fun(ACC_Speed);
        fun(throttle_percentage);
        fun(brake_percentage);
        fun(steering_percentage);
        fun(steering_percentage);
        fun(header);
        fun(engine_started);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(SOC);
        fun(speed_mps);
        fun(ACC_Speed);
        fun(throttle_percentage);
        fun(brake_percentage);
        fun(steering_percentage);
        fun(steering_percentage);
        fun(header);
        fun(engine_started);
    }

    bool operator == (const ::Light& t) const {
        return (SOC == t.SOC) && (speed_mps == t.speed_mps) && (ACC_Speed == t.ACC_Speed) && (throttle_percentage == t.throttle_percentage) && (brake_percentage == t.brake_percentage) && (steering_percentage == t.steering_percentage) && (steering_percentage == t.steering_percentage) && (header == t.header) && (engine_started == t.engine_started);
    }
};


#endif // impl_type_light_h