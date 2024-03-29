/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef MDC_MCUGPIO_GPIORXSERVICEINTERFACE_COMMON_H
#define MDC_MCUGPIO_GPIORXSERVICEINTERFACE_COMMON_H

#include "ara/com/types.h"
#include "mdc/mcugpio/impl_type_gpiomsgdataparam.h"

namespace mdc {
namespace mcugpio {
class GpioRxServiceInterface {
public:
    constexpr GpioRxServiceInterface() = default;
    constexpr static ara::com::ServiceIdentifierType ServiceIdentifier = ara::com::ServiceIdentifierType("/HuaweiMDC/MdcPlatformServices/GpioRxServiceInterface/GpioRxServiceInterface");
    constexpr static ara::com::ServiceVersionType ServiceVersion = ara::com::ServiceVersionType("1.1");
};
} // namespace mcugpio
} // namespace mdc

#endif // MDC_MCUGPIO_GPIORXSERVICEINTERFACE_COMMON_H
