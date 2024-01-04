/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef SM_USE_SAMPLE_NETWORK_BINDING_H
#define SM_USE_SAMPLE_NETWORK_BINDING_H

#include "ara/core/array.h"
#include "ara/core/instance_specifier.h"

namespace ara {
namespace sm {
namespace triggerinout {
    const ara::core::Array<ara::core::InstanceSpecifier, 1> INSTANCE_SPECIFIERS = {
        ara::core::InstanceSpecifier("sm_use_sample/sm_use_sample/SmUseSampleFromSmcRPort")
    };
} // namespace triggerinout
} // namespace sm
} // namespace ara

#endif // SM_USE_SAMPLE_NETWORK_BINDING_H