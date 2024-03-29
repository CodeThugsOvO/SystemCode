/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef MDCUART_NETWORK_BINDING_H
#define MDCUART_NETWORK_BINDING_H

#include "ara/core/array.h"
#include "ara/core/instance_specifier.h"

namespace mdc {
namespace mdcuart {
namespace uartrxserviceinterface {
    const ara::core::Array<ara::core::InstanceSpecifier, 1> INSTANCE_SPECIFIERS = {
        ara::core::InstanceSpecifier("mdcuart/mdcuart/UartRxPort")
    };
} // namespace uartrxserviceinterface
} // namespace mdcuart
} // namespace mdc

#endif // MDCUART_NETWORK_BINDING_H
