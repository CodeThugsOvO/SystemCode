/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2021. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef ARA_SM_TRIGGERINOUT_PROXY_H
#define ARA_SM_TRIGGERINOUT_PROXY_H

#include "ara/com/internal/proxy/proxy_adapter.h"
#include "ara/com/internal/proxy/event_adapter.h"
#include "ara/com/internal/proxy/field_adapter.h"
#include "ara/com/internal/proxy/method_adapter.h"
#include "ara/sm/triggerinout_common.h"
#include <string>
#include <cfloat>
#include <cmath>

namespace ara {
namespace sm {
namespace proxy {
namespace events {
}

namespace fields {
    using Notifier = ara::com::internal::proxy::field::FieldAdapter<::ara::sm::TriggerDataType>;
    using Trigger = ara::com::internal::proxy::field::FieldAdapter<::ara::sm::TriggerDataType>;
    static constexpr ara::com::internal::EntityId NotifierId = 54564; //Notifier_field_hash
    static constexpr ara::com::internal::EntityId NotifierGetterId = 21625; //Notifier_getter_hash
    static constexpr ara::com::internal::EntityId TriggerId = 24507; //Trigger_field_hash
    static constexpr ara::com::internal::EntityId TriggerSetterId = 57439; //Trigger_setter_hash
}

namespace methods {
static constexpr ara::com::internal::EntityId AcquireFunctionGroupInfoId = 36548; //AcquireFunctionGroupInfo_method_hash
static constexpr ara::com::internal::EntityId ProcessSyncRequestId = 8148; //ProcessSyncRequest_method_hash
static constexpr ara::com::internal::EntityId ResetSystemId = 43154; //ResetSystem_method_hash


class AcquireFunctionGroupInfo {
public:
    struct Output {
        ::ara::sm::FunctionGroupInfoVec functionGroupInfoVec;

        static bool IsPlane()
        {
            return false;
        }

        using IsEnumerableTag = void;
        template<typename F>
        void enumerate(F& fun)
        {
            fun(functionGroupInfoVec);
        }

        template<typename F>
        void enumerate(F& fun) const
        {
            fun(functionGroupInfoVec);
        }

        bool operator == (const Output& t) const
        {
           return (functionGroupInfoVec == t.functionGroupInfoVec);
        }
    };

    AcquireFunctionGroupInfo(std::shared_ptr<vrtf::vcc::Proxy>& proxy, ara::com::internal::EntityId entityId): method_(proxy, entityId){}
    void Initialize(std::shared_ptr<vrtf::vcc::Proxy>& proxy, ara::com::internal::EntityId entityId)
    {
        method_.Initialize(proxy, entityId);
    }
    ara::core::Future<Output> operator()()
    {
        return method_();
    }

    ara::com::internal::proxy::method::MethodAdapter<Output> GetMethod()
    {
        return method_;
    }

private:
    ara::com::internal::proxy::method::MethodAdapter<Output> method_;
};

class ProcessSyncRequest {
public:
    struct Output {
        ::ara::sm::StateTransitionResult result;

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

    ProcessSyncRequest(std::shared_ptr<vrtf::vcc::Proxy>& proxy, ara::com::internal::EntityId entityId): method_(proxy, entityId){}
    void Initialize(std::shared_ptr<vrtf::vcc::Proxy>& proxy, ara::com::internal::EntityId entityId)
    {
        method_.Initialize(proxy, entityId);
    }
    ara::core::Future<Output> operator()(const ::ara::sm::StateTransitionVec& stateTrans)
    {
        return method_(stateTrans);
    }

    ara::com::internal::proxy::method::MethodAdapter<Output, ::ara::sm::StateTransitionVec> GetMethod()
    {
        return method_;
    }

private:
    ara::com::internal::proxy::method::MethodAdapter<Output, ::ara::sm::StateTransitionVec> method_;
};

class ResetSystem {
public:
    struct Output {
        ::ara::sm::ResetResult resetResult;

        static bool IsPlane()
        {
            return false;
        }

        using IsEnumerableTag = void;
        template<typename F>
        void enumerate(F& fun)
        {
            fun(resetResult);
        }

        template<typename F>
        void enumerate(F& fun) const
        {
            fun(resetResult);
        }

        bool operator == (const Output& t) const
        {
           return (resetResult == t.resetResult);
        }
    };

    ResetSystem(std::shared_ptr<vrtf::vcc::Proxy>& proxy, ara::com::internal::EntityId entityId): method_(proxy, entityId){}
    void Initialize(std::shared_ptr<vrtf::vcc::Proxy>& proxy, ara::com::internal::EntityId entityId)
    {
        method_.Initialize(proxy, entityId);
    }
    ara::core::Future<Output> operator()(const ::ara::sm::ResetCode& resetCode, const ::String& user, const ::ara::sm::ResetCause& resetCause)
    {
        return method_(resetCode, user, resetCause);
    }

    ara::com::internal::proxy::method::MethodAdapter<Output, ::ara::sm::ResetCode, ::String, ::ara::sm::ResetCause> GetMethod()
    {
        return method_;
    }

private:
    ara::com::internal::proxy::method::MethodAdapter<Output, ::ara::sm::ResetCode, ::String, ::ara::sm::ResetCause> method_;
};
} // namespace methods

class TriggerInOutProxy {
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

    virtual ~TriggerInOutProxy()
    {
    }

    explicit TriggerInOutProxy(const vrtf::vcc::api::types::HandleType &handle)
        : proxyAdapter(std::make_unique<ara::com::internal::proxy::ProxyAdapter>(::ara::sm::TriggerInOut::ServiceIdentifier, handle)),
          AcquireFunctionGroupInfo(proxyAdapter->GetProxy(), methods::AcquireFunctionGroupInfoId),
          ProcessSyncRequest(proxyAdapter->GetProxy(), methods::ProcessSyncRequestId),
          ResetSystem(proxyAdapter->GetProxy(), methods::ResetSystemId),
          Notifier(proxyAdapter->GetProxy(), fields::NotifierId, proxyAdapter->GetHandle(), ::ara::sm::TriggerInOut::ServiceIdentifier),
          Trigger(proxyAdapter->GetProxy(), fields::TriggerId, proxyAdapter->GetHandle(), ::ara::sm::TriggerInOut::ServiceIdentifier) {
            ara::core::Result<void> resultAcquireFunctionGroupInfo = proxyAdapter->InitializeMethod<methods::AcquireFunctionGroupInfo::Output>(methods::AcquireFunctionGroupInfoId);
            ThrowError(resultAcquireFunctionGroupInfo);
            ara::core::Result<void> resultProcessSyncRequest = proxyAdapter->InitializeMethod<methods::ProcessSyncRequest::Output>(methods::ProcessSyncRequestId);
            ThrowError(resultProcessSyncRequest);
            ara::core::Result<void> resultResetSystem = proxyAdapter->InitializeMethod<methods::ResetSystem::Output>(methods::ResetSystemId);
            ThrowError(resultResetSystem);
            Notifier.SetGetterEntityId(fields::NotifierGetterId);
            ara::core::Result<void> resultNotifier = proxyAdapter->InitializeField<::ara::sm::TriggerDataType>(Notifier);
            ThrowError(resultNotifier);
            Trigger.SetSetterEntityId(fields::TriggerSetterId);
            ara::core::Result<void> resultTrigger = proxyAdapter->InitializeField<::ara::sm::TriggerDataType>(Trigger);
            ThrowError(resultTrigger);
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

    TriggerInOutProxy(const TriggerInOutProxy&) = delete;
    TriggerInOutProxy& operator=(const TriggerInOutProxy&) = delete;

    TriggerInOutProxy(TriggerInOutProxy&& other) = default;
    TriggerInOutProxy& operator=(TriggerInOutProxy&& other) = default;
    TriggerInOutProxy(ConstructionToken&& token) noexcept
        : proxyAdapter(token.GetProxyAdapter()),
          AcquireFunctionGroupInfo(proxyAdapter->GetProxy(), methods::AcquireFunctionGroupInfoId),
          ProcessSyncRequest(proxyAdapter->GetProxy(), methods::ProcessSyncRequestId),
          ResetSystem(proxyAdapter->GetProxy(), methods::ResetSystemId),
          Notifier(proxyAdapter->GetProxy(), fields::NotifierId, proxyAdapter->GetHandle(), ::ara::sm::TriggerInOut::ServiceIdentifier),
          Trigger(proxyAdapter->GetProxy(), fields::TriggerId, proxyAdapter->GetHandle(), ::ara::sm::TriggerInOut::ServiceIdentifier) {
        Notifier.SetGetterEntityId(fields::NotifierGetterId);
        Trigger.SetSetterEntityId(fields::TriggerSetterId);
    }

    static ara::core::Result<ConstructionToken> Preconstruct(
        const vrtf::vcc::api::types::HandleType &handle)
    {
        std::unique_ptr<ara::com::internal::proxy::ProxyAdapter> preProxyAdapter =
            std::make_unique<ara::com::internal::proxy::ProxyAdapter>(
               ::ara::sm::TriggerInOut::ServiceIdentifier, handle);
        bool result = true;
        ara::core::Result<void> initResult;
        do {
            methods::AcquireFunctionGroupInfo AcquireFunctionGroupInfo(preProxyAdapter->GetProxy(), methods::AcquireFunctionGroupInfoId);
            initResult = preProxyAdapter->InitializeMethod<methods::AcquireFunctionGroupInfo::Output>(methods::AcquireFunctionGroupInfoId);
            if (!initResult.HasValue()) {
                result = false;
                break;
            }
            methods::ProcessSyncRequest ProcessSyncRequest(preProxyAdapter->GetProxy(), methods::ProcessSyncRequestId);
            initResult = preProxyAdapter->InitializeMethod<methods::ProcessSyncRequest::Output>(methods::ProcessSyncRequestId);
            if (!initResult.HasValue()) {
                result = false;
                break;
            }
            methods::ResetSystem ResetSystem(preProxyAdapter->GetProxy(), methods::ResetSystemId);
            initResult = preProxyAdapter->InitializeMethod<methods::ResetSystem::Output>(methods::ResetSystemId);
            if (!initResult.HasValue()) {
                result = false;
                break;
            }
            fields::Notifier Notifier(preProxyAdapter->GetProxy(), fields::NotifierId, handle, ::ara::sm::TriggerInOut::ServiceIdentifier);
            Notifier.SetGetterEntityId(fields::NotifierGetterId);
            initResult = preProxyAdapter->InitializeField<::ara::sm::TriggerDataType>(Notifier);
            if (!initResult.HasValue()) {
                result = false;
                break;
            }
            fields::Trigger Trigger(preProxyAdapter->GetProxy(), fields::TriggerId, handle, ::ara::sm::TriggerInOut::ServiceIdentifier);
            Trigger.SetSetterEntityId(fields::TriggerSetterId);
            initResult = preProxyAdapter->InitializeField<::ara::sm::TriggerDataType>(Trigger);
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
        return ara::com::internal::proxy::ProxyAdapter::StartFindService(handler, ::ara::sm::TriggerInOut::ServiceIdentifier, instance);
    }

    static ara::com::FindServiceHandle StartFindService(
        ara::com::FindServiceHandler<ara::com::internal::proxy::ProxyAdapter::HandleType> handler,
        ara::core::InstanceSpecifier specifier)
    {
        return ara::com::internal::proxy::ProxyAdapter::StartFindService(handler, ::ara::sm::TriggerInOut::ServiceIdentifier, specifier);
    }

    static ara::com::ServiceHandleContainer<ara::com::internal::proxy::ProxyAdapter::HandleType> FindService(
        ara::com::InstanceIdentifier instance)
    {
        return ara::com::internal::proxy::ProxyAdapter::FindService(::ara::sm::TriggerInOut::ServiceIdentifier, instance);
    }

    static ara::com::ServiceHandleContainer<ara::com::internal::proxy::ProxyAdapter::HandleType> FindService(
        ara::core::InstanceSpecifier specifier)
    {
        return ara::com::internal::proxy::ProxyAdapter::FindService(::ara::sm::TriggerInOut::ServiceIdentifier, specifier);
    }

    static void StopFindService(const ara::com::FindServiceHandle& handle)
    {
        ara::com::internal::proxy::ProxyAdapter::StopFindService(handle);
    }

    HandleType GetHandle() const
    {
        return proxyAdapter->GetHandle();
    }
    methods::AcquireFunctionGroupInfo AcquireFunctionGroupInfo;
    methods::ProcessSyncRequest ProcessSyncRequest;
    methods::ResetSystem ResetSystem;
    fields::Notifier Notifier;
    fields::Trigger Trigger;
};
} // namespace proxy
} // namespace sm
} // namespace ara

#endif // ARA_SM_TRIGGERINOUT_PROXY_H
