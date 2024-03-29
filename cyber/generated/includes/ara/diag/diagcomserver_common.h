/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef ARA_DIAG_DIAGCOMSERVER_COMMON_H
#define ARA_DIAG_DIAGCOMSERVER_COMMON_H

#include "ara/com/types.h"
#include "ara/diag/impl_type_bytevector.h"
#include "impl_type_boolean.h"

namespace ara {
namespace diag {
class DiagComServer {
public:
    constexpr DiagComServer() = default;
    constexpr static ara::com::ServiceIdentifierType ServiceIdentifier = ara::com::ServiceIdentifierType("/HuaweiMDC/PlatformServices/DiagComServer");
    constexpr static ara::com::ServiceVersionType ServiceVersion = ara::com::ServiceVersionType("1.1");
};
} // namespace diag
} // namespace ara

#endif // ARA_DIAG_DIAGCOMSERVER_COMMON_H
