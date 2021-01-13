/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_steering_motor_rpt_3_75_h
#define impl_type_steering_motor_rpt_3_75_h




#include "impl_type_double.h"
#include "impl_type_bool.h"


struct Steering_motor_rpt_3_75 {
    ::Double torque_output;
    
    ::Double torque_input;
    
    ::Bool engine_started;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(torque_output);
        fun(torque_input);
        fun(engine_started);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(torque_output);
        fun(torque_input);
        fun(engine_started);
    }

    bool operator == (const ::Steering_motor_rpt_3_75& t) const {
        return (torque_output == t.torque_output) && (torque_input == t.torque_input) && (engine_started == t.engine_started);
    }
};


#endif // impl_type_steering_motor_rpt_3_75_h
