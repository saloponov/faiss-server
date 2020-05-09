// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: faiss.proto

#include "faiss.pb.h"
#include "faiss.grpc.pb.h"

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
namespace faiss {

static const char* FaissService_method_names[] = {
  "/faiss.FaissService/Heartbeat",
  "/faiss.FaissService/Search",
  "/faiss.FaissService/SearchById",
  "/faiss.FaissService/AddVector",
};

std::unique_ptr< FaissService::Stub> FaissService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< FaissService::Stub> stub(new FaissService::Stub(channel));
  return stub;
}

FaissService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Heartbeat_(FaissService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Search_(FaissService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SearchById_(FaissService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AddVector_(FaissService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status FaissService::Stub::Heartbeat(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::faiss::HeartbeatResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Heartbeat_, context, request, response);
}

void FaissService::Stub::experimental_async::Heartbeat(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::faiss::HeartbeatResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Heartbeat_, context, request, response, std::move(f));
}

void FaissService::Stub::experimental_async::Heartbeat(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::faiss::HeartbeatResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Heartbeat_, context, request, response, std::move(f));
}

void FaissService::Stub::experimental_async::Heartbeat(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::faiss::HeartbeatResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Heartbeat_, context, request, response, reactor);
}

void FaissService::Stub::experimental_async::Heartbeat(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::faiss::HeartbeatResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Heartbeat_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::faiss::HeartbeatResponse>* FaissService::Stub::AsyncHeartbeatRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::faiss::HeartbeatResponse>::Create(channel_.get(), cq, rpcmethod_Heartbeat_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::faiss::HeartbeatResponse>* FaissService::Stub::PrepareAsyncHeartbeatRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::faiss::HeartbeatResponse>::Create(channel_.get(), cq, rpcmethod_Heartbeat_, context, request, false);
}

::grpc::Status FaissService::Stub::Search(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::faiss::SearchResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Search_, context, request, response);
}

void FaissService::Stub::experimental_async::Search(::grpc::ClientContext* context, const ::faiss::SearchRequest* request, ::faiss::SearchResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Search_, context, request, response, std::move(f));
}

void FaissService::Stub::experimental_async::Search(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::faiss::SearchResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Search_, context, request, response, std::move(f));
}

void FaissService::Stub::experimental_async::Search(::grpc::ClientContext* context, const ::faiss::SearchRequest* request, ::faiss::SearchResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Search_, context, request, response, reactor);
}

void FaissService::Stub::experimental_async::Search(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::faiss::SearchResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Search_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::faiss::SearchResponse>* FaissService::Stub::AsyncSearchRaw(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::faiss::SearchResponse>::Create(channel_.get(), cq, rpcmethod_Search_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::faiss::SearchResponse>* FaissService::Stub::PrepareAsyncSearchRaw(::grpc::ClientContext* context, const ::faiss::SearchRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::faiss::SearchResponse>::Create(channel_.get(), cq, rpcmethod_Search_, context, request, false);
}

::grpc::Status FaissService::Stub::SearchById(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::faiss::SearchByIdResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SearchById_, context, request, response);
}

void FaissService::Stub::experimental_async::SearchById(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest* request, ::faiss::SearchByIdResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SearchById_, context, request, response, std::move(f));
}

void FaissService::Stub::experimental_async::SearchById(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::faiss::SearchByIdResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SearchById_, context, request, response, std::move(f));
}

void FaissService::Stub::experimental_async::SearchById(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest* request, ::faiss::SearchByIdResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SearchById_, context, request, response, reactor);
}

void FaissService::Stub::experimental_async::SearchById(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::faiss::SearchByIdResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SearchById_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::faiss::SearchByIdResponse>* FaissService::Stub::AsyncSearchByIdRaw(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::faiss::SearchByIdResponse>::Create(channel_.get(), cq, rpcmethod_SearchById_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::faiss::SearchByIdResponse>* FaissService::Stub::PrepareAsyncSearchByIdRaw(::grpc::ClientContext* context, const ::faiss::SearchByIdRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::faiss::SearchByIdResponse>::Create(channel_.get(), cq, rpcmethod_SearchById_, context, request, false);
}

::grpc::Status FaissService::Stub::AddVector(::grpc::ClientContext* context, const ::faiss::AddVectorRequest& request, ::faiss::AddVectorResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_AddVector_, context, request, response);
}

void FaissService::Stub::experimental_async::AddVector(::grpc::ClientContext* context, const ::faiss::AddVectorRequest* request, ::faiss::AddVectorResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_AddVector_, context, request, response, std::move(f));
}

void FaissService::Stub::experimental_async::AddVector(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::faiss::AddVectorResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_AddVector_, context, request, response, std::move(f));
}

void FaissService::Stub::experimental_async::AddVector(::grpc::ClientContext* context, const ::faiss::AddVectorRequest* request, ::faiss::AddVectorResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_AddVector_, context, request, response, reactor);
}

void FaissService::Stub::experimental_async::AddVector(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::faiss::AddVectorResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_AddVector_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::faiss::AddVectorResponse>* FaissService::Stub::AsyncAddVectorRaw(::grpc::ClientContext* context, const ::faiss::AddVectorRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::faiss::AddVectorResponse>::Create(channel_.get(), cq, rpcmethod_AddVector_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::faiss::AddVectorResponse>* FaissService::Stub::PrepareAsyncAddVectorRaw(::grpc::ClientContext* context, const ::faiss::AddVectorRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::faiss::AddVectorResponse>::Create(channel_.get(), cq, rpcmethod_AddVector_, context, request, false);
}

FaissService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FaissService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FaissService::Service, ::google::protobuf::Empty, ::faiss::HeartbeatResponse>(
          std::mem_fn(&FaissService::Service::Heartbeat), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FaissService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FaissService::Service, ::faiss::SearchRequest, ::faiss::SearchResponse>(
          std::mem_fn(&FaissService::Service::Search), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FaissService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FaissService::Service, ::faiss::SearchByIdRequest, ::faiss::SearchByIdResponse>(
          std::mem_fn(&FaissService::Service::SearchById), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FaissService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< FaissService::Service, ::faiss::AddVectorRequest, ::faiss::AddVectorResponse>(
          std::mem_fn(&FaissService::Service::AddVector), this)));
}

FaissService::Service::~Service() {
}

::grpc::Status FaissService::Service::Heartbeat(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::faiss::HeartbeatResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FaissService::Service::Search(::grpc::ServerContext* context, const ::faiss::SearchRequest* request, ::faiss::SearchResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FaissService::Service::SearchById(::grpc::ServerContext* context, const ::faiss::SearchByIdRequest* request, ::faiss::SearchByIdResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status FaissService::Service::AddVector(::grpc::ServerContext* context, const ::faiss::AddVectorRequest* request, ::faiss::AddVectorResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace faiss

