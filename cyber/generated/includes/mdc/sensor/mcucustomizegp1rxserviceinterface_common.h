/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef MDC_SENSOR_MCUCUSTOMIZEGP1RXSERVICEINTERFACE_COMMON_H
#define MDC_SENSOR_MCUCUSTOMIZEGP1RXSERVICEINTERFACE_COMMON_H

#include "ara/com/types.h"
#include "impl_type_mcucustomizelddataparam.h"
#include "impl_type_mcucustomizedataparam.h"
#include "impl_type_mcucustomizesetdataresult.h"

namespace mdc {
namespace sensor {
class McuCustomizeGp1RxServiceInterface {
public:
    constexpr McuCustomizeGp1RxServiceInterface() = default;
    constexpr static ara::com::ServiceIdentifierType ServiceIdentifier = ara::com::ServiceIdentifierType("/HuaweiMDC/Platform/McuCustomizeGp1RxServiceInterface/McuCustomizeGp1RxServiceInterface");
    constexpr static ara::com::ServiceVersionType ServiceVersion = ara::com::ServiceVersionType("1.1");
};
} // namespace sensor
} // namespace mdc

#endif // MDC_SENSOR_MCUCUSTOMIZEGP1RXSERVICEINTERFACE_COMMON_H
