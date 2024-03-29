/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef HUAWEI_AP_SAMPLE_DDSMETHODKEVENT_PROXY_H
#define HUAWEI_AP_SAMPLE_DDSMETHODKEVENT_PROXY_H

#include "ara/com/internal/proxy/proxy_adapter.h"
#include "ara/com/internal/proxy/event_adapter.h"
#include "ara/com/internal/proxy/field_adapter.h"
#include "ara/com/internal/proxy/method_adapter.h"
#include "huawei/ap/sample/ddsmethodkevent_common.h"
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
static constexpr ara::com::internal::EntityId KEventMethodTestId = 59022; //KEventMethodTest_method_hash


class KEventMethodTest {
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

    KEventMethodTest(std::shared_ptr<vrtf::vcc::Proxy>& proxy, ara::com::internal::EntityId entityId): method_(proxy, entityId){}
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

class DdsMethodKeventProxy {
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

    virtual ~DdsMethodKeventProxy()
    {
    }

    explicit DdsMethodKeventProxy(const vrtf::vcc::api::types::HandleType &handle)
        : proxyAdapter(std::make_unique<ara::com::internal::proxy::ProxyAdapter>(::huawei::ap::sample::DdsMethodKevent::ServiceIdentifier, handle)),
          KEventMethodTest(proxyAdapter->GetProxy(), methods::KEventMethodTestId){
            ara::core::Result<void> resultKEventMethodTest = proxyAdapter->InitializeMethod<methods::KEventMethodTest::Output>(methods::KEventMethodTestId);
            ThrowError(resultKEventMethodTest);
            proxyAdapter->RegisterError(KEventMethodTest.GetMethod(),
                ara::core::ErrorCode(static_cast<ara::core::ErrorDomain::CodeType>(::ara::com::sample::calibrateerror::InvalidErrc::UserError),
                    ::ara::com::sample::calibrateerror::GetInvalidErrorDomain()));
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

    DdsMethodKeventProxy(const DdsMethodKeventProxy&) = delete;
    DdsMethodKeventProxy& operator=(const DdsMethodKeventProxy&) = delete;

    DdsMethodKeventProxy(DdsMethodKeventProxy&& other) = default;
    DdsMethodKeventProxy& operator=(DdsMethodKeventProxy&& other) = default;
    DdsMethodKeventProxy(ConstructionToken&& token) noexcept
        : proxyAdapter(token.GetProxyAdapter()),
          KEventMethodTest(proxyAdapter->GetProxy(), methods::KEventMethodTestId){
    }

    static ara::core::Result<ConstructionToken> Preconstruct(
        const vrtf::vcc::api::types::HandleType &handle)
    {
        std::unique_ptr<ara::com::internal::proxy::ProxyAdapter> preProxyAdapter =
            std::make_unique<ara::com::internal::proxy::ProxyAdapter>(
               ::huawei::ap::sample::DdsMethodKevent::ServiceIdentifier, handle);
        bool result = true;
        ara::core::Result<void> initResult;
        do {
            methods::KEventMethodTest KEventMethodTest(preProxyAdapter->GetProxy(), methods::KEventMethodTestId);
            initResult = preProxyAdapter->InitializeMethod<methods::KEventMethodTest::Output>(methods::KEventMethodTestId);
            if (!initResult.HasValue()) {
                result = false;
                break;
            }
            preProxyAdapter->RegisterError(KEventMethodTest.GetMethod(),
            ara::core::ErrorCode(static_cast<ara::core::ErrorDomain::CodeType>(::ara::com::sample::calibrateerror::InvalidErrc::UserError),
            ::ara::com::sample::calibrateerror::GetInvalidErrorDomain()));
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
        return ara::com::internal::proxy::ProxyAdapter::StartFindService(handler, ::huawei::ap::sample::DdsMethodKevent::ServiceIdentifier, instance);
    }

    static ara::com::FindServiceHandle StartFindService(
        ara::com::FindServiceHandler<ara::com::internal::proxy::ProxyAdapter::HandleType> handler,
        ara::core::InstanceSpecifier specifier)
    {
        return ara::com::internal::proxy::ProxyAdapter::StartFindService(handler, ::huawei::ap::sample::DdsMethodKevent::ServiceIdentifier, specifier);
    }

    static ara::com::ServiceHandleContainer<ara::com::internal::proxy::ProxyAdapter::HandleType> FindService(
        ara::com::InstanceIdentifier instance)
    {
        return ara::com::internal::proxy::ProxyAdapter::FindService(::huawei::ap::sample::DdsMethodKevent::ServiceIdentifier, instance);
    }

    static ara::com::ServiceHandleContainer<ara::com::internal::proxy::ProxyAdapter::HandleType> FindService(
        ara::core::InstanceSpecifier specifier)
    {
        return ara::com::internal::proxy::ProxyAdapter::FindService(::huawei::ap::sample::DdsMethodKevent::ServiceIdentifier, specifier);
    }

    static void StopFindService(const ara::com::FindServiceHandle& handle)
    {
        ara::com::internal::proxy::ProxyAdapter::StopFindService(handle);
    }

    HandleType GetHandle() const
    {
        return proxyAdapter->GetHandle();
    }
    methods::KEventMethodTest KEventMethodTest;
};
} // namespace proxy
} // namespace sample
} // namespace ap
} // namespace huawei

#endif // HUAWEI_AP_SAMPLE_DDSMETHODKEVENT_PROXY_H
