/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_pam_0x271_271_h
#define impl_type_pam_0x271_271_h















#include "impl_type_pam_parkingbarpercenttype.h"
#include "impl_type_pam_objectstsfrctype.h"
#include "impl_type_pam_objectstsflmtype.h"
#include "impl_type_pam_objectstsrrmtype.h"
#include "impl_type_pam_frontsystemworkststype.h"
#include "impl_type_pam_objectstsflctype.h"
#include "impl_type_pam_objectstsrlctype.h"
#include "impl_type_pam_infodisplayreqtype.h"
#include "impl_type_pam_chimecmdsoundcadencetype.h"
#include "impl_type_pam_parkingbarststype.h"
#include "impl_type_pam_objectstsfrmtype.h"
#include "impl_type_pam_objectstsrrctype.h"
#include "impl_type_pam_objectstsrlmtype.h"
#include "impl_type_pam_chimecmdsoundstatustype.h"


struct Pam_0x271_271 {
    ::Pam_infodisplayreqType pam_infodisplayreq;
    
    ::Pam_objectstsflmType pam_objectstsflm;
    
    ::Pam_objectstsflcType pam_objectstsflc;
    
    ::Pam_objectstsfrcType pam_objectstsfrc;
    
    ::Pam_objectstsfrmType pam_objectstsfrm;
    
    ::Pam_objectstsrlmType pam_objectstsrlm;
    
    ::Pam_objectstsrlcType pam_objectstsrlc;
    
    ::Pam_objectstsrrcType pam_objectstsrrc;
    
    ::Pam_objectstsrrmType pam_objectstsrrm;
    
    ::Pam_chimecmdsoundstatusType pam_chimecmdsoundstatus;
    
    ::Pam_frontsystemworkstsType pam_frontsystemworksts;
    
    ::Pam_parkingbarstsType pam_parkingbarsts;
    
    ::Pam_chimecmdsoundcadenceType pam_chimecmdsoundcadence;
    
    ::Pam_parkingbarpercentType pam_parkingbarpercent;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(pam_infodisplayreq);
        fun(pam_objectstsflm);
        fun(pam_objectstsflc);
        fun(pam_objectstsfrc);
        fun(pam_objectstsfrm);
        fun(pam_objectstsrlm);
        fun(pam_objectstsrlc);
        fun(pam_objectstsrrc);
        fun(pam_objectstsrrm);
        fun(pam_chimecmdsoundstatus);
        fun(pam_frontsystemworksts);
        fun(pam_parkingbarsts);
        fun(pam_chimecmdsoundcadence);
        fun(pam_parkingbarpercent);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(pam_infodisplayreq);
        fun(pam_objectstsflm);
        fun(pam_objectstsflc);
        fun(pam_objectstsfrc);
        fun(pam_objectstsfrm);
        fun(pam_objectstsrlm);
        fun(pam_objectstsrlc);
        fun(pam_objectstsrrc);
        fun(pam_objectstsrrm);
        fun(pam_chimecmdsoundstatus);
        fun(pam_frontsystemworksts);
        fun(pam_parkingbarsts);
        fun(pam_chimecmdsoundcadence);
        fun(pam_parkingbarpercent);
    }

    bool operator == (const ::Pam_0x271_271& t) const {
        return (pam_infodisplayreq == t.pam_infodisplayreq) && (pam_objectstsflm == t.pam_objectstsflm) && (pam_objectstsflc == t.pam_objectstsflc) && (pam_objectstsfrc == t.pam_objectstsfrc) && (pam_objectstsfrm == t.pam_objectstsfrm) && (pam_objectstsrlm == t.pam_objectstsrlm) && (pam_objectstsrlc == t.pam_objectstsrlc) && (pam_objectstsrrc == t.pam_objectstsrrc) && (pam_objectstsrrm == t.pam_objectstsrrm) && (pam_chimecmdsoundstatus == t.pam_chimecmdsoundstatus) && (pam_frontsystemworksts == t.pam_frontsystemworksts) && (pam_parkingbarsts == t.pam_parkingbarsts) && (pam_chimecmdsoundcadence == t.pam_chimecmdsoundcadence) && (pam_parkingbarpercent == t.pam_parkingbarpercent);
    }
};


#endif // impl_type_pam_0x271_271_h