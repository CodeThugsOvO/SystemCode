/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef MDC_MDCUART_UARTRXSERVICEINTERFACE_COMMON_H
#define MDC_MDCUART_UARTRXSERVICEINTERFACE_COMMON_H

#include "ara/com/types.h"
#include "mdc/mdcuart/impl_type_uartdataparam.h"
#include "mdc/mdcuart/impl_type_uartsetdataresult.h"

namespace mdc {
namespace mdcuart {
class UartRxServiceInterface {
public:
    constexpr UartRxServiceInterface() = default;
    constexpr static ara::com::ServiceIdentifierType ServiceIdentifier = ara::com::ServiceIdentifierType("/HuaweiMDC/MdcPlatformServices/UartRxServiceInterface/UartRxServiceInterface");
    constexpr static ara::com::ServiceVersionType ServiceVersion = ara::com::ServiceVersionType("1.1");
};
} // namespace mdcuart
} // namespace mdc

#endif // MDC_MDCUART_UARTRXSERVICEINTERFACE_COMMON_H
