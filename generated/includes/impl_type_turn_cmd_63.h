/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_turn_cmd_63_h
#define impl_type_turn_cmd_63_h


#include "impl_type_turn_signal_cmdtype.h"


struct Turn_cmd_63 {
    ::Turn_signal_cmdType turn_signal_cmd;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(turn_signal_cmd);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(turn_signal_cmd);
    }

    bool operator == (const ::Turn_cmd_63& t) const {
        return (turn_signal_cmd == t.turn_signal_cmd);
    }
};


#endif // impl_type_turn_cmd_63_h
