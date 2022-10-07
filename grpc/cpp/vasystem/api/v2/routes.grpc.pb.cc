// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: vasystem/api/v2/routes.proto

#include "vasystem/api/v2/routes.pb.h"
#include "vasystem/api/v2/routes.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace vasystem {
namespace api {
namespace v2 {

static const char* RoutesService_method_names[] = {
  "/vasystem.api.v2.RoutesService/ListRoutes",
};

std::unique_ptr< RoutesService::Stub> RoutesService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< RoutesService::Stub> stub(new RoutesService::Stub(channel, options));
  return stub;
}

RoutesService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_ListRoutes_(RoutesService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status RoutesService::Stub::ListRoutes(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest& request, ::vasystem::api::v2::ListRoutesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::vasystem::api::v2::ListRoutesRequest, ::vasystem::api::v2::ListRoutesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ListRoutes_, context, request, response);
}

void RoutesService::Stub::async::ListRoutes(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest* request, ::vasystem::api::v2::ListRoutesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::vasystem::api::v2::ListRoutesRequest, ::vasystem::api::v2::ListRoutesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListRoutes_, context, request, response, std::move(f));
}

void RoutesService::Stub::async::ListRoutes(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest* request, ::vasystem::api::v2::ListRoutesResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListRoutes_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::vasystem::api::v2::ListRoutesResponse>* RoutesService::Stub::PrepareAsyncListRoutesRaw(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::vasystem::api::v2::ListRoutesResponse, ::vasystem::api::v2::ListRoutesRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ListRoutes_, context, request);
}

::grpc::ClientAsyncResponseReader< ::vasystem::api::v2::ListRoutesResponse>* RoutesService::Stub::AsyncListRoutesRaw(::grpc::ClientContext* context, const ::vasystem::api::v2::ListRoutesRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncListRoutesRaw(context, request, cq);
  result->StartCall();
  return result;
}

RoutesService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      RoutesService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< RoutesService::Service, ::vasystem::api::v2::ListRoutesRequest, ::vasystem::api::v2::ListRoutesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](RoutesService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::vasystem::api::v2::ListRoutesRequest* req,
             ::vasystem::api::v2::ListRoutesResponse* resp) {
               return service->ListRoutes(ctx, req, resp);
             }, this)));
}

RoutesService::Service::~Service() {
}

::grpc::Status RoutesService::Service::ListRoutes(::grpc::ServerContext* context, const ::vasystem::api::v2::ListRoutesRequest* request, ::vasystem::api::v2::ListRoutesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace vasystem
}  // namespace api
}  // namespace v2

