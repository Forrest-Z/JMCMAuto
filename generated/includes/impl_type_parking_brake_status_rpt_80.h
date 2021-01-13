/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_parking_brake_status_rpt_80_h
#define impl_type_parking_brake_status_rpt_80_h


#include "impl_type_parking_brake_enabledtype.h"


struct Parking_brake_status_rpt_80 {
    ::Parking_brake_enabledType parking_brake_enabled;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(parking_brake_enabled);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(parking_brake_enabled);
    }

    bool operator == (const ::Parking_brake_status_rpt_80& t) const {
        return (parking_brake_enabled == t.parking_brake_enabled);
    }
};


#endif // impl_type_parking_brake_status_rpt_80_h
