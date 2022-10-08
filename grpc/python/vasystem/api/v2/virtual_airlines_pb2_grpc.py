# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

from vasystem.api.v2 import virtual_airlines_pb2 as vasystem_dot_api_dot_v2_dot_virtual__airlines__pb2


class VirtualAirlinesServiceStub(object):
    """Missing associated documentation comment in .proto file."""

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.GetVirtualAirline = channel.unary_unary(
                '/vasystem.api.v2.VirtualAirlinesService/GetVirtualAirline',
                request_serializer=vasystem_dot_api_dot_v2_dot_virtual__airlines__pb2.GetVirtualAirlineRequest.SerializeToString,
                response_deserializer=vasystem_dot_api_dot_v2_dot_virtual__airlines__pb2.GetVirtualAirlineResponse.FromString,
                )


class VirtualAirlinesServiceServicer(object):
    """Missing associated documentation comment in .proto file."""

    def GetVirtualAirline(self, request, context):
        """Get virtual airline information
        This method does not require authentication.
        """
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_VirtualAirlinesServiceServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'GetVirtualAirline': grpc.unary_unary_rpc_method_handler(
                    servicer.GetVirtualAirline,
                    request_deserializer=vasystem_dot_api_dot_v2_dot_virtual__airlines__pb2.GetVirtualAirlineRequest.FromString,
                    response_serializer=vasystem_dot_api_dot_v2_dot_virtual__airlines__pb2.GetVirtualAirlineResponse.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'vasystem.api.v2.VirtualAirlinesService', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


 # This class is part of an EXPERIMENTAL API.
class VirtualAirlinesService(object):
    """Missing associated documentation comment in .proto file."""

    @staticmethod
    def GetVirtualAirline(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/vasystem.api.v2.VirtualAirlinesService/GetVirtualAirline',
            vasystem_dot_api_dot_v2_dot_virtual__airlines__pb2.GetVirtualAirlineRequest.SerializeToString,
            vasystem_dot_api_dot_v2_dot_virtual__airlines__pb2.GetVirtualAirlineResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)