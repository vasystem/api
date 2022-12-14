// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: vasystem/api/v2/airlines.proto

#include "vasystem/api/v2/airlines.pb.h"
#include "vasystem/api/v2/airlines.grpc.pb.h"

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

static const char* AirlinesService_method_names[] = {
  "/vasystem.api.v2.AirlinesService/ListAirlines",
};

std::unique_ptr< AirlinesService::Stub> AirlinesService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< AirlinesService::Stub> stub(new AirlinesService::Stub(channel, options));
  return stub;
}

AirlinesService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_ListAirlines_(AirlinesService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status AirlinesService::Stub::ListAirlines(::grpc::ClientContext* context, const ::vasystem::api::v2::ListAirlinesRequest& request, ::vasystem::api::v2::ListAirlinesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::vasystem::api::v2::ListAirlinesRequest, ::vasystem::api::v2::ListAirlinesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ListAirlines_, context, request, response);
}

void AirlinesService::Stub::async::ListAirlines(::grpc::ClientContext* context, const ::vasystem::api::v2::ListAirlinesRequest* request, ::vasystem::api::v2::ListAirlinesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::vasystem::api::v2::ListAirlinesRequest, ::vasystem::api::v2::ListAirlinesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListAirlines_, context, request, response, std::move(f));
}

void AirlinesService::Stub::async::ListAirlines(::grpc::ClientContext* context, const ::vasystem::api::v2::ListAirlinesRequest* request, ::vasystem::api::v2::ListAirlinesResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ListAirlines_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::vasystem::api::v2::ListAirlinesResponse>* AirlinesService::Stub::PrepareAsyncListAirlinesRaw(::grpc::ClientContext* context, const ::vasystem::api::v2::ListAirlinesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::vasystem::api::v2::ListAirlinesResponse, ::vasystem::api::v2::ListAirlinesRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ListAirlines_, context, request);
}

::grpc::ClientAsyncResponseReader< ::vasystem::api::v2::ListAirlinesResponse>* AirlinesService::Stub::AsyncListAirlinesRaw(::grpc::ClientContext* context, const ::vasystem::api::v2::ListAirlinesRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncListAirlinesRaw(context, request, cq);
  result->StartCall();
  return result;
}

AirlinesService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AirlinesService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AirlinesService::Service, ::vasystem::api::v2::ListAirlinesRequest, ::vasystem::api::v2::ListAirlinesResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](AirlinesService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::vasystem::api::v2::ListAirlinesRequest* req,
             ::vasystem::api::v2::ListAirlinesResponse* resp) {
               return service->ListAirlines(ctx, req, resp);
             }, this)));
}

AirlinesService::Service::~Service() {
}

::grpc::Status AirlinesService::Service::ListAirlines(::grpc::ServerContext* context, const ::vasystem::api::v2::ListAirlinesRequest* request, ::vasystem::api::v2::ListAirlinesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace vasystem
}  // namespace api
}  // namespace v2

