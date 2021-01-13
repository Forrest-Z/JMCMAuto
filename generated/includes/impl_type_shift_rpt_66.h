/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_shift_rpt_66_h
#define impl_type_shift_rpt_66_h





#include "impl_type_shift_rpt_66output_valuetype.h"
#include "impl_type_bool.h"
#include "impl_type_shift_rpt_66commanded_valuetype.h"
#include "impl_type_shift_rpt_66manual_inputtype.h"


struct Shift_rpt_66 {
    ::Shift_rpt_66Manual_inputType manual_input;
    
    ::Shift_rpt_66Commanded_valueType commanded_value;
    
    ::Shift_rpt_66Output_valueType output_value;
    
    ::Bool engine_started;
    

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
        fun(engine_started);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(manual_input);
        fun(commanded_value);
        fun(output_value);
        fun(engine_started);
    }

    bool operator == (const ::Shift_rpt_66& t) const {
        return (manual_input == t.manual_input) && (commanded_value == t.commanded_value) && (output_value == t.output_value) && (engine_started == t.engine_started);
    }
};


#endif // impl_type_shift_rpt_66_h
