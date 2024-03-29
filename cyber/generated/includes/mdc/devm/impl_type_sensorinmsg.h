/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef MDC_DEVM_IMPL_TYPE_SENSORINMSG_H
#define MDC_DEVM_IMPL_TYPE_SENSORINMSG_H
#include <cfloat>
#include <cmath>
#include "impl_type_uint32.h"
#include "mdc/devm/impl_type_uint8list.h"

namespace mdc {
namespace devm {
struct SensorInMsg {
    ::UInt32 sendMsgId;
    ::UInt32 recvMsgId;
    ::mdc::devm::Uint8List sendMsgData;

    static bool IsPlane()
    {
        return false;
    }


    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(sendMsgId);
        fun(recvMsgId);
        fun(sendMsgData);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(sendMsgId);
        fun(recvMsgId);
        fun(sendMsgData);
    }

    bool operator == (const ::mdc::devm::SensorInMsg& t) const
    {
        return (sendMsgId == t.sendMsgId) && (recvMsgId == t.recvMsgId) && (sendMsgData == t.sendMsgData);
    }
};
} // namespace devm
} // namespace mdc


#endif // MDC_DEVM_IMPL_TYPE_SENSORINMSG_H
