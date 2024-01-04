/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef ARA_DIAG_DIAGCOMNOTIFIER_PROXY_H
#define ARA_DIAG_DIAGCOMNOTIFIER_PROXY_H

#include "ara/com/internal/proxy/proxy_adapter.h"
#include "ara/com/internal/proxy/event_adapter.h"
#include "ara/com/internal/proxy/field_adapter.h"
#include "ara/com/internal/proxy/method_adapter.h"
#include "ara/diag/diagcomnotifier_common.h"
#include <string>
#include <cfloat>
#include <cmath>

namespace ara {
namespace diag {
namespace proxy {
namespace events {
    using Data = ara::com::internal::proxy::event::EventAdapter<::ara::diag::ByteVector>;
    static constexpr ara::com::internal::EntityId DataId = 15323; //Data_event_hash
}

namespace fields {
}

namespace methods {

} // namespace methods

class DiagComNotifierProxy {
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

    virtual ~DiagComNotifierProxy()
    {
        Data.UnsetReceiveHandler();
        Data.Unsubscribe();
    }

    explicit DiagComNotifierProxy(const vrtf::vcc::api::types::HandleType &handle)
        : proxyAdapter(std::make_unique<ara::com::internal::proxy::ProxyAdapter>(::ara::diag::DiagComNotifier::ServiceIdentifier, handle)),
          Data(proxyAdapter->GetProxy(), events::DataId, proxyAdapter->GetHandle(), ::ara::diag::DiagComNotifier::ServiceIdentifier){
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

    DiagComNotifierProxy(const DiagComNotifierProxy&) = delete;
    DiagComNotifierProxy& operator=(const DiagComNotifierProxy&) = delete;

    DiagComNotifierProxy(DiagComNotifierProxy&& other) = default;
    DiagComNotifierProxy& operator=(DiagComNotifierProxy&& other) = default;
    DiagComNotifierProxy(ConstructionToken&& token) noexcept
        : proxyAdapter(token.GetProxyAdapter()),
          Data(proxyAdapter->GetProxy(), events::DataId, proxyAdapter->GetHandle(), ::ara::diag::DiagComNotifier::ServiceIdentifier){
    }

    static ara::core::Result<ConstructionToken> Preconstruct(
        const vrtf::vcc::api::types::HandleType &handle)
    {
        std::unique_ptr<ara::com::internal::proxy::ProxyAdapter> preProxyAdapter =
            std::make_unique<ara::com::internal::proxy::ProxyAdapter>(
               ::ara::diag::DiagComNotifier::ServiceIdentifier, handle);
        bool result = true;
        ara::core::Result<void> initResult;
        do {
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
        return ara::com::internal::proxy::ProxyAdapter::StartFindService(handler, ::ara::diag::DiagComNotifier::ServiceIdentifier, instance);
    }

    static ara::com::FindServiceHandle StartFindService(
        ara::com::FindServiceHandler<ara::com::internal::proxy::ProxyAdapter::HandleType> handler,
        ara::core::InstanceSpecifier specifier)
    {
        return ara::com::internal::proxy::ProxyAdapter::StartFindService(handler, ::ara::diag::DiagComNotifier::ServiceIdentifier, specifier);
    }

    static ara::com::ServiceHandleContainer<ara::com::internal::proxy::ProxyAdapter::HandleType> FindService(
        ara::com::InstanceIdentifier instance)
    {
        return ara::com::internal::proxy::ProxyAdapter::FindService(::ara::diag::DiagComNotifier::ServiceIdentifier, instance);
    }

    static ara::com::ServiceHandleContainer<ara::com::internal::proxy::ProxyAdapter::HandleType> FindService(
        ara::core::InstanceSpecifier specifier)
    {
        return ara::com::internal::proxy::ProxyAdapter::FindService(::ara::diag::DiagComNotifier::ServiceIdentifier, specifier);
    }

    static void StopFindService(const ara::com::FindServiceHandle& handle)
    {
        ara::com::internal::proxy::ProxyAdapter::StopFindService(handle);
    }

    HandleType GetHandle() const
    {
        return proxyAdapter->GetHandle();
    }
    events::Data Data;
};
} // namespace proxy
} // namespace diag
} // namespace ara

#endif // ARA_DIAG_DIAGCOMNOTIFIER_PROXY_H
