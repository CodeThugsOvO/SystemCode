/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef ARA_COM_SAMPLE_CALIBRATEERROR_SOMEIPMETHODKPOLLINVALID_ERROR_DOMAIN_H
#define ARA_COM_SAMPLE_CALIBRATEERROR_SOMEIPMETHODKPOLLINVALID_ERROR_DOMAIN_H

#include "ara/com/types.h"
#include "ara/core/exception.h"
#include "ara/core/error_code.h"
#include "ara/core/map.h"

namespace ara {
namespace com {
namespace sample {
namespace calibrateerror {

enum class SomeipMethodKpollInvalidErrc : ara::core::ErrorDomain::CodeType {
    SomeipMethodKpollError = 9
};

class SomeipMethodKpollInvalidException : public ara::core::Exception {
public:
    explicit SomeipMethodKpollInvalidException(ara::core::ErrorCode&& err) noexcept
        : Exception(std::move(err)) {}
};

class SomeipMethodKpollInvalidErrorDomain : public ara::core::ErrorDomain {
public:
    using Errc = SomeipMethodKpollInvalidErrc;
    using Exception = SomeipMethodKpollInvalidException;

    constexpr static  ErrorDomain::IdType SomeipMethodKpollInvalidErrorDomainId = 12139;

    constexpr SomeipMethodKpollInvalidErrorDomain() noexcept
        : ErrorDomain(SomeipMethodKpollInvalidErrorDomainId) {}

    char const * Name() const noexcept override
    {
        return "SomeipMethodKpollInvalid";
    }
    char const * Message(ara::core::ErrorDomain::CodeType errorCode) const noexcept override
    {
        static ara::core::Map<ara::core::ErrorDomain::CodeType, const char*> mapCode = {
            {ara::core::ErrorDomain::CodeType(SomeipMethodKpollInvalidErrc::SomeipMethodKpollError), "SomeipMethodKpollError"}};
        return mapCode[errorCode];
    }
    void ThrowAsException(ara::core::ErrorCode const &errorCode) const noexcept(false) override
    {
        ara::core::ThrowOrTerminate<Exception>(errorCode);
    }
};

constexpr SomeipMethodKpollInvalidErrorDomain g_SomeipMethodKpollInvalidErrorDomain;

constexpr ara::core::ErrorDomain const& GetSomeipMethodKpollInvalidErrorDomain() noexcept
{
    return g_SomeipMethodKpollInvalidErrorDomain;
}

constexpr ara::core::ErrorCode MakeErrorCode(SomeipMethodKpollInvalidErrc code,
                                             ara::core::ErrorDomain::SupportDataType data) noexcept
{
    return ara::core::ErrorCode(static_cast<ara::core::ErrorDomain::CodeType>(code),
                                GetSomeipMethodKpollInvalidErrorDomain(), data);
}
} // namespace calibrateerror
} // namespace sample
} // namespace com
} // namespace ara

#endif // ARA_COM_SAMPLE_CALIBRATEERROR_SOMEIPMETHODKPOLLINVALID_ERROR_DOMAIN_H
