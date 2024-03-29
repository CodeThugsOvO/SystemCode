/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef MDC_SENSOR_MCUCUSTOMIZEGP1RXSERVICEINTERFACE_PROXY_H
#define MDC_SENSOR_MCUCUSTOMIZEGP1RXSERVICEINTERFACE_PROXY_H

#include "ara/com/internal/proxy/proxy_adapter.h"
#include "ara/com/internal/proxy/event_adapter.h"
#include "ara/com/internal/proxy/field_adapter.h"
#include "ara/com/internal/proxy/method_adapter.h"
#include "mdc/sensor/mcucustomizegp1rxserviceinterface_common.h"
#include <string>
#include <cfloat>
#include <cmath>

namespace mdc {
namespace sensor {
namespace proxy {
namespace events {
    using McuCustomizeDataGp1LdRxEvent = ara::com::internal::proxy::event::EventAdapter<::McuCustomizeLdDataParam>;
    using McuCustomizeDataGp1RxEvent = ara::com::internal::proxy::event::EventAdapter<::McuCustomizeDataParam>;
    static constexpr ara::com::internal::EntityId McuCustomizeDataGp1LdRxEventId = 29855; //McuCustomizeDataGp1LdRxEvent_event_hash
    static constexpr ara::com::internal::EntityId McuCustomizeDataGp1RxEventId = 46912; //McuCustomizeDataGp1RxEvent_event_hash
}

namespace fields {
}

namespace methods {
static constexpr ara::com::internal::EntityId McuCustomizeDataGp1SetMethodId = 21386; //McuCustomizeDataGp1SetMethod_method_hash


class McuCustomizeDataGp1SetMethod {
public:
    struct Output {
        ::McuCustomizeSetDataResult result;

        static bool IsPlane()
        {
            return false;
        }

        using IsEnumerableTag = void;
        template<typename F>
        void enumerate(F& fun)
        {
            fun(result);
        }

        template<typename F>
        void enumerate(F& fun) const
        {
            fun(result);
        }

        bool operator == (const Output& t) const
        {
           return (result == t.result);
        }
    };

    McuCustomizeDataGp1SetMethod(std::shared_ptr<vrtf::vcc::Proxy>& proxy, ara::com::internal::EntityId entityId): method_(proxy, entityId){}
    void Initialize(std::shared_ptr<vrtf::vcc::Proxy>& proxy, ara::com::internal::EntityId entityId)
    {
        method_.Initialize(proxy, entityId);
    }
    ara::core::Future<Output> operator()(const ::McuCustomizeDataParam& McuCustomizeData)
    {
        return method_(McuCustomizeData);
    }

    ara::com::internal::proxy::method::MethodAdapter<Output, ::McuCustomizeDataParam> GetMethod()
    {
        return method_;
    }

private:
    ara::com::internal::proxy::method::MethodAdapter<Output, ::McuCustomizeDataParam> method_;
};
} // namespace methods

class McuCustomizeGp1RxServiceInterfaceProxy {
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

    virtual ~McuCustomizeGp1RxServiceInterfaceProxy()
    {
        McuCustomizeDataGp1LdRxEvent.UnsetReceiveHandler();
        McuCustomizeDataGp1LdRxEvent.Unsubscribe();
        McuCustomizeDataGp1RxEvent.UnsetReceiveHandler();
        McuCustomizeDataGp1RxEvent.Unsubscribe();
    }

    explicit McuCustomizeGp1RxServiceInterfaceProxy(const vrtf::vcc::api::types::HandleType &handle)
        : proxyAdapter(std::make_unique<ara::com::internal::proxy::ProxyAdapter>(::mdc::sensor::McuCustomizeGp1RxServiceInterface::ServiceIdentifier, handle)),
          McuCustomizeDataGp1LdRxEvent(proxyAdapter->GetProxy(), events::McuCustomizeDataGp1LdRxEventId, proxyAdapter->GetHandle(), ::mdc::sensor::McuCustomizeGp1RxServiceInterface::ServiceIdentifier),
          McuCustomizeDataGp1RxEvent(proxyAdapter->GetProxy(), events::McuCustomizeDataGp1RxEventId, proxyAdapter->GetHandle(), ::mdc::sensor::McuCustomizeGp1RxServiceInterface::ServiceIdentifier),
          McuCustomizeDataGp1SetMethod(proxyAdapter->GetProxy(), methods::McuCustomizeDataGp1SetMethodId){
            ara::core::Result<void> resultMcuCustomizeDataGp1SetMethod = proxyAdapter->InitializeMethod<methods::McuCustomizeDataGp1SetMethod::Output>(methods::McuCustomizeDataGp1SetMethodId);
            ThrowError(resultMcuCustomizeDataGp1SetMethod);
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

    McuCustomizeGp1RxServiceInterfaceProxy(const McuCustomizeGp1RxServiceInterfaceProxy&) = delete;
    McuCustomizeGp1RxServiceInterfaceProxy& operator=(const McuCustomizeGp1RxServiceInterfaceProxy&) = delete;

    McuCustomizeGp1RxServiceInterfaceProxy(McuCustomizeGp1RxServiceInterfaceProxy&& other) = default;
    McuCustomizeGp1RxServiceInterfaceProxy& operator=(McuCustomizeGp1RxServiceInterfaceProxy&& other) = default;
    McuCustomizeGp1RxServiceInterfaceProxy(ConstructionToken&& token) noexcept
        : proxyAdapter(token.GetProxyAdapter()),
          McuCustomizeDataGp1LdRxEvent(proxyAdapter->GetProxy(), events::McuCustomizeDataGp1LdRxEventId, proxyAdapter->GetHandle(), ::mdc::sensor::McuCustomizeGp1RxServiceInterface::ServiceIdentifier),
          McuCustomizeDataGp1RxEvent(proxyAdapter->GetProxy(), events::McuCustomizeDataGp1RxEventId, proxyAdapter->GetHandle(), ::mdc::sensor::McuCustomizeGp1RxServiceInterface::ServiceIdentifier),
          McuCustomizeDataGp1SetMethod(proxyAdapter->GetProxy(), methods::McuCustomizeDataGp1SetMethodId){
    }

    static ara::core::Result<ConstructionToken> Preconstruct(
        const vrtf::vcc::api::types::HandleType &handle)
    {
        std::unique_ptr<ara::com::internal::proxy::ProxyAdapter> preProxyAdapter =
            std::make_unique<ara::com::internal::proxy::ProxyAdapter>(
               ::mdc::sensor::McuCustomizeGp1RxServiceInterface::ServiceIdentifier, handle);
        bool result = true;
        ara::core::Result<void> initResult;
        do {
            methods::McuCustomizeDataGp1SetMethod McuCustomizeDataGp1SetMethod(preProxyAdapter->GetProxy(), methods::McuCustomizeDataGp1SetMethodId);
            initResult = preProxyAdapter->InitializeMethod<methods::McuCustomizeDataGp1SetMethod::Output>(methods::McuCustomizeDataGp1SetMethodId);
            if (!initResult.HasValue()) {
                result = false;
                break;
            }
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
        return ara::com::internal::proxy::ProxyAdapter::StartFindService(handler, ::mdc::sensor::McuCustomizeGp1RxServiceInterface::ServiceIdentifier, instance);
    }

    static ara::com::FindServiceHandle StartFindService(
        ara::com::FindServiceHandler<ara::com::internal::proxy::ProxyAdapter::HandleType> handler,
        ara::core::InstanceSpecifier specifier)
    {
        return ara::com::internal::proxy::ProxyAdapter::StartFindService(handler, ::mdc::sensor::McuCustomizeGp1RxServiceInterface::ServiceIdentifier, specifier);
    }

    static ara::com::ServiceHandleContainer<ara::com::internal::proxy::ProxyAdapter::HandleType> FindService(
        ara::com::InstanceIdentifier instance)
    {
        return ara::com::internal::proxy::ProxyAdapter::FindService(::mdc::sensor::McuCustomizeGp1RxServiceInterface::ServiceIdentifier, instance);
    }

    static ara::com::ServiceHandleContainer<ara::com::internal::proxy::ProxyAdapter::HandleType> FindService(
        ara::core::InstanceSpecifier specifier)
    {
        return ara::com::internal::proxy::ProxyAdapter::FindService(::mdc::sensor::McuCustomizeGp1RxServiceInterface::ServiceIdentifier, specifier);
    }

    static void StopFindService(const ara::com::FindServiceHandle& handle)
    {
        ara::com::internal::proxy::ProxyAdapter::StopFindService(handle);
    }

    HandleType GetHandle() const
    {
        return proxyAdapter->GetHandle();
    }
    events::McuCustomizeDataGp1LdRxEvent McuCustomizeDataGp1LdRxEvent;
    events::McuCustomizeDataGp1RxEvent McuCustomizeDataGp1RxEvent;
    methods::McuCustomizeDataGp1SetMethod McuCustomizeDataGp1SetMethod;
};
} // namespace proxy
} // namespace sensor
} // namespace mdc

#endif // MDC_SENSOR_MCUCUSTOMIZEGP1RXSERVICEINTERFACE_PROXY_H
