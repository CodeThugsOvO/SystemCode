/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef IMPL_TYPE_MCUCUSTOMIZESETDATARESULT_H
#define IMPL_TYPE_MCUCUSTOMIZESETDATARESULT_H
#include <cfloat>
#include <cmath>
#include "impl_type_array32uint8.h"

struct McuCustomizeSetDataResult {
    ::Array32UInt8 data;

    static bool IsPlane()
    {
        return false;
    }


    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(data);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(data);
    }

    bool operator == (const ::McuCustomizeSetDataResult& t) const
    {
        return (data == t.data);
    }
};


#endif // IMPL_TYPE_MCUCUSTOMIZESETDATARESULT_H
