/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_ins_heightandtime_503_h
#define impl_type_ins_heightandtime_503_h



#include "impl_type_double.h"
#include "impl_type_int32.h"


struct Ins_heightandtime_503 {
    ::Double ins_locatheight;
    
    ::Int32 ins_time;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(ins_locatheight);
        fun(ins_time);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(ins_locatheight);
        fun(ins_time);
    }

    bool operator == (const ::Ins_heightandtime_503& t) const {
        return (ins_locatheight == t.ins_locatheight) && (ins_time == t.ins_time);
    }
};


#endif // impl_type_ins_heightandtime_503_h
