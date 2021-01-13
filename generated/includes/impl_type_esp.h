/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_esp_h
#define impl_type_esp_h











#include "impl_type_bool.h"


struct Esp {
    ::Bool is_esp_acc_error;
    
    ::Bool is_esp_on;
    
    ::Bool is_esp_active;
    
    ::Bool is_abs_error;
    
    ::Bool is_tcsvdc_fail;
    
    ::Bool is_abs_enabled;
    
    ::Bool is_stab_active;
    
    ::Bool is_stab_enabled;
    
    ::Bool is_trac_active;
    
    ::Bool is_trac_enabled;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(is_esp_acc_error);
        fun(is_esp_on);
        fun(is_esp_active);
        fun(is_abs_error);
        fun(is_tcsvdc_fail);
        fun(is_abs_enabled);
        fun(is_stab_active);
        fun(is_stab_enabled);
        fun(is_trac_active);
        fun(is_trac_enabled);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(is_esp_acc_error);
        fun(is_esp_on);
        fun(is_esp_active);
        fun(is_abs_error);
        fun(is_tcsvdc_fail);
        fun(is_abs_enabled);
        fun(is_stab_active);
        fun(is_stab_enabled);
        fun(is_trac_active);
        fun(is_trac_enabled);
    }

    bool operator == (const ::Esp& t) const {
        return (is_esp_acc_error == t.is_esp_acc_error) && (is_esp_on == t.is_esp_on) && (is_esp_active == t.is_esp_active) && (is_abs_error == t.is_abs_error) && (is_tcsvdc_fail == t.is_tcsvdc_fail) && (is_abs_enabled == t.is_abs_enabled) && (is_stab_active == t.is_stab_active) && (is_stab_enabled == t.is_stab_enabled) && (is_trac_active == t.is_trac_active) && (is_trac_enabled == t.is_trac_enabled);
    }
};


#endif // impl_type_esp_h
