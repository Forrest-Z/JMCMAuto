/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_turn_rpt_64_h
#define impl_type_turn_rpt_64_h




#include "impl_type_turn_rpt_64manual_inputtype.h"
#include "impl_type_turn_rpt_64commanded_valuetype.h"
#include "impl_type_turn_rpt_64output_valuetype.h"


struct Turn_rpt_64 {
    ::Turn_rpt_64Manual_inputType manual_input;
    
    ::Turn_rpt_64Commanded_valueType commanded_value;
    
    ::Turn_rpt_64Output_valueType output_value;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(manual_input);
        fun(commanded_value);
        fun(output_value);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(manual_input);
        fun(commanded_value);
        fun(output_value);
    }

    bool operator == (const ::Turn_rpt_64& t) const {
        return (manual_input == t.manual_input) && (commanded_value == t.commanded_value) && (output_value == t.output_value);
    }
};


#endif // impl_type_turn_rpt_64_h