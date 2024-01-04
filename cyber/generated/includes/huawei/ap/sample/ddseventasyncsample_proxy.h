/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef HUAWEI_AP_SAMPLE_DDSEVENTASYNCSAMPLE_PROXY_H
#define HUAWEI_AP_SAMPLE_DDSEVENTASYNCSAMPLE_PROXY_H

#include "ara/com/internal/proxy/proxy_adapter.h"
#include "ara/com/internal/proxy/event_adapter.h"
#include "ara/com/internal/proxy/field_adapter.h"
#include "ara/com/internal/proxy/method_adapter.h"
#include "huawei/ap/sample/ddseventasyncsample_common.h"
#include <string>
#include <cfloat>
#include <cmath>

namespace huawei {
namespace ap {
namespace sample {
namespace proxy {
namespace events {
    using CameraImageAsyncEvent = ara::com::internal::proxy::event::EventAdapter<::EventAsyncImage>;
    static constexpr ara::com::internal::EntityId CameraImageAsyncEventId = 50025; //CameraImageAsyncEvent_event_hash
}

namespace fields {
}

namespace methods {

} // namespace methods

class DdsEventAsyncSampleProxy {
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

    virtual ~DdsEventAsyncSampleProxy()
    {
        CameraImageAsyncEvent.UnsetReceiveHandler();
        CameraImageAsyncEvent.Unsubscribe();
    }

    explicit DdsEventAsyncSampleProxy(const vrtf::vcc::api::types::HandleType &handle)
        : proxyAdapter(std::make_unique<ara::com::internal::proxy::ProxyAdapter>(::huawei::ap::sample::DdsEventAsyncSample::ServiceIdentifier, handle)),
          CameraImageAsyncEvent(proxyAdapter->GetProxy(), events::CameraImageAsyncEventId, proxyAdapter->GetHandle(), ::huawei::ap::sample::DdsEventAsyncSample::ServiceIdentifier){
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

    DdsEventAsyncSampleProxy(const DdsEventAsyncSampleProxy&) = delete;
    DdsEventAsyncSampleProxy& operator=(const DdsEventAsyncSampleProxy&) = delete;

    DdsEventAsyncSampleProxy(DdsEventAsyncSampleProxy&& other) = default;
    DdsEventAsyncSampleProxy& operator=(DdsEventAsyncSampleProxy&& other) = default;
    DdsEventAsyncSampleProxy(ConstructionToken&& token) noexcept
        : proxyAdapter(token.GetProxyAdapter()),
          CameraImageAsyncEvent(proxyAdapter->GetProxy(), events::CameraImageAsyncEventId, proxyAdapter->GetHandle(), ::huawei::ap::sample::DdsEventAsyncSample::ServiceIdentifier){
    }

    static ara::core::Result<ConstructionToken> Preconstruct(
        const vrtf::vcc::api::types::HandleType &handle)
    {
        std::unique_ptr<ara::com::internal::proxy::ProxyAdapter> preProxyAdapter =
            std::make_unique<ara::com::internal::proxy::ProxyAdapter>(
               ::huawei::ap::sample::DdsEventAsyncSample::ServiceIdentifier, handle);
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
        return ara::com::internal::proxy::ProxyAdapter::StartFindService(handler, ::huawei::ap::sample::DdsEventAsyncSample::ServiceIdentifier, instance);
    }

    static ara::com::FindServiceHandle StartFindService(
        ara::com::FindServiceHandler<ara::com::internal::proxy::ProxyAdapter::HandleType> handler,
        ara::core::InstanceSpecifier specifier)
    {
        return ara::com::internal::proxy::ProxyAdapter::StartFindService(handler, ::huawei::ap::sample::DdsEventAsyncSample::ServiceIdentifier, specifier);
    }

    static ara::com::ServiceHandleContainer<ara::com::internal::proxy::ProxyAdapter::HandleType> FindService(
        ara::com::InstanceIdentifier instance)
    {
        return ara::com::internal::proxy::ProxyAdapter::FindService(::huawei::ap::sample::DdsEventAsyncSample::ServiceIdentifier, instance);
    }

    static ara::com::ServiceHandleContainer<ara::com::internal::proxy::ProxyAdapter::HandleType> FindService(
        ara::core::InstanceSpecifier specifier)
    {
        return ara::com::internal::proxy::ProxyAdapter::FindService(::huawei::ap::sample::DdsEventAsyncSample::ServiceIdentifier, specifier);
    }

    static void StopFindService(const ara::com::FindServiceHandle& handle)
    {
        ara::com::internal::proxy::ProxyAdapter::StopFindService(handle);
    }

    HandleType GetHandle() const
    {
        return proxyAdapter->GetHandle();
    }
    events::CameraImageAsyncEvent CameraImageAsyncEvent;
};
} // namespace proxy
} // namespace sample
} // namespace ap
} // namespace huawei

#endif // HUAWEI_AP_SAMPLE_DDSEVENTASYNCSAMPLE_PROXY_H
