/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef MDC_SWM_UPDATEMANAGERSERVICEINTERFACE_COMMON_H
#define MDC_SWM_UPDATEMANAGERSERVICEINTERFACE_COMMON_H

#include "ara/com/types.h"
#include "mdc/swm/impl_type_swnamevectortype.h"
#include "mdc/swm/impl_type_response.h"
#include "impl_type_uint8.h"
#include "impl_type_int32.h"
#include "impl_type_string.h"
#include "mdc/swm/impl_type_transferidtype.h"
#include "mdc/swm/impl_type_precheckresult.h"
#include "mdc/swm/impl_type_itemstatevector.h"
#include "mdc/swm/impl_type_packagemanagerstatustype.h"
#include "impl_type_int8.h"

namespace mdc {
namespace swm {
class UpdateManagerServiceInterface {
public:
    constexpr UpdateManagerServiceInterface() = default;
    constexpr static ara::com::ServiceIdentifierType ServiceIdentifier = ara::com::ServiceIdentifierType("/HuaweiMDC/PlatformServiceInterface/UpdateManagerServiceInterface/UpdateManagerServiceInterface");
    constexpr static ara::com::ServiceVersionType ServiceVersion = ara::com::ServiceVersionType("1.1");
};
} // namespace swm
} // namespace mdc

#endif // MDC_SWM_UPDATEMANAGERSERVICEINTERFACE_COMMON_H
