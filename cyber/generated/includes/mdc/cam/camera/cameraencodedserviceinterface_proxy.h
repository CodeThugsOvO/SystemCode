/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef MDC_CAM_CAMERA_CAMERAENCODEDSERVICEINTERFACE_PROXY_H
#define MDC_CAM_CAMERA_CAMERAENCODEDSERVICEINTERFACE_PROXY_H

#include "ara/com/internal/proxy/proxy_adapter.h"
#include "ara/com/internal/proxy/event_adapter.h"
#include "ara/com/internal/proxy/field_adapter.h"
#include "ara/com/internal/proxy/method_adapter.h"
#include "mdc/cam/camera/cameraencodedserviceinterface_common.h"
#include <string>
#include <cfloat>
#include <cmath>

namespace mdc {
namespace cam {
namespace camera {
namespace proxy {
namespace events {
    using cameraPublishEncodedEvent = ara::com::internal::proxy::event::EventAdapter<::ara::camera::CameraPublishEncodedStruct>;
    static constexpr ara::com::internal::EntityId cameraPublishEncodedEventId = 63989; //cameraPublishEncodedEvent_event_hash
}

namespace fields {
}

namespace methods {

} // namespace methods

class CameraEncodedServiceInterfaceProxy {
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

    virtual ~CameraEncodedServiceInterfaceProxy()
    {
        cameraPublishEncodedEvent.UnsetReceiveHandler();
        cameraPublishEncodedEvent.Unsubscribe();
    }

    explicit CameraEncodedServiceInterfaceProxy(const vrtf::vcc::api::types::HandleType &handle)
        : proxyAdapter(std::make_unique<ara::com::internal::proxy::ProxyAdapter>(::mdc::cam::camera::CameraEncodedServiceInterface::ServiceIdentifier, handle)),
          cameraPublishEncodedEvent(proxyAdapter->GetProxy(), events::cameraPublishEncodedEventId, proxyAdapter->GetHandle(), ::mdc::cam::camera::CameraEncodedServiceInterface::ServiceIdentifier){
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

    CameraEncodedServiceInterfaceProxy(const CameraEncodedServiceInterfaceProxy&) = delete;
    CameraEncodedServiceInterfaceProxy& operator=(const CameraEncodedServiceInterfaceProxy&) = delete;

    CameraEncodedServiceInterfaceProxy(CameraEncodedServiceInterfaceProxy&& other) = default;
    CameraEncodedServiceInterfaceProxy& operator=(CameraEncodedServiceInterfaceProxy&& other) = default;
    CameraEncodedServiceInterfaceProxy(ConstructionToken&& token) noexcept
        : proxyAdapter(token.GetProxyAdapter()),
          cameraPublishEncodedEvent(proxyAdapter->GetProxy(), events::cameraPublishEncodedEventId, proxyAdapter->GetHandle(), ::mdc::cam::camera::CameraEncodedServiceInterface::ServiceIdentifier){
    }

    static ara::core::Result<ConstructionToken> Preconstruct(
        const vrtf::vcc::api::types::HandleType &handle)
    {
        std::unique_ptr<ara::com::internal::proxy::ProxyAdapter> preProxyAdapter =
            std::make_unique<ara::com::internal::proxy::ProxyAdapter>(
               ::mdc::cam::camera::CameraEncodedServiceInterface::ServiceIdentifier, handle);
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
        return ara::com::internal::proxy::ProxyAdapter::StartFindService(handler, ::mdc::cam::camera::CameraEncodedServiceInterface::ServiceIdentifier, instance);
    }

    static ara::com::FindServiceHandle StartFindService(
        ara::com::FindServiceHandler<ara::com::internal::proxy::ProxyAdapter::HandleType> handler,
        ara::core::InstanceSpecifier specifier)
    {
        return ara::com::internal::proxy::ProxyAdapter::StartFindService(handler, ::mdc::cam::camera::CameraEncodedServiceInterface::ServiceIdentifier, specifier);
    }

    static ara::com::ServiceHandleContainer<ara::com::internal::proxy::ProxyAdapter::HandleType> FindService(
        ara::com::InstanceIdentifier instance)
    {
        return ara::com::internal::proxy::ProxyAdapter::FindService(::mdc::cam::camera::CameraEncodedServiceInterface::ServiceIdentifier, instance);
    }

    static ara::com::ServiceHandleContainer<ara::com::internal::proxy::ProxyAdapter::HandleType> FindService(
        ara::core::InstanceSpecifier specifier)
    {
        return ara::com::internal::proxy::ProxyAdapter::FindService(::mdc::cam::camera::CameraEncodedServiceInterface::ServiceIdentifier, specifier);
    }

    static void StopFindService(const ara::com::FindServiceHandle& handle)
    {
        ara::com::internal::proxy::ProxyAdapter::StopFindService(handle);
    }

    HandleType GetHandle() const
    {
        return proxyAdapter->GetHandle();
    }
    events::cameraPublishEncodedEvent cameraPublishEncodedEvent;
};
} // namespace proxy
} // namespace camera
} // namespace cam
} // namespace mdc

#endif // MDC_CAM_CAMERA_CAMERAENCODEDSERVICEINTERFACE_PROXY_H