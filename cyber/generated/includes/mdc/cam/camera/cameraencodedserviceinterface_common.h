/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef MDC_CAM_CAMERA_CAMERAENCODEDSERVICEINTERFACE_COMMON_H
#define MDC_CAM_CAMERA_CAMERAENCODEDSERVICEINTERFACE_COMMON_H

#include "ara/com/types.h"
#include "ara/camera/impl_type_camerapublishencodedstruct.h"

namespace mdc {
namespace cam {
namespace camera {
class CameraEncodedServiceInterface {
public:
    constexpr CameraEncodedServiceInterface() = default;
    constexpr static ara::com::ServiceIdentifierType ServiceIdentifier = ara::com::ServiceIdentifierType("/HuaweiMDC/PlatformServiceInterface/CameraServiceInterfacePkg/CameraEncodedServiceInterface");
    constexpr static ara::com::ServiceVersionType ServiceVersion = ara::com::ServiceVersionType("1.1");
};
} // namespace camera
} // namespace cam
} // namespace mdc

#endif // MDC_CAM_CAMERA_CAMERAENCODEDSERVICEINTERFACE_COMMON_H
