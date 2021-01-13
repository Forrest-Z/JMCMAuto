/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_vehicleparameter_h
#define impl_type_vehicleparameter_h




#include "impl_type_double.h"
#include "impl_type_int32.h"


struct VehicleParameter {
    ::Double brand;
    
    ::Double max_engine_pedal;
    
    ::Int32 max_enable_fail_attempt;
    
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(brand);
        fun(max_engine_pedal);
        fun(max_enable_fail_attempt);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(brand);
        fun(max_engine_pedal);
        fun(max_enable_fail_attempt);
    }

    bool operator == (const ::VehicleParameter& t) const {
        return (brand == t.brand) && (max_engine_pedal == t.max_engine_pedal) && (max_enable_fail_attempt == t.max_enable_fail_attempt);
    }
};


#endif // impl_type_vehicleparameter_h
