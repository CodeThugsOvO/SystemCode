/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef ARA_DIAG_DIAGCOMNOTIFIER_COMMON_H
#define ARA_DIAG_DIAGCOMNOTIFIER_COMMON_H

#include "ara/com/types.h"
#include "ara/diag/impl_type_bytevector.h"

namespace ara {
namespace diag {
class DiagComNotifier {
public:
    constexpr DiagComNotifier() = default;
    constexpr static ara::com::ServiceIdentifierType ServiceIdentifier = ara::com::ServiceIdentifierType("/HuaweiMDC/PlatformService/DiagComNotifier");
    constexpr static ara::com::ServiceVersionType ServiceVersion = ara::com::ServiceVersionType("1.1");
};
} // namespace diag
} // namespace ara

#endif // ARA_DIAG_DIAGCOMNOTIFIER_COMMON_H
