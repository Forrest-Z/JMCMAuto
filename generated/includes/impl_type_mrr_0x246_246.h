/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_mrr_0x246_246_h
#define impl_type_mrr_0x246_246_h


















#include "impl_type_accfailinfotype.h"
#include "impl_type_taugapsettype.h"
#include "impl_type_acchmi_modetype.h"
#include "impl_type_dxtarobjtype.h"
#include "impl_type_takeoverreqtype.h"
#include "impl_type_fcw_statetype.h"
#include "impl_type_fcw_prewarningtype.h"
#include "impl_type_double.h"
#include "impl_type_objvalidtype.h"
#include "impl_type_int32.h"
#include "impl_type_aeb_statetype.h"
#include "impl_type_mrr_fcw_sensitivetype.h"
#include "impl_type_acc_startstop_infortype.h"
#include "impl_type_fcw_latentwarningtype.h"
#include "impl_type_textinfotype.h"


struct Mrr_0x246_246 {
    ::TaugapsetType taugapset;
    
    ::DxtarobjType dxtarobj;
    
    ::Acchmi_modeType acchmi_mode;
    
    ::AccfailinfoType accfailinfo;
    
    ::TakeoverreqType takeoverreq;
    
    ::Mrr_fcw_sensitiveType mrr_fcw_sensitive;
    
    ::Aeb_stateType aeb_state;
    
    ::Acc_startstop_inforType acc_startstop_infor;
    
    ::Fcw_prewarningType fcw_prewarning;
    
    ::Fcw_latentwarningType fcw_latentwarning;
    
    ::Fcw_stateType fcw_state;
    
    ::Int32 obj_speed;
    
    ::Int32 rolling_counter_0x246;
    
    ::TextinfoType textinfo;
    
    ::Int32 checksum_0x246;
    
    ::Double vsetdis;
    
    ::ObjvalidType objvalid;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(taugapset);
        fun(dxtarobj);
        fun(acchmi_mode);
        fun(accfailinfo);
        fun(takeoverreq);
        fun(mrr_fcw_sensitive);
        fun(aeb_state);
        fun(acc_startstop_infor);
        fun(fcw_prewarning);
        fun(fcw_latentwarning);
        fun(fcw_state);
        fun(obj_speed);
        fun(rolling_counter_0x246);
        fun(textinfo);
        fun(checksum_0x246);
        fun(vsetdis);
        fun(objvalid);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(taugapset);
        fun(dxtarobj);
        fun(acchmi_mode);
        fun(accfailinfo);
        fun(takeoverreq);
        fun(mrr_fcw_sensitive);
        fun(aeb_state);
        fun(acc_startstop_infor);
        fun(fcw_prewarning);
        fun(fcw_latentwarning);
        fun(fcw_state);
        fun(obj_speed);
        fun(rolling_counter_0x246);
        fun(textinfo);
        fun(checksum_0x246);
        fun(vsetdis);
        fun(objvalid);
    }

    bool operator == (const ::Mrr_0x246_246& t) const {
        return (taugapset == t.taugapset) && (dxtarobj == t.dxtarobj) && (acchmi_mode == t.acchmi_mode) && (accfailinfo == t.accfailinfo) && (takeoverreq == t.takeoverreq) && (mrr_fcw_sensitive == t.mrr_fcw_sensitive) && (aeb_state == t.aeb_state) && (acc_startstop_infor == t.acc_startstop_infor) && (fcw_prewarning == t.fcw_prewarning) && (fcw_latentwarning == t.fcw_latentwarning) && (fcw_state == t.fcw_state) && (obj_speed == t.obj_speed) && (rolling_counter_0x246 == t.rolling_counter_0x246) && (textinfo == t.textinfo) && (checksum_0x246 == t.checksum_0x246) && (vsetdis == t.vsetdis) && (objvalid == t.objvalid);
    }
};


#endif // impl_type_mrr_0x246_246_h