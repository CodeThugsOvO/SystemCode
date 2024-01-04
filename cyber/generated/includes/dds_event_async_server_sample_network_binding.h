/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef DDS_EVENT_ASYNC_SERVER_SAMPLE_NETWORK_BINDING_H
#define DDS_EVENT_ASYNC_SERVER_SAMPLE_NETWORK_BINDING_H

#include "ara/core/array.h"
#include "ara/core/instance_specifier.h"

namespace huawei {
namespace ap {
namespace sample {
namespace ddseventasyncsample {
    const ara::core::Array<ara::core::InstanceSpecifier, 1> INSTANCE_SPECIFIERS = {
        ara::core::InstanceSpecifier("dds_event_async_server_sample/dds_event_async_server_sample/DdsEventAsyncPPort")
    };
} // namespace ddseventasyncsample
} // namespace sample
} // namespace ap
} // namespace huawei

#endif // DDS_EVENT_ASYNC_SERVER_SAMPLE_NETWORK_BINDING_H