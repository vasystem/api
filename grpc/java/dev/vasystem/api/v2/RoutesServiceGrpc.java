package dev.vasystem.api.v2;

import static io.grpc.MethodDescriptor.generateFullMethodName;

/**
 */
@javax.annotation.Generated(
    value = "by gRPC proto compiler (version 1.49.1)",
    comments = "Source: vasystem/api/v2/routes.proto")
@io.grpc.stub.annotations.GrpcGenerated
public final class RoutesServiceGrpc {

  private RoutesServiceGrpc() {}

  public static final String SERVICE_NAME = "vasystem.api.v2.RoutesService";

  // Static method descriptors that strictly reflect the proto.
  private static volatile io.grpc.MethodDescriptor<dev.vasystem.api.v2.ListRoutesRequest,
      dev.vasystem.api.v2.ListRoutesResponse> getListRoutesMethod;

  @io.grpc.stub.annotations.RpcMethod(
      fullMethodName = SERVICE_NAME + '/' + "ListRoutes",
      requestType = dev.vasystem.api.v2.ListRoutesRequest.class,
      responseType = dev.vasystem.api.v2.ListRoutesResponse.class,
      methodType = io.grpc.MethodDescriptor.MethodType.UNARY)
  public static io.grpc.MethodDescriptor<dev.vasystem.api.v2.ListRoutesRequest,
      dev.vasystem.api.v2.ListRoutesResponse> getListRoutesMethod() {
    io.grpc.MethodDescriptor<dev.vasystem.api.v2.ListRoutesRequest, dev.vasystem.api.v2.ListRoutesResponse> getListRoutesMethod;
    if ((getListRoutesMethod = RoutesServiceGrpc.getListRoutesMethod) == null) {
      synchronized (RoutesServiceGrpc.class) {
        if ((getListRoutesMethod = RoutesServiceGrpc.getListRoutesMethod) == null) {
          RoutesServiceGrpc.getListRoutesMethod = getListRoutesMethod =
              io.grpc.MethodDescriptor.<dev.vasystem.api.v2.ListRoutesRequest, dev.vasystem.api.v2.ListRoutesResponse>newBuilder()
              .setType(io.grpc.MethodDescriptor.MethodType.UNARY)
              .setFullMethodName(generateFullMethodName(SERVICE_NAME, "ListRoutes"))
              .setSampledToLocalTracing(true)
              .setRequestMarshaller(io.grpc.protobuf.ProtoUtils.marshaller(
                  dev.vasystem.api.v2.ListRoutesRequest.getDefaultInstance()))
              .setResponseMarshaller(io.grpc.protobuf.ProtoUtils.marshaller(
                  dev.vasystem.api.v2.ListRoutesResponse.getDefaultInstance()))
              .setSchemaDescriptor(new RoutesServiceMethodDescriptorSupplier("ListRoutes"))
              .build();
        }
      }
    }
    return getListRoutesMethod;
  }

  /**
   * Creates a new async stub that supports all call types for the service
   */
  public static RoutesServiceStub newStub(io.grpc.Channel channel) {
    io.grpc.stub.AbstractStub.StubFactory<RoutesServiceStub> factory =
      new io.grpc.stub.AbstractStub.StubFactory<RoutesServiceStub>() {
        @java.lang.Override
        public RoutesServiceStub newStub(io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
          return new RoutesServiceStub(channel, callOptions);
        }
      };
    return RoutesServiceStub.newStub(factory, channel);
  }

  /**
   * Creates a new blocking-style stub that supports unary and streaming output calls on the service
   */
  public static RoutesServiceBlockingStub newBlockingStub(
      io.grpc.Channel channel) {
    io.grpc.stub.AbstractStub.StubFactory<RoutesServiceBlockingStub> factory =
      new io.grpc.stub.AbstractStub.StubFactory<RoutesServiceBlockingStub>() {
        @java.lang.Override
        public RoutesServiceBlockingStub newStub(io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
          return new RoutesServiceBlockingStub(channel, callOptions);
        }
      };
    return RoutesServiceBlockingStub.newStub(factory, channel);
  }

  /**
   * Creates a new ListenableFuture-style stub that supports unary calls on the service
   */
  public static RoutesServiceFutureStub newFutureStub(
      io.grpc.Channel channel) {
    io.grpc.stub.AbstractStub.StubFactory<RoutesServiceFutureStub> factory =
      new io.grpc.stub.AbstractStub.StubFactory<RoutesServiceFutureStub>() {
        @java.lang.Override
        public RoutesServiceFutureStub newStub(io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
          return new RoutesServiceFutureStub(channel, callOptions);
        }
      };
    return RoutesServiceFutureStub.newStub(factory, channel);
  }

  /**
   */
  public static abstract class RoutesServiceImplBase implements io.grpc.BindableService {

    /**
     * <pre>
     * List routes
     * </pre>
     */
    public void listRoutes(dev.vasystem.api.v2.ListRoutesRequest request,
        io.grpc.stub.StreamObserver<dev.vasystem.api.v2.ListRoutesResponse> responseObserver) {
      io.grpc.stub.ServerCalls.asyncUnimplementedUnaryCall(getListRoutesMethod(), responseObserver);
    }

    @java.lang.Override public final io.grpc.ServerServiceDefinition bindService() {
      return io.grpc.ServerServiceDefinition.builder(getServiceDescriptor())
          .addMethod(
            getListRoutesMethod(),
            io.grpc.stub.ServerCalls.asyncUnaryCall(
              new MethodHandlers<
                dev.vasystem.api.v2.ListRoutesRequest,
                dev.vasystem.api.v2.ListRoutesResponse>(
                  this, METHODID_LIST_ROUTES)))
          .build();
    }
  }

  /**
   */
  public static final class RoutesServiceStub extends io.grpc.stub.AbstractAsyncStub<RoutesServiceStub> {
    private RoutesServiceStub(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      super(channel, callOptions);
    }

    @java.lang.Override
    protected RoutesServiceStub build(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      return new RoutesServiceStub(channel, callOptions);
    }

    /**
     * <pre>
     * List routes
     * </pre>
     */
    public void listRoutes(dev.vasystem.api.v2.ListRoutesRequest request,
        io.grpc.stub.StreamObserver<dev.vasystem.api.v2.ListRoutesResponse> responseObserver) {
      io.grpc.stub.ClientCalls.asyncUnaryCall(
          getChannel().newCall(getListRoutesMethod(), getCallOptions()), request, responseObserver);
    }
  }

  /**
   */
  public static final class RoutesServiceBlockingStub extends io.grpc.stub.AbstractBlockingStub<RoutesServiceBlockingStub> {
    private RoutesServiceBlockingStub(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      super(channel, callOptions);
    }

    @java.lang.Override
    protected RoutesServiceBlockingStub build(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      return new RoutesServiceBlockingStub(channel, callOptions);
    }

    /**
     * <pre>
     * List routes
     * </pre>
     */
    public dev.vasystem.api.v2.ListRoutesResponse listRoutes(dev.vasystem.api.v2.ListRoutesRequest request) {
      return io.grpc.stub.ClientCalls.blockingUnaryCall(
          getChannel(), getListRoutesMethod(), getCallOptions(), request);
    }
  }

  /**
   */
  public static final class RoutesServiceFutureStub extends io.grpc.stub.AbstractFutureStub<RoutesServiceFutureStub> {
    private RoutesServiceFutureStub(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      super(channel, callOptions);
    }

    @java.lang.Override
    protected RoutesServiceFutureStub build(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      return new RoutesServiceFutureStub(channel, callOptions);
    }

    /**
     * <pre>
     * List routes
     * </pre>
     */
    public com.google.common.util.concurrent.ListenableFuture<dev.vasystem.api.v2.ListRoutesResponse> listRoutes(
        dev.vasystem.api.v2.ListRoutesRequest request) {
      return io.grpc.stub.ClientCalls.futureUnaryCall(
          getChannel().newCall(getListRoutesMethod(), getCallOptions()), request);
    }
  }

  private static final int METHODID_LIST_ROUTES = 0;

  private static final class MethodHandlers<Req, Resp> implements
      io.grpc.stub.ServerCalls.UnaryMethod<Req, Resp>,
      io.grpc.stub.ServerCalls.ServerStreamingMethod<Req, Resp>,
      io.grpc.stub.ServerCalls.ClientStreamingMethod<Req, Resp>,
      io.grpc.stub.ServerCalls.BidiStreamingMethod<Req, Resp> {
    private final RoutesServiceImplBase serviceImpl;
    private final int methodId;

    MethodHandlers(RoutesServiceImplBase serviceImpl, int methodId) {
      this.serviceImpl = serviceImpl;
      this.methodId = methodId;
    }

    @java.lang.Override
    @java.lang.SuppressWarnings("unchecked")
    public void invoke(Req request, io.grpc.stub.StreamObserver<Resp> responseObserver) {
      switch (methodId) {
        case METHODID_LIST_ROUTES:
          serviceImpl.listRoutes((dev.vasystem.api.v2.ListRoutesRequest) request,
              (io.grpc.stub.StreamObserver<dev.vasystem.api.v2.ListRoutesResponse>) responseObserver);
          break;
        default:
          throw new AssertionError();
      }
    }

    @java.lang.Override
    @java.lang.SuppressWarnings("unchecked")
    public io.grpc.stub.StreamObserver<Req> invoke(
        io.grpc.stub.StreamObserver<Resp> responseObserver) {
      switch (methodId) {
        default:
          throw new AssertionError();
      }
    }
  }

  private static abstract class RoutesServiceBaseDescriptorSupplier
      implements io.grpc.protobuf.ProtoFileDescriptorSupplier, io.grpc.protobuf.ProtoServiceDescriptorSupplier {
    RoutesServiceBaseDescriptorSupplier() {}

    @java.lang.Override
    public com.google.protobuf.Descriptors.FileDescriptor getFileDescriptor() {
      return dev.vasystem.api.v2.RoutesProto.getDescriptor();
    }

    @java.lang.Override
    public com.google.protobuf.Descriptors.ServiceDescriptor getServiceDescriptor() {
      return getFileDescriptor().findServiceByName("RoutesService");
    }
  }

  private static final class RoutesServiceFileDescriptorSupplier
      extends RoutesServiceBaseDescriptorSupplier {
    RoutesServiceFileDescriptorSupplier() {}
  }

  private static final class RoutesServiceMethodDescriptorSupplier
      extends RoutesServiceBaseDescriptorSupplier
      implements io.grpc.protobuf.ProtoMethodDescriptorSupplier {
    private final String methodName;

    RoutesServiceMethodDescriptorSupplier(String methodName) {
      this.methodName = methodName;
    }

    @java.lang.Override
    public com.google.protobuf.Descriptors.MethodDescriptor getMethodDescriptor() {
      return getServiceDescriptor().findMethodByName(methodName);
    }
  }

  private static volatile io.grpc.ServiceDescriptor serviceDescriptor;

  public static io.grpc.ServiceDescriptor getServiceDescriptor() {
    io.grpc.ServiceDescriptor result = serviceDescriptor;
    if (result == null) {
      synchronized (RoutesServiceGrpc.class) {
        result = serviceDescriptor;
        if (result == null) {
          serviceDescriptor = result = io.grpc.ServiceDescriptor.newBuilder(SERVICE_NAME)
              .setSchemaDescriptor(new RoutesServiceFileDescriptorSupplier())
              .addMethod(getListRoutesMethod())
              .build();
        }
      }
    }
    return result;
  }
}
