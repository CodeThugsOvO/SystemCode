/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef HUAWEI_AP_SAMPLE_SOMEIPMETHODKPOLL_COMMON_H
#define HUAWEI_AP_SAMPLE_SOMEIPMETHODKPOLL_COMMON_H

#include "ara/com/types.h"
#include "impl_type_uint16.h"
#include "ara/com/sample/calibrateerror/someipmethodkpollinvalid_error_domain.h"

namespace huawei {
namespace ap {
namespace sample {
class SomeipMethodKpoll {
public:
    constexpr SomeipMethodKpoll() = default;
    constexpr static ara::com::ServiceIdentifierType ServiceIdentifier = ara::com::ServiceIdentifierType("/huawei/ap/ServiceInterface/SomeipMethodKpoll");
    constexpr static ara::com::ServiceVersionType ServiceVersion = ara::com::ServiceVersionType("1.1");
};
} // namespace sample
} // namespace ap
} // namespace huawei

#endif // HUAWEI_AP_SAMPLE_SOMEIPMETHODKPOLL_COMMON_H
