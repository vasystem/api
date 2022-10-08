package dev.vasystem.api.v2;

import static io.grpc.MethodDescriptor.generateFullMethodName;

/**
 * <pre>
 * Retrieve airline information.
 * </pre>
 */
@javax.annotation.Generated(
    value = "by gRPC proto compiler (version 1.49.1)",
    comments = "Source: vasystem/api/v2/airlines.proto")
@io.grpc.stub.annotations.GrpcGenerated
public final class AirlinesServiceGrpc {

  private AirlinesServiceGrpc() {}

  public static final String SERVICE_NAME = "vasystem.api.v2.AirlinesService";

  // Static method descriptors that strictly reflect the proto.
  private static volatile io.grpc.MethodDescriptor<dev.vasystem.api.v2.ListAirlinesRequest,
      dev.vasystem.api.v2.ListAirlinesResponse> getListAirlinesMethod;

  @io.grpc.stub.annotations.RpcMethod(
      fullMethodName = SERVICE_NAME + '/' + "ListAirlines",
      requestType = dev.vasystem.api.v2.ListAirlinesRequest.class,
      responseType = dev.vasystem.api.v2.ListAirlinesResponse.class,
      methodType = io.grpc.MethodDescriptor.MethodType.UNARY)
  public static io.grpc.MethodDescriptor<dev.vasystem.api.v2.ListAirlinesRequest,
      dev.vasystem.api.v2.ListAirlinesResponse> getListAirlinesMethod() {
    io.grpc.MethodDescriptor<dev.vasystem.api.v2.ListAirlinesRequest, dev.vasystem.api.v2.ListAirlinesResponse> getListAirlinesMethod;
    if ((getListAirlinesMethod = AirlinesServiceGrpc.getListAirlinesMethod) == null) {
      synchronized (AirlinesServiceGrpc.class) {
        if ((getListAirlinesMethod = AirlinesServiceGrpc.getListAirlinesMethod) == null) {
          AirlinesServiceGrpc.getListAirlinesMethod = getListAirlinesMethod =
              io.grpc.MethodDescriptor.<dev.vasystem.api.v2.ListAirlinesRequest, dev.vasystem.api.v2.ListAirlinesResponse>newBuilder()
              .setType(io.grpc.MethodDescriptor.MethodType.UNARY)
              .setFullMethodName(generateFullMethodName(SERVICE_NAME, "ListAirlines"))
              .setSampledToLocalTracing(true)
              .setRequestMarshaller(io.grpc.protobuf.ProtoUtils.marshaller(
                  dev.vasystem.api.v2.ListAirlinesRequest.getDefaultInstance()))
              .setResponseMarshaller(io.grpc.protobuf.ProtoUtils.marshaller(
                  dev.vasystem.api.v2.ListAirlinesResponse.getDefaultInstance()))
              .setSchemaDescriptor(new AirlinesServiceMethodDescriptorSupplier("ListAirlines"))
              .build();
        }
      }
    }
    return getListAirlinesMethod;
  }

  /**
   * Creates a new async stub that supports all call types for the service
   */
  public static AirlinesServiceStub newStub(io.grpc.Channel channel) {
    io.grpc.stub.AbstractStub.StubFactory<AirlinesServiceStub> factory =
      new io.grpc.stub.AbstractStub.StubFactory<AirlinesServiceStub>() {
        @java.lang.Override
        public AirlinesServiceStub newStub(io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
          return new AirlinesServiceStub(channel, callOptions);
        }
      };
    return AirlinesServiceStub.newStub(factory, channel);
  }

  /**
   * Creates a new blocking-style stub that supports unary and streaming output calls on the service
   */
  public static AirlinesServiceBlockingStub newBlockingStub(
      io.grpc.Channel channel) {
    io.grpc.stub.AbstractStub.StubFactory<AirlinesServiceBlockingStub> factory =
      new io.grpc.stub.AbstractStub.StubFactory<AirlinesServiceBlockingStub>() {
        @java.lang.Override
        public AirlinesServiceBlockingStub newStub(io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
          return new AirlinesServiceBlockingStub(channel, callOptions);
        }
      };
    return AirlinesServiceBlockingStub.newStub(factory, channel);
  }

  /**
   * Creates a new ListenableFuture-style stub that supports unary calls on the service
   */
  public static AirlinesServiceFutureStub newFutureStub(
      io.grpc.Channel channel) {
    io.grpc.stub.AbstractStub.StubFactory<AirlinesServiceFutureStub> factory =
      new io.grpc.stub.AbstractStub.StubFactory<AirlinesServiceFutureStub>() {
        @java.lang.Override
        public AirlinesServiceFutureStub newStub(io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
          return new AirlinesServiceFutureStub(channel, callOptions);
        }
      };
    return AirlinesServiceFutureStub.newStub(factory, channel);
  }

  /**
   * <pre>
   * Retrieve airline information.
   * </pre>
   */
  public static abstract class AirlinesServiceImplBase implements io.grpc.BindableService {

    /**
     * <pre>
     * List airlines
     * </pre>
     */
    public void listAirlines(dev.vasystem.api.v2.ListAirlinesRequest request,
        io.grpc.stub.StreamObserver<dev.vasystem.api.v2.ListAirlinesResponse> responseObserver) {
      io.grpc.stub.ServerCalls.asyncUnimplementedUnaryCall(getListAirlinesMethod(), responseObserver);
    }

    @java.lang.Override public final io.grpc.ServerServiceDefinition bindService() {
      return io.grpc.ServerServiceDefinition.builder(getServiceDescriptor())
          .addMethod(
            getListAirlinesMethod(),
            io.grpc.stub.ServerCalls.asyncUnaryCall(
              new MethodHandlers<
                dev.vasystem.api.v2.ListAirlinesRequest,
                dev.vasystem.api.v2.ListAirlinesResponse>(
                  this, METHODID_LIST_AIRLINES)))
          .build();
    }
  }

  /**
   * <pre>
   * Retrieve airline information.
   * </pre>
   */
  public static final class AirlinesServiceStub extends io.grpc.stub.AbstractAsyncStub<AirlinesServiceStub> {
    private AirlinesServiceStub(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      super(channel, callOptions);
    }

    @java.lang.Override
    protected AirlinesServiceStub build(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      return new AirlinesServiceStub(channel, callOptions);
    }

    /**
     * <pre>
     * List airlines
     * </pre>
     */
    public void listAirlines(dev.vasystem.api.v2.ListAirlinesRequest request,
        io.grpc.stub.StreamObserver<dev.vasystem.api.v2.ListAirlinesResponse> responseObserver) {
      io.grpc.stub.ClientCalls.asyncUnaryCall(
          getChannel().newCall(getListAirlinesMethod(), getCallOptions()), request, responseObserver);
    }
  }

  /**
   * <pre>
   * Retrieve airline information.
   * </pre>
   */
  public static final class AirlinesServiceBlockingStub extends io.grpc.stub.AbstractBlockingStub<AirlinesServiceBlockingStub> {
    private AirlinesServiceBlockingStub(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      super(channel, callOptions);
    }

    @java.lang.Override
    protected AirlinesServiceBlockingStub build(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      return new AirlinesServiceBlockingStub(channel, callOptions);
    }

    /**
     * <pre>
     * List airlines
     * </pre>
     */
    public dev.vasystem.api.v2.ListAirlinesResponse listAirlines(dev.vasystem.api.v2.ListAirlinesRequest request) {
      return io.grpc.stub.ClientCalls.blockingUnaryCall(
          getChannel(), getListAirlinesMethod(), getCallOptions(), request);
    }
  }

  /**
   * <pre>
   * Retrieve airline information.
   * </pre>
   */
  public static final class AirlinesServiceFutureStub extends io.grpc.stub.AbstractFutureStub<AirlinesServiceFutureStub> {
    private AirlinesServiceFutureStub(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      super(channel, callOptions);
    }

    @java.lang.Override
    protected AirlinesServiceFutureStub build(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      return new AirlinesServiceFutureStub(channel, callOptions);
    }

    /**
     * <pre>
     * List airlines
     * </pre>
     */
    public com.google.common.util.concurrent.ListenableFuture<dev.vasystem.api.v2.ListAirlinesResponse> listAirlines(
        dev.vasystem.api.v2.ListAirlinesRequest request) {
      return io.grpc.stub.ClientCalls.futureUnaryCall(
          getChannel().newCall(getListAirlinesMethod(), getCallOptions()), request);
    }
  }

  private static final int METHODID_LIST_AIRLINES = 0;

  private static final class MethodHandlers<Req, Resp> implements
      io.grpc.stub.ServerCalls.UnaryMethod<Req, Resp>,
      io.grpc.stub.ServerCalls.ServerStreamingMethod<Req, Resp>,
      io.grpc.stub.ServerCalls.ClientStreamingMethod<Req, Resp>,
      io.grpc.stub.ServerCalls.BidiStreamingMethod<Req, Resp> {
    private final AirlinesServiceImplBase serviceImpl;
    private final int methodId;

    MethodHandlers(AirlinesServiceImplBase serviceImpl, int methodId) {
      this.serviceImpl = serviceImpl;
      this.methodId = methodId;
    }

    @java.lang.Override
    @java.lang.SuppressWarnings("unchecked")
    public void invoke(Req request, io.grpc.stub.StreamObserver<Resp> responseObserver) {
      switch (methodId) {
        case METHODID_LIST_AIRLINES:
          serviceImpl.listAirlines((dev.vasystem.api.v2.ListAirlinesRequest) request,
              (io.grpc.stub.StreamObserver<dev.vasystem.api.v2.ListAirlinesResponse>) responseObserver);
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

  private static abstract class AirlinesServiceBaseDescriptorSupplier
      implements io.grpc.protobuf.ProtoFileDescriptorSupplier, io.grpc.protobuf.ProtoServiceDescriptorSupplier {
    AirlinesServiceBaseDescriptorSupplier() {}

    @java.lang.Override
    public com.google.protobuf.Descriptors.FileDescriptor getFileDescriptor() {
      return dev.vasystem.api.v2.AirlinesProto.getDescriptor();
    }

    @java.lang.Override
    public com.google.protobuf.Descriptors.ServiceDescriptor getServiceDescriptor() {
      return getFileDescriptor().findServiceByName("AirlinesService");
    }
  }

  private static final class AirlinesServiceFileDescriptorSupplier
      extends AirlinesServiceBaseDescriptorSupplier {
    AirlinesServiceFileDescriptorSupplier() {}
  }

  private static final class AirlinesServiceMethodDescriptorSupplier
      extends AirlinesServiceBaseDescriptorSupplier
      implements io.grpc.protobuf.ProtoMethodDescriptorSupplier {
    private final String methodName;

    AirlinesServiceMethodDescriptorSupplier(String methodName) {
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
      synchronized (AirlinesServiceGrpc.class) {
        result = serviceDescriptor;
        if (result == null) {
          serviceDescriptor = result = io.grpc.ServiceDescriptor.newBuilder(SERVICE_NAME)
              .setSchemaDescriptor(new AirlinesServiceFileDescriptorSupplier())
              .addMethod(getListAirlinesMethod())
              .build();
        }
      }
    }
    return result;
  }
}
