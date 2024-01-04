/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef MDC_DEVM_IMPL_TYPE_DEVICEINFO_H
#define MDC_DEVM_IMPL_TYPE_DEVICEINFO_H
#include <cfloat>
#include <cmath>
#include "impl_type_string.h"
#include "impl_type_uint32.h"
#include "impl_type_uint8.h"

namespace mdc {
namespace devm {
struct DeviceInfo {
    ::String deviceName;
    ::UInt32 deviceId;
    ::UInt8 deviceType;
    ::String softVersion;
    ::String hwVersion;
    ::String chipType;
    ::String chipName;

    static bool IsPlane()
    {
        return false;
    }


    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(deviceName);
        fun(deviceId);
        fun(deviceType);
        fun(softVersion);
        fun(hwVersion);
        fun(chipType);
        fun(chipName);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(deviceName);
        fun(deviceId);
        fun(deviceType);
        fun(softVersion);
        fun(hwVersion);
        fun(chipType);
        fun(chipName);
    }

    bool operator == (const ::mdc::devm::DeviceInfo& t) const
    {
        return (deviceName == t.deviceName) && (deviceId == t.deviceId) && (deviceType == t.deviceType) && (softVersion == t.softVersion) && (hwVersion == t.hwVersion) && (chipType == t.chipType) && (chipName == t.chipName);
    }
};
} // namespace devm
} // namespace mdc


#endif // MDC_DEVM_IMPL_TYPE_DEVICEINFO_H
