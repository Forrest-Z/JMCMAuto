/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_ems_enginestopstartstatustype_h
#define impl_type_ems_enginestopstartstatustype_h

#include "impl_type_uint32.h"

enum class Ems_enginestopstartstatusType : UInt32
{
    EMS_ENGINESTOPSTARTSTATUS_NON_START_STOPMODE = 0,
    EMS_ENGINESTOPSTARTSTATUS_ENGINESTANDBY = 1,
    EMS_ENGINESTOPSTARTSTATUS_ENGINESTOPPED = 2,
    EMS_ENGINESTOPSTARTSTATUS_STARTERRESTART = 3,
    EMS_ENGINESTOPSTARTSTATUS_ENGINERESTART = 4,
    EMS_ENGINESTOPSTARTSTATUS_ENGINEOPERATION = 5,
    c = 6,
    EMS_ENGINESTOPSTARTSTATUS_RESERVED = 7
};

#endif // impl_type_ems_enginestopstartstatustype_h
