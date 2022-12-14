// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: vasystem/api/v2/virtual_airlines.proto
// </auto-generated>
#pragma warning disable 0414, 1591, 8981
#region Designer generated code

using grpc = global::Grpc.Core;

namespace Vasystem.Api.V2 {
  /// <summary>
  /// Retrieve virtual airline information.
  /// </summary>
  public static partial class VirtualAirlinesService
  {
    static readonly string __ServiceName = "vasystem.api.v2.VirtualAirlinesService";

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static void __Helper_SerializeMessage(global::Google.Protobuf.IMessage message, grpc::SerializationContext context)
    {
      #if !GRPC_DISABLE_PROTOBUF_BUFFER_SERIALIZATION
      if (message is global::Google.Protobuf.IBufferMessage)
      {
        context.SetPayloadLength(message.CalculateSize());
        global::Google.Protobuf.MessageExtensions.WriteTo(message, context.GetBufferWriter());
        context.Complete();
        return;
      }
      #endif
      context.Complete(global::Google.Protobuf.MessageExtensions.ToByteArray(message));
    }

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static class __Helper_MessageCache<T>
    {
      public static readonly bool IsBufferMessage = global::System.Reflection.IntrospectionExtensions.GetTypeInfo(typeof(global::Google.Protobuf.IBufferMessage)).IsAssignableFrom(typeof(T));
    }

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static T __Helper_DeserializeMessage<T>(grpc::DeserializationContext context, global::Google.Protobuf.MessageParser<T> parser) where T : global::Google.Protobuf.IMessage<T>
    {
      #if !GRPC_DISABLE_PROTOBUF_BUFFER_SERIALIZATION
      if (__Helper_MessageCache<T>.IsBufferMessage)
      {
        return parser.ParseFrom(context.PayloadAsReadOnlySequence());
      }
      #endif
      return parser.ParseFrom(context.PayloadAsNewBuffer());
    }

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Vasystem.Api.V2.GetVirtualAirlineRequest> __Marshaller_vasystem_api_v2_GetVirtualAirlineRequest = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Vasystem.Api.V2.GetVirtualAirlineRequest.Parser));
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Marshaller<global::Vasystem.Api.V2.GetVirtualAirlineResponse> __Marshaller_vasystem_api_v2_GetVirtualAirlineResponse = grpc::Marshallers.Create(__Helper_SerializeMessage, context => __Helper_DeserializeMessage(context, global::Vasystem.Api.V2.GetVirtualAirlineResponse.Parser));

    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    static readonly grpc::Method<global::Vasystem.Api.V2.GetVirtualAirlineRequest, global::Vasystem.Api.V2.GetVirtualAirlineResponse> __Method_GetVirtualAirline = new grpc::Method<global::Vasystem.Api.V2.GetVirtualAirlineRequest, global::Vasystem.Api.V2.GetVirtualAirlineResponse>(
        grpc::MethodType.Unary,
        __ServiceName,
        "GetVirtualAirline",
        __Marshaller_vasystem_api_v2_GetVirtualAirlineRequest,
        __Marshaller_vasystem_api_v2_GetVirtualAirlineResponse);

    /// <summary>Service descriptor</summary>
    public static global::Google.Protobuf.Reflection.ServiceDescriptor Descriptor
    {
      get { return global::Vasystem.Api.V2.VirtualAirlinesReflection.Descriptor.Services[0]; }
    }

    /// <summary>Base class for server-side implementations of VirtualAirlinesService</summary>
    [grpc::BindServiceMethod(typeof(VirtualAirlinesService), "BindService")]
    public abstract partial class VirtualAirlinesServiceBase
    {
      /// <summary>
      /// Get virtual airline information.
      /// This method does not require authentication.
      /// </summary>
      /// <param name="request">The request received from the client.</param>
      /// <param name="context">The context of the server-side call handler being invoked.</param>
      /// <returns>The response to send back to the client (wrapped by a task).</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::System.Threading.Tasks.Task<global::Vasystem.Api.V2.GetVirtualAirlineResponse> GetVirtualAirline(global::Vasystem.Api.V2.GetVirtualAirlineRequest request, grpc::ServerCallContext context)
      {
        throw new grpc::RpcException(new grpc::Status(grpc::StatusCode.Unimplemented, ""));
      }

    }

    /// <summary>Client for VirtualAirlinesService</summary>
    public partial class VirtualAirlinesServiceClient : grpc::ClientBase<VirtualAirlinesServiceClient>
    {
      /// <summary>Creates a new client for VirtualAirlinesService</summary>
      /// <param name="channel">The channel to use to make remote calls.</param>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public VirtualAirlinesServiceClient(grpc::ChannelBase channel) : base(channel)
      {
      }
      /// <summary>Creates a new client for VirtualAirlinesService that uses a custom <c>CallInvoker</c>.</summary>
      /// <param name="callInvoker">The callInvoker to use to make remote calls.</param>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public VirtualAirlinesServiceClient(grpc::CallInvoker callInvoker) : base(callInvoker)
      {
      }
      /// <summary>Protected parameterless constructor to allow creation of test doubles.</summary>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      protected VirtualAirlinesServiceClient() : base()
      {
      }
      /// <summary>Protected constructor to allow creation of configured clients.</summary>
      /// <param name="configuration">The client configuration.</param>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      protected VirtualAirlinesServiceClient(ClientBaseConfiguration configuration) : base(configuration)
      {
      }

      /// <summary>
      /// Get virtual airline information.
      /// This method does not require authentication.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Vasystem.Api.V2.GetVirtualAirlineResponse GetVirtualAirline(global::Vasystem.Api.V2.GetVirtualAirlineRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return GetVirtualAirline(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Get virtual airline information.
      /// This method does not require authentication.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The response received from the server.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual global::Vasystem.Api.V2.GetVirtualAirlineResponse GetVirtualAirline(global::Vasystem.Api.V2.GetVirtualAirlineRequest request, grpc::CallOptions options)
      {
        return CallInvoker.BlockingUnaryCall(__Method_GetVirtualAirline, null, options, request);
      }
      /// <summary>
      /// Get virtual airline information.
      /// This method does not require authentication.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="headers">The initial metadata to send with the call. This parameter is optional.</param>
      /// <param name="deadline">An optional deadline for the call. The call will be cancelled if deadline is hit.</param>
      /// <param name="cancellationToken">An optional token for canceling the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Vasystem.Api.V2.GetVirtualAirlineResponse> GetVirtualAirlineAsync(global::Vasystem.Api.V2.GetVirtualAirlineRequest request, grpc::Metadata headers = null, global::System.DateTime? deadline = null, global::System.Threading.CancellationToken cancellationToken = default(global::System.Threading.CancellationToken))
      {
        return GetVirtualAirlineAsync(request, new grpc::CallOptions(headers, deadline, cancellationToken));
      }
      /// <summary>
      /// Get virtual airline information.
      /// This method does not require authentication.
      /// </summary>
      /// <param name="request">The request to send to the server.</param>
      /// <param name="options">The options for the call.</param>
      /// <returns>The call object.</returns>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      public virtual grpc::AsyncUnaryCall<global::Vasystem.Api.V2.GetVirtualAirlineResponse> GetVirtualAirlineAsync(global::Vasystem.Api.V2.GetVirtualAirlineRequest request, grpc::CallOptions options)
      {
        return CallInvoker.AsyncUnaryCall(__Method_GetVirtualAirline, null, options, request);
      }
      /// <summary>Creates a new instance of client from given <c>ClientBaseConfiguration</c>.</summary>
      [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
      protected override VirtualAirlinesServiceClient NewInstance(ClientBaseConfiguration configuration)
      {
        return new VirtualAirlinesServiceClient(configuration);
      }
    }

    /// <summary>Creates service definition that can be registered with a server</summary>
    /// <param name="serviceImpl">An object implementing the server-side handling logic.</param>
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    public static grpc::ServerServiceDefinition BindService(VirtualAirlinesServiceBase serviceImpl)
    {
      return grpc::ServerServiceDefinition.CreateBuilder()
          .AddMethod(__Method_GetVirtualAirline, serviceImpl.GetVirtualAirline).Build();
    }

    /// <summary>Register service method with a service binder with or without implementation. Useful when customizing the service binding logic.
    /// Note: this method is part of an experimental API that can change or be removed without any prior notice.</summary>
    /// <param name="serviceBinder">Service methods will be bound by calling <c>AddMethod</c> on this object.</param>
    /// <param name="serviceImpl">An object implementing the server-side handling logic.</param>
    [global::System.CodeDom.Compiler.GeneratedCode("grpc_csharp_plugin", null)]
    public static void BindService(grpc::ServiceBinderBase serviceBinder, VirtualAirlinesServiceBase serviceImpl)
    {
      serviceBinder.AddMethod(__Method_GetVirtualAirline, serviceImpl == null ? null : new grpc::UnaryServerMethod<global::Vasystem.Api.V2.GetVirtualAirlineRequest, global::Vasystem.Api.V2.GetVirtualAirlineResponse>(serviceImpl.GetVirtualAirline));
    }

  }
}
#endregion
