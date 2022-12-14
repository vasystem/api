// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: vasystem/api/v2/routes.proto
#ifndef GRPC_vasystem_2fapi_2fv2_2froutes_2eproto__INCLUDED
#define GRPC_vasystem_2fapi_2fv2_2froutes_2eproto__INCLUDED

#include "vasystem/api/v2/routes.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace vasystem {
namespace api {
namespace v2 {

// Retrieve route information.
class RoutesService final {
 public:
  static constexpr char const* service_full_name() {
    return "vasystem.api.v2.RoutesService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // List routes. This is a paginated endpoint.
    virtual ::grpc::Status ListRoutes(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest& request, ::vasystem::api::v2::ListRoutesResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::vasystem::api::v2::ListRoutesResponse>> AsyncListRoutes(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::vasystem::api::v2::ListRoutesResponse>>(AsyncListRoutesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::vasystem::api::v2::ListRoutesResponse>> PrepareAsyncListRoutes(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::vasystem::api::v2::ListRoutesResponse>>(PrepareAsyncListRoutesRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // List routes. This is a paginated endpoint.
      virtual void ListRoutes(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest* request, ::vasystem::api::v2::ListRoutesResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void ListRoutes(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest* request, ::vasystem::api::v2::ListRoutesResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::vasystem::api::v2::ListRoutesResponse>* AsyncListRoutesRaw(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::vasystem::api::v2::ListRoutesResponse>* PrepareAsyncListRoutesRaw(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status ListRoutes(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest& request, ::vasystem::api::v2::ListRoutesResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::vasystem::api::v2::ListRoutesResponse>> AsyncListRoutes(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::vasystem::api::v2::ListRoutesResponse>>(AsyncListRoutesRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::vasystem::api::v2::ListRoutesResponse>> PrepareAsyncListRoutes(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::vasystem::api::v2::ListRoutesResponse>>(PrepareAsyncListRoutesRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void ListRoutes(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest* request, ::vasystem::api::v2::ListRoutesResponse* response, std::function<void(::grpc::Status)>) override;
      void ListRoutes(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest* request, ::vasystem::api::v2::ListRoutesResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::vasystem::api::v2::ListRoutesResponse>* AsyncListRoutesRaw(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::vasystem::api::v2::ListRoutesResponse>* PrepareAsyncListRoutesRaw(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_ListRoutes_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // List routes. This is a paginated endpoint.
    virtual ::grpc::Status ListRoutes(::grpc::ServerContext* context, const ::vasystem::api::v2::ListRoutesRequest* request, ::vasystem::api::v2::ListRoutesResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_ListRoutes : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_ListRoutes() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_ListRoutes() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListRoutes(::grpc::ServerContext* /*context*/, const ::vasystem::api::v2::ListRoutesRequest* /*request*/, ::vasystem::api::v2::ListRoutesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListRoutes(::grpc::ServerContext* context, ::vasystem::api::v2::ListRoutesRequest* request, ::grpc::ServerAsyncResponseWriter< ::vasystem::api::v2::ListRoutesResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_ListRoutes<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_ListRoutes : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_ListRoutes() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::vasystem::api::v2::ListRoutesRequest, ::vasystem::api::v2::ListRoutesResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::vasystem::api::v2::ListRoutesRequest* request, ::vasystem::api::v2::ListRoutesResponse* response) { return this->ListRoutes(context, request, response); }));}
    void SetMessageAllocatorFor_ListRoutes(
        ::grpc::MessageAllocator< ::vasystem::api::v2::ListRoutesRequest, ::vasystem::api::v2::ListRoutesResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::vasystem::api::v2::ListRoutesRequest, ::vasystem::api::v2::ListRoutesResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_ListRoutes() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListRoutes(::grpc::ServerContext* /*context*/, const ::vasystem::api::v2::ListRoutesRequest* /*request*/, ::vasystem::api::v2::ListRoutesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* ListRoutes(
      ::grpc::CallbackServerContext* /*context*/, const ::vasystem::api::v2::ListRoutesRequest* /*request*/, ::vasystem::api::v2::ListRoutesResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_ListRoutes<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_ListRoutes : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_ListRoutes() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_ListRoutes() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListRoutes(::grpc::ServerContext* /*context*/, const ::vasystem::api::v2::ListRoutesRequest* /*request*/, ::vasystem::api::v2::ListRoutesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_ListRoutes : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_ListRoutes() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_ListRoutes() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListRoutes(::grpc::ServerContext* /*context*/, const ::vasystem::api::v2::ListRoutesRequest* /*request*/, ::vasystem::api::v2::ListRoutesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListRoutes(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_ListRoutes : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_ListRoutes() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->ListRoutes(context, request, response); }));
    }
    ~WithRawCallbackMethod_ListRoutes() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListRoutes(::grpc::ServerContext* /*context*/, const ::vasystem::api::v2::ListRoutesRequest* /*request*/, ::vasystem::api::v2::ListRoutesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* ListRoutes(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_ListRoutes : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_ListRoutes() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::vasystem::api::v2::ListRoutesRequest, ::vasystem::api::v2::ListRoutesResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::vasystem::api::v2::ListRoutesRequest, ::vasystem::api::v2::ListRoutesResponse>* streamer) {
                       return this->StreamedListRoutes(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_ListRoutes() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status ListRoutes(::grpc::ServerContext* /*context*/, const ::vasystem::api::v2::ListRoutesRequest* /*request*/, ::vasystem::api::v2::ListRoutesResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedListRoutes(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::vasystem::api::v2::ListRoutesRequest,::vasystem::api::v2::ListRoutesResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_ListRoutes<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_ListRoutes<Service > StreamedService;
};

}  // namespace v2
}  // namespace api
}  // namespace vasystem


#endif  // GRPC_vasystem_2fapi_2fv2_2froutes_2eproto__INCLUDED
