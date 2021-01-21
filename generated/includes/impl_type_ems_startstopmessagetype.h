/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_ems_startstopmessagetype_h
#define impl_type_ems_startstopmessagetype_h

#include "impl_type_uint32.h"

enum class Ems_startstopmessageType : UInt32
{
    EMS_STARTSTOPMESSAGE_NOWARNINGMESSAGE = 0,
    EMS_STARTSTOPMESSAGE_CLIMATEREQUEST = 1,
    EMS_STARTSTOPMESSAGE_BRAKELOW = 2,
    EMS_STARTSTOPMESSAGE_START_STOPOFF = 3,
    EMS_STARTSTOPMESSAGE_BATTERYLOW = 4,
    EMS_STARTSTOPMESSAGE_ECTLOW = 5,
    EMS_STARTSTOPMESSAGE_APAINHIBIT = 6,
    EMS_STARTSTOPMESSAGE_ACCINHIBIT = 7,
    EMS_STARTSTOPMESSAGE_TCUINHIBIT = 8,
    EMS_STARTSTOPMESSAGE_STARTPROTECT = 9,
    EMS_STARTSTOPMESSAGE_HOODOPEN = 10,
    EMS_STARTSTOPMESSAGE_DRVIEDOOROPNE = 11,
    EMS_STARTSTOPMESSAGE_STEERINGANGELHIGH = 12,
    EMS_STARTSTOPMESSAGE_STARTSTOPFAILURE = 13,
    EMS_STARTSTOPMESSAGE_MANUALLYRESTART = 14,
    EMS_STARTSTOPMESSAGE_RESERVED = 15
};

#endif // impl_type_ems_startstopmessagetype_h