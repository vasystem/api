// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: vasystem/api/v2/virtual_airline.proto

#include "vasystem/api/v2/virtual_airline.pb.h"
#include "vasystem/api/v2/virtual_airline.grpc.pb.h"

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

static const char* VirtualAirlinesService_method_names[] = {
  "/vasystem.api.v2.VirtualAirlinesService/GetVirtualAirline",
};

std::unique_ptr< VirtualAirlinesService::Stub> VirtualAirlinesService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< VirtualAirlinesService::Stub> stub(new VirtualAirlinesService::Stub(channel, options));
  return stub;
}

VirtualAirlinesService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_GetVirtualAirline_(VirtualAirlinesService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status VirtualAirlinesService::Stub::GetVirtualAirline(::grpc::ClientContext* context, const ::vasystem::api::v2::GetVirtualAirlineRequest& request, ::vasystem::api::v2::GetVirtualAirlineResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::vasystem::api::v2::GetVirtualAirlineRequest, ::vasystem::api::v2::GetVirtualAirlineResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetVirtualAirline_, context, request, response);
}

void VirtualAirlinesService::Stub::async::GetVirtualAirline(::grpc::ClientContext* context, const ::vasystem::api::v2::GetVirtualAirlineRequest* request, ::vasystem::api::v2::GetVirtualAirlineResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::vasystem::api::v2::GetVirtualAirlineRequest, ::vasystem::api::v2::GetVirtualAirlineResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetVirtualAirline_, context, request, response, std::move(f));
}

void VirtualAirlinesService::Stub::async::GetVirtualAirline(::grpc::ClientContext* context, const ::vasystem::api::v2::GetVirtualAirlineRequest* request, ::vasystem::api::v2::GetVirtualAirlineResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetVirtualAirline_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::vasystem::api::v2::GetVirtualAirlineResponse>* VirtualAirlinesService::Stub::PrepareAsyncGetVirtualAirlineRaw(::grpc::ClientContext* context, const ::vasystem::api::v2::GetVirtualAirlineRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::vasystem::api::v2::GetVirtualAirlineResponse, ::vasystem::api::v2::GetVirtualAirlineRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetVirtualAirline_, context, request);
}

::grpc::ClientAsyncResponseReader< ::vasystem::api::v2::GetVirtualAirlineResponse>* VirtualAirlinesService::Stub::AsyncGetVirtualAirlineRaw(::grpc::ClientContext* context, const ::vasystem::api::v2::GetVirtualAirlineRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetVirtualAirlineRaw(context, request, cq);
  result->StartCall();
  return result;
}

VirtualAirlinesService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      VirtualAirlinesService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< VirtualAirlinesService::Service, ::vasystem::api::v2::GetVirtualAirlineRequest, ::vasystem::api::v2::GetVirtualAirlineResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](VirtualAirlinesService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::vasystem::api::v2::GetVirtualAirlineRequest* req,
             ::vasystem::api::v2::GetVirtualAirlineResponse* resp) {
               return service->GetVirtualAirline(ctx, req, resp);
             }, this)));
}

VirtualAirlinesService::Service::~Service() {
}

::grpc::Status VirtualAirlinesService::Service::GetVirtualAirline(::grpc::ServerContext* context, const ::vasystem::api::v2::GetVirtualAirlineRequest* request, ::vasystem::api::v2::GetVirtualAirlineResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace vasystem
}  // namespace api
}  // namespace v2

