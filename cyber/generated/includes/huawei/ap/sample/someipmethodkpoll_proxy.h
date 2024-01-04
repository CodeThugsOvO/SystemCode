/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef HUAWEI_AP_SAMPLE_SOMEIPMETHODKPOLL_PROXY_H
#define HUAWEI_AP_SAMPLE_SOMEIPMETHODKPOLL_PROXY_H

#include "ara/com/internal/proxy/proxy_adapter.h"
#include "ara/com/internal/proxy/event_adapter.h"
#include "ara/com/internal/proxy/field_adapter.h"
#include "ara/com/internal/proxy/method_adapter.h"
#include "huawei/ap/sample/someipmethodkpoll_common.h"
#include <string>
#include <cfloat>
#include <cmath>

namespace huawei {
namespace ap {
namespace sample {
namespace proxy {
namespace events {
}

namespace fields {
}

namespace methods {
static constexpr ara::com::internal::EntityId KPollMethodTestId = 59682; //KPollMethodTest_method_hash


class KPollMethodTest {
public:
    struct Output {
        ::UInt16 reply;

        static bool IsPlane()
        {
            return true;
        }

        using IsEnumerableTag = void;
        template<typename F>
        void enumerate(F& fun)
        {
            fun(reply);
        }

        template<typename F>
        void enumerate(F& fun) const
        {
            fun(reply);
        }

        bool operator == (const Output& t) const
        {
           return (reply == t.reply);
        }
    };

    KPollMethodTest(std::shared_ptr<vrtf::vcc::Proxy>& proxy, ara::com::internal::EntityId entityId): method_(proxy, entityId){}
    void Initialize(std::shared_ptr<vrtf::vcc::Proxy>& proxy, ara::com::internal::EntityId entityId)
    {
        method_.Initialize(proxy, entityId);
    }
    ara::core::Future<Output> operator()(const ::UInt16& request)
    {
        return method_(request);
    }

    ara::com::internal::proxy::method::MethodAdapter<Output, ::UInt16> GetMethod()
    {
        return method_;
    }

private:
    ara::com::internal::proxy::method::MethodAdapter<Output, ::UInt16> method_;
};
} // namespace methods

class SomeipMethodKpollProxy {
private:
    std::unique_ptr<ara::com::internal::proxy::ProxyAdapter> proxyAdapter;
public:
    using HandleType = vrtf::vcc::api::types::HandleType;
    class ConstructionToken {
    public:
        ConstructionToken(std::unique_ptr<ara::com::internal::proxy::ProxyAdapter> proxy): ptr(std::move(proxy)){}
        ConstructionToken(ConstructionToken&& other) : ptr(std::move(other.ptr)) {}
        ConstructionToken& operator=(ConstructionToken && other)
        {
            if (&other != this) {
                ptr = std::move(other.ptr);
            }
            return *this;
        }
        ConstructionToken(const ConstructionToken&) = delete;
        ConstructionToken& operator = (const ConstructionToken&) = delete;
        std::unique_ptr<ara::com::internal::proxy::ProxyAdapter> GetProxyAdapter()
        {
            return std::move(ptr);
        }
    private:
        std::unique_ptr<ara::com::internal::proxy::ProxyAdapter> ptr;
    };

    virtual ~SomeipMethodKpollProxy()
    {
    }

    explicit SomeipMethodKpollProxy(const vrtf::vcc::api::types::HandleType &handle)
        : proxyAdapter(std::make_unique<ara::com::internal::proxy::ProxyAdapter>(::huawei::ap::sample::SomeipMethodKpoll::ServiceIdentifier, handle)),
          KPollMethodTest(proxyAdapter->GetProxy(), methods::KPollMethodTestId){
            ara::core::Result<void> resultKPollMethodTest = proxyAdapter->InitializeMethod<methods::KPollMethodTest::Output>(methods::KPollMethodTestId);
            ThrowError(resultKPollMethodTest);
            proxyAdapter->RegisterError(KPollMethodTest.GetMethod(),
                ara::core::ErrorCode(static_cast<ara::core::ErrorDomain::CodeType>(::ara::com::sample::calibrateerror::SomeipMethodKpollInvalidErrc::SomeipMethodKpollError),
                    ::ara::com::sample::calibrateerror::GetSomeipMethodKpollInvalidErrorDomain()));
        }

    void ThrowError(ara::core::Result<void>& result)
    {
        if (!(result.HasValue())) {
#ifndef NOT_SUPPORT_EXCEPTIONS
            ara::core::ErrorCode errorcode(result.Error());
            throw ara::com::ComException(std::move(errorcode));
#else
            std::cerr << "Error: Not support exception, create skeleton failed!"<< std::endl;
#endif
        }
    }

    SomeipMethodKpollProxy(const SomeipMethodKpollProxy&) = delete;
    SomeipMethodKpollProxy& operator=(const SomeipMethodKpollProxy&) = delete;

    SomeipMethodKpollProxy(SomeipMethodKpollProxy&& other) = default;
    SomeipMethodKpollProxy& operator=(SomeipMethodKpollProxy&& other) = default;
    SomeipMethodKpollProxy(ConstructionToken&& token) noexcept
        : proxyAdapter(token.GetProxyAdapter()),
          KPollMethodTest(proxyAdapter->GetProxy(), methods::KPollMethodTestId){
    }

    static ara::core::Result<ConstructionToken> Preconstruct(
        const vrtf::vcc::api::types::HandleType &handle)
    {
        std::unique_ptr<ara::com::internal::proxy::ProxyAdapter> preProxyAdapter =
            std::make_unique<ara::com::internal::proxy::ProxyAdapter>(
               ::huawei::ap::sample::SomeipMethodKpoll::ServiceIdentifier, handle);
        bool result = true;
        ara::core::Result<void> initResult;
        do {
            methods::KPollMethodTest KPollMethodTest(preProxyAdapter->GetProxy(), methods::KPollMethodTestId);
            initResult = preProxyAdapter->InitializeMethod<methods::KPollMethodTest::Output>(methods::KPollMethodTestId);
            if (!initResult.HasValue()) {
                result = false;
                break;
            }
            preProxyAdapter->RegisterError(KPollMethodTest.GetMethod(),
            ara::core::ErrorCode(static_cast<ara::core::ErrorDomain::CodeType>(::ara::com::sample::calibrateerror::SomeipMethodKpollInvalidErrc::SomeipMethodKpollError),
            ::ara::com::sample::calibrateerror::GetSomeipMethodKpollInvalidErrorDomain()));
        } while(false);
        
        if (result == true) {
            ConstructionToken token(std::move(preProxyAdapter));
            return ara::core::Result<ConstructionToken>(std::move(token));
        } else {
            ConstructionToken token(std::move(preProxyAdapter));
            ara::core::Result<ConstructionToken> result(std::move(token));
            ara::core::ErrorCode errorcode(initResult.Error());
            result.EmplaceError(errorcode);
            return result;
        }
    }


    static ara::com::FindServiceHandle StartFindService(
        ara::com::FindServiceHandler<ara::com::internal::proxy::ProxyAdapter::HandleType> handler,
        ara::com::InstanceIdentifier instance)
    {
        return ara::com::internal::proxy::ProxyAdapter::StartFindService(handler, ::huawei::ap::sample::SomeipMethodKpoll::ServiceIdentifier, instance);
    }

    static ara::com::FindServiceHandle StartFindService(
        ara::com::FindServiceHandler<ara::com::internal::proxy::ProxyAdapter::HandleType> handler,
        ara::core::InstanceSpecifier specifier)
    {
        return ara::com::internal::proxy::ProxyAdapter::StartFindService(handler, ::huawei::ap::sample::SomeipMethodKpoll::ServiceIdentifier, specifier);
    }

    static ara::com::ServiceHandleContainer<ara::com::internal::proxy::ProxyAdapter::HandleType> FindService(
        ara::com::InstanceIdentifier instance)
    {
        return ara::com::internal::proxy::ProxyAdapter::FindService(::huawei::ap::sample::SomeipMethodKpoll::ServiceIdentifier, instance);
    }

    static ara::com::ServiceHandleContainer<ara::com::internal::proxy::ProxyAdapter::HandleType> FindService(
        ara::core::InstanceSpecifier specifier)
    {
        return ara::com::internal::proxy::ProxyAdapter::FindService(::huawei::ap::sample::SomeipMethodKpoll::ServiceIdentifier, specifier);
    }

    static void StopFindService(const ara::com::FindServiceHandle& handle)
    {
        ara::com::internal::proxy::ProxyAdapter::StopFindService(handle);
    }

    HandleType GetHandle() const
    {
        return proxyAdapter->GetHandle();
    }
    methods::KPollMethodTest KPollMethodTest;
};
} // namespace proxy
} // namespace sample
} // namespace ap
} // namespace huawei

#endif // HUAWEI_AP_SAMPLE_SOMEIPMETHODKPOLL_PROXY_H
