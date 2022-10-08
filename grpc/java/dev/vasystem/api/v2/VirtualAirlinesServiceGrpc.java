package dev.vasystem.api.v2;

import static io.grpc.MethodDescriptor.generateFullMethodName;

/**
 * <pre>
 * Retrieve virtual airline information.
 * </pre>
 */
@javax.annotation.Generated(
    value = "by gRPC proto compiler (version 1.49.1)",
    comments = "Source: vasystem/api/v2/virtual_airlines.proto")
@io.grpc.stub.annotations.GrpcGenerated
public final class VirtualAirlinesServiceGrpc {

  private VirtualAirlinesServiceGrpc() {}

  public static final String SERVICE_NAME = "vasystem.api.v2.VirtualAirlinesService";

  // Static method descriptors that strictly reflect the proto.
  private static volatile io.grpc.MethodDescriptor<dev.vasystem.api.v2.GetVirtualAirlineRequest,
      dev.vasystem.api.v2.GetVirtualAirlineResponse> getGetVirtualAirlineMethod;

  @io.grpc.stub.annotations.RpcMethod(
      fullMethodName = SERVICE_NAME + '/' + "GetVirtualAirline",
      requestType = dev.vasystem.api.v2.GetVirtualAirlineRequest.class,
      responseType = dev.vasystem.api.v2.GetVirtualAirlineResponse.class,
      methodType = io.grpc.MethodDescriptor.MethodType.UNARY)
  public static io.grpc.MethodDescriptor<dev.vasystem.api.v2.GetVirtualAirlineRequest,
      dev.vasystem.api.v2.GetVirtualAirlineResponse> getGetVirtualAirlineMethod() {
    io.grpc.MethodDescriptor<dev.vasystem.api.v2.GetVirtualAirlineRequest, dev.vasystem.api.v2.GetVirtualAirlineResponse> getGetVirtualAirlineMethod;
    if ((getGetVirtualAirlineMethod = VirtualAirlinesServiceGrpc.getGetVirtualAirlineMethod) == null) {
      synchronized (VirtualAirlinesServiceGrpc.class) {
        if ((getGetVirtualAirlineMethod = VirtualAirlinesServiceGrpc.getGetVirtualAirlineMethod) == null) {
          VirtualAirlinesServiceGrpc.getGetVirtualAirlineMethod = getGetVirtualAirlineMethod =
              io.grpc.MethodDescriptor.<dev.vasystem.api.v2.GetVirtualAirlineRequest, dev.vasystem.api.v2.GetVirtualAirlineResponse>newBuilder()
              .setType(io.grpc.MethodDescriptor.MethodType.UNARY)
              .setFullMethodName(generateFullMethodName(SERVICE_NAME, "GetVirtualAirline"))
              .setSampledToLocalTracing(true)
              .setRequestMarshaller(io.grpc.protobuf.ProtoUtils.marshaller(
                  dev.vasystem.api.v2.GetVirtualAirlineRequest.getDefaultInstance()))
              .setResponseMarshaller(io.grpc.protobuf.ProtoUtils.marshaller(
                  dev.vasystem.api.v2.GetVirtualAirlineResponse.getDefaultInstance()))
              .setSchemaDescriptor(new VirtualAirlinesServiceMethodDescriptorSupplier("GetVirtualAirline"))
              .build();
        }
      }
    }
    return getGetVirtualAirlineMethod;
  }

  /**
   * Creates a new async stub that supports all call types for the service
   */
  public static VirtualAirlinesServiceStub newStub(io.grpc.Channel channel) {
    io.grpc.stub.AbstractStub.StubFactory<VirtualAirlinesServiceStub> factory =
      new io.grpc.stub.AbstractStub.StubFactory<VirtualAirlinesServiceStub>() {
        @java.lang.Override
        public VirtualAirlinesServiceStub newStub(io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
          return new VirtualAirlinesServiceStub(channel, callOptions);
        }
      };
    return VirtualAirlinesServiceStub.newStub(factory, channel);
  }

  /**
   * Creates a new blocking-style stub that supports unary and streaming output calls on the service
   */
  public static VirtualAirlinesServiceBlockingStub newBlockingStub(
      io.grpc.Channel channel) {
    io.grpc.stub.AbstractStub.StubFactory<VirtualAirlinesServiceBlockingStub> factory =
      new io.grpc.stub.AbstractStub.StubFactory<VirtualAirlinesServiceBlockingStub>() {
        @java.lang.Override
        public VirtualAirlinesServiceBlockingStub newStub(io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
          return new VirtualAirlinesServiceBlockingStub(channel, callOptions);
        }
      };
    return VirtualAirlinesServiceBlockingStub.newStub(factory, channel);
  }

  /**
   * Creates a new ListenableFuture-style stub that supports unary calls on the service
   */
  public static VirtualAirlinesServiceFutureStub newFutureStub(
      io.grpc.Channel channel) {
    io.grpc.stub.AbstractStub.StubFactory<VirtualAirlinesServiceFutureStub> factory =
      new io.grpc.stub.AbstractStub.StubFactory<VirtualAirlinesServiceFutureStub>() {
        @java.lang.Override
        public VirtualAirlinesServiceFutureStub newStub(io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
          return new VirtualAirlinesServiceFutureStub(channel, callOptions);
        }
      };
    return VirtualAirlinesServiceFutureStub.newStub(factory, channel);
  }

  /**
   * <pre>
   * Retrieve virtual airline information.
   * </pre>
   */
  public static abstract class VirtualAirlinesServiceImplBase implements io.grpc.BindableService {

    /**
     * <pre>
     * Get virtual airline information.
     * This method does not require authentication.
     * </pre>
     */
    public void getVirtualAirline(dev.vasystem.api.v2.GetVirtualAirlineRequest request,
        io.grpc.stub.StreamObserver<dev.vasystem.api.v2.GetVirtualAirlineResponse> responseObserver) {
      io.grpc.stub.ServerCalls.asyncUnimplementedUnaryCall(getGetVirtualAirlineMethod(), responseObserver);
    }

    @java.lang.Override public final io.grpc.ServerServiceDefinition bindService() {
      return io.grpc.ServerServiceDefinition.builder(getServiceDescriptor())
          .addMethod(
            getGetVirtualAirlineMethod(),
            io.grpc.stub.ServerCalls.asyncUnaryCall(
              new MethodHandlers<
                dev.vasystem.api.v2.GetVirtualAirlineRequest,
                dev.vasystem.api.v2.GetVirtualAirlineResponse>(
                  this, METHODID_GET_VIRTUAL_AIRLINE)))
          .build();
    }
  }

  /**
   * <pre>
   * Retrieve virtual airline information.
   * </pre>
   */
  public static final class VirtualAirlinesServiceStub extends io.grpc.stub.AbstractAsyncStub<VirtualAirlinesServiceStub> {
    private VirtualAirlinesServiceStub(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      super(channel, callOptions);
    }

    @java.lang.Override
    protected VirtualAirlinesServiceStub build(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      return new VirtualAirlinesServiceStub(channel, callOptions);
    }

    /**
     * <pre>
     * Get virtual airline information.
     * This method does not require authentication.
     * </pre>
     */
    public void getVirtualAirline(dev.vasystem.api.v2.GetVirtualAirlineRequest request,
        io.grpc.stub.StreamObserver<dev.vasystem.api.v2.GetVirtualAirlineResponse> responseObserver) {
      io.grpc.stub.ClientCalls.asyncUnaryCall(
          getChannel().newCall(getGetVirtualAirlineMethod(), getCallOptions()), request, responseObserver);
    }
  }

  /**
   * <pre>
   * Retrieve virtual airline information.
   * </pre>
   */
  public static final class VirtualAirlinesServiceBlockingStub extends io.grpc.stub.AbstractBlockingStub<VirtualAirlinesServiceBlockingStub> {
    private VirtualAirlinesServiceBlockingStub(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      super(channel, callOptions);
    }

    @java.lang.Override
    protected VirtualAirlinesServiceBlockingStub build(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      return new VirtualAirlinesServiceBlockingStub(channel, callOptions);
    }

    /**
     * <pre>
     * Get virtual airline information.
     * This method does not require authentication.
     * </pre>
     */
    public dev.vasystem.api.v2.GetVirtualAirlineResponse getVirtualAirline(dev.vasystem.api.v2.GetVirtualAirlineRequest request) {
      return io.grpc.stub.ClientCalls.blockingUnaryCall(
          getChannel(), getGetVirtualAirlineMethod(), getCallOptions(), request);
    }
  }

  /**
   * <pre>
   * Retrieve virtual airline information.
   * </pre>
   */
  public static final class VirtualAirlinesServiceFutureStub extends io.grpc.stub.AbstractFutureStub<VirtualAirlinesServiceFutureStub> {
    private VirtualAirlinesServiceFutureStub(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      super(channel, callOptions);
    }

    @java.lang.Override
    protected VirtualAirlinesServiceFutureStub build(
        io.grpc.Channel channel, io.grpc.CallOptions callOptions) {
      return new VirtualAirlinesServiceFutureStub(channel, callOptions);
    }

    /**
     * <pre>
     * Get virtual airline information.
     * This method does not require authentication.
     * </pre>
     */
    public com.google.common.util.concurrent.ListenableFuture<dev.vasystem.api.v2.GetVirtualAirlineResponse> getVirtualAirline(
        dev.vasystem.api.v2.GetVirtualAirlineRequest request) {
      return io.grpc.stub.ClientCalls.futureUnaryCall(
          getChannel().newCall(getGetVirtualAirlineMethod(), getCallOptions()), request);
    }
  }

  private static final int METHODID_GET_VIRTUAL_AIRLINE = 0;

  private static final class MethodHandlers<Req, Resp> implements
      io.grpc.stub.ServerCalls.UnaryMethod<Req, Resp>,
      io.grpc.stub.ServerCalls.ServerStreamingMethod<Req, Resp>,
      io.grpc.stub.ServerCalls.ClientStreamingMethod<Req, Resp>,
      io.grpc.stub.ServerCalls.BidiStreamingMethod<Req, Resp> {
    private final VirtualAirlinesServiceImplBase serviceImpl;
    private final int methodId;

    MethodHandlers(VirtualAirlinesServiceImplBase serviceImpl, int methodId) {
      this.serviceImpl = serviceImpl;
      this.methodId = methodId;
    }

    @java.lang.Override
    @java.lang.SuppressWarnings("unchecked")
    public void invoke(Req request, io.grpc.stub.StreamObserver<Resp> responseObserver) {
      switch (methodId) {
        case METHODID_GET_VIRTUAL_AIRLINE:
          serviceImpl.getVirtualAirline((dev.vasystem.api.v2.GetVirtualAirlineRequest) request,
              (io.grpc.stub.StreamObserver<dev.vasystem.api.v2.GetVirtualAirlineResponse>) responseObserver);
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

  private static abstract class VirtualAirlinesServiceBaseDescriptorSupplier
      implements io.grpc.protobuf.ProtoFileDescriptorSupplier, io.grpc.protobuf.ProtoServiceDescriptorSupplier {
    VirtualAirlinesServiceBaseDescriptorSupplier() {}

    @java.lang.Override
    public com.google.protobuf.Descriptors.FileDescriptor getFileDescriptor() {
      return dev.vasystem.api.v2.VirtualAirlinesProto.getDescriptor();
    }

    @java.lang.Override
    public com.google.protobuf.Descriptors.ServiceDescriptor getServiceDescriptor() {
      return getFileDescriptor().findServiceByName("VirtualAirlinesService");
    }
  }

  private static final class VirtualAirlinesServiceFileDescriptorSupplier
      extends VirtualAirlinesServiceBaseDescriptorSupplier {
    VirtualAirlinesServiceFileDescriptorSupplier() {}
  }

  private static final class VirtualAirlinesServiceMethodDescriptorSupplier
      extends VirtualAirlinesServiceBaseDescriptorSupplier
      implements io.grpc.protobuf.ProtoMethodDescriptorSupplier {
    private final String methodName;

    VirtualAirlinesServiceMethodDescriptorSupplier(String methodName) {
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
      synchronized (VirtualAirlinesServiceGrpc.class) {
        result = serviceDescriptor;
        if (result == null) {
          serviceDescriptor = result = io.grpc.ServiceDescriptor.newBuilder(SERVICE_NAME)
              .setSchemaDescriptor(new VirtualAirlinesServiceFileDescriptorSupplier())
              .addMethod(getGetVirtualAirlineMethod())
              .build();
        }
      }
    }
    return result;
  }
}
