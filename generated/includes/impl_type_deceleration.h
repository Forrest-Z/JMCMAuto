/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_deceleration_h
#define impl_type_deceleration_h








#include "impl_type_double.h"
#include "impl_type_bool.h"


struct Deceleration {
    ::Bool is_deceleration_available;
    
    ::Bool is_deceleration_active;
    
    ::Double deceleration;
    
    ::Double is_evb_fail;
    
    ::Double evb_pressure;
    
    ::Double brake_pressure;
    
    ::Double brake_pressure_spd;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(is_deceleration_available);
        fun(is_deceleration_active);
        fun(deceleration);
        fun(is_evb_fail);
        fun(evb_pressure);
        fun(brake_pressure);
        fun(brake_pressure_spd);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(is_deceleration_available);
        fun(is_deceleration_active);
        fun(deceleration);
        fun(is_evb_fail);
        fun(evb_pressure);
        fun(brake_pressure);
        fun(brake_pressure_spd);
    }

    bool operator == (const ::Deceleration& t) const {
        return (is_deceleration_available == t.is_deceleration_available) && (is_deceleration_active == t.is_deceleration_active) && (deceleration == t.deceleration) && (is_evb_fail == t.is_evb_fail) && (evb_pressure == t.evb_pressure) && (brake_pressure == t.brake_pressure) && (brake_pressure_spd == t.brake_pressure_spd);
    }
};


#endif // impl_type_deceleration_h
