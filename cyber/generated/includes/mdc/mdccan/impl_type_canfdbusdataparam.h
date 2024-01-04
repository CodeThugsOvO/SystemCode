/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef MDC_MDCCAN_IMPL_TYPE_CANFDBUSDATAPARAM_H
#define MDC_MDCCAN_IMPL_TYPE_CANFDBUSDATAPARAM_H
#include <cfloat>
#include <cmath>
#include "impl_type_uint8.h"
#include "mdc/mdccan/impl_type_systemtime.h"
#include "impl_type_uint32.h"
#include "mdc/mdccan/impl_type_canfdsenddata.h"
#include "mdc/mdccan/impl_type_reserveddata.h"

namespace mdc {
namespace mdccan {
struct CanFdBusDataParam {
    ::UInt8 seq;
    ::UInt8 sendType;
    ::UInt8 canIdType;
    ::UInt8 validLen;
    ::mdc::mdccan::Systemtime timeStamp;
    ::UInt32 canId;
    ::mdc::mdccan::CanFdSendData data;
    ::mdc::mdccan::ReservedData reserved;
    ::UInt32 checkSum;

    static bool IsPlane()
    {
        return false;
    }


    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(seq);
        fun(sendType);
        fun(canIdType);
        fun(validLen);
        fun(timeStamp);
        fun(canId);
        fun(data);
        fun(reserved);
        fun(checkSum);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(seq);
        fun(sendType);
        fun(canIdType);
        fun(validLen);
        fun(timeStamp);
        fun(canId);
        fun(data);
        fun(reserved);
        fun(checkSum);
    }

    bool operator == (const ::mdc::mdccan::CanFdBusDataParam& t) const
    {
        return (seq == t.seq) && (sendType == t.sendType) && (canIdType == t.canIdType) && (validLen == t.validLen) && (timeStamp == t.timeStamp) && (canId == t.canId) && (data == t.data) && (reserved == t.reserved) && (checkSum == t.checkSum);
    }
};
} // namespace mdccan
} // namespace mdc


#endif // MDC_MDCCAN_IMPL_TYPE_CANFDBUSDATAPARAM_H
