/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef CAMERA_AP_TO_ROS_NETWORK_BINDING_H
#define CAMERA_AP_TO_ROS_NETWORK_BINDING_H

#include "ara/core/array.h"
#include "ara/core/instance_specifier.h"

namespace mdc {
namespace cam {
namespace camera {
namespace cameradecodedserviceinterface {
    const ara::core::Array<ara::core::InstanceSpecifier, 1> INSTANCE_SPECIFIERS = {
        ara::core::InstanceSpecifier("camera_ap_to_ros/CameraApToRosRootSwComponent/CameraDecodedReceiveToAppRPort")
    };
} // namespace cameradecodedserviceinterface
} // namespace camera
} // namespace cam
} // namespace mdc

namespace mdc {
namespace cam {
namespace camera {
namespace cameraencodedserviceinterface {
    const ara::core::Array<ara::core::InstanceSpecifier, 1> INSTANCE_SPECIFIERS = {
        ara::core::InstanceSpecifier("camera_ap_to_ros/CameraApToRosRootSwComponent/CameraEncodedReceiveToAppRPort")
    };
} // namespace cameraencodedserviceinterface
} // namespace camera
} // namespace cam
} // namespace mdc

#endif // CAMERA_AP_TO_ROS_NETWORK_BINDING_H