/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_wiper_cmd_90_h
#define impl_type_wiper_cmd_90_h


#include "impl_type_wiper_cmdtype.h"


struct Wiper_cmd_90 {
    ::Wiper_cmdType wiper_cmd ;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(wiper_cmd );
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(wiper_cmd );
    }

    bool operator == (const ::Wiper_cmd_90& t) const {
        return (wiper_cmd  == t.wiper_cmd );
    }
};


#endif // impl_type_wiper_cmd_90_h