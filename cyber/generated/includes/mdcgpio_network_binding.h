/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef MDCGPIO_NETWORK_BINDING_H
#define MDCGPIO_NETWORK_BINDING_H

#include "ara/core/array.h"
#include "ara/core/instance_specifier.h"

namespace mdc {
namespace mcugpio {
namespace gpiorxserviceinterface {
    const ara::core::Array<ara::core::InstanceSpecifier, 1> INSTANCE_SPECIFIERS = {
        ara::core::InstanceSpecifier("mdcgpio/mdcgpio/GpioRxPort")
    };
} // namespace gpiorxserviceinterface
} // namespace mcugpio
} // namespace mdc

#endif // MDCGPIO_NETWORK_BINDING_H
