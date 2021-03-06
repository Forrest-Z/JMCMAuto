/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_ins_gpsflag_h
#define impl_type_ins_gpsflag_h

#include "impl_type_uint8.h"

enum class INS_GpsFlag : UInt8
{
    NONE = 0,
    FIXEDPOS = 1,
    FIXEDHEIGHT = 2,
    DOPPLER_VELOCITY = 8,
    SINGLE = 16,
    PSRDIFF = 17,
    SBAS = 18,
    L1_FLOAT = 32,
    IONOFREE_FLOAT = 33,
    NARROW_FLOAT = 34,
    L1_INT = 48,
    WIDE_INT = 49,
    NARROW_INT = 50
};

#endif // impl_type_ins_gpsflag_h
