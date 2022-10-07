# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

from vasystem.api.v2 import routes_pb2 as vasystem_dot_api_dot_v2_dot_routes__pb2


class RoutesServiceStub(object):
    """Missing associated documentation comment in .proto file."""

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.ListRoutes = channel.unary_unary(
                '/vasystem.api.v2.RoutesService/ListRoutes',
                request_serializer=vasystem_dot_api_dot_v2_dot_routes__pb2.ListRoutesRequest.SerializeToString,
                response_deserializer=vasystem_dot_api_dot_v2_dot_routes__pb2.ListRoutesResponse.FromString,
                )


class RoutesServiceServicer(object):
    """Missing associated documentation comment in .proto file."""

    def ListRoutes(self, request, context):
        """List routes
        """
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_RoutesServiceServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'ListRoutes': grpc.unary_unary_rpc_method_handler(
                    servicer.ListRoutes,
                    request_deserializer=vasystem_dot_api_dot_v2_dot_routes__pb2.ListRoutesRequest.FromString,
                    response_serializer=vasystem_dot_api_dot_v2_dot_routes__pb2.ListRoutesResponse.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'vasystem.api.v2.RoutesService', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


 # This class is part of an EXPERIMENTAL API.
class RoutesService(object):
    """Missing associated documentation comment in .proto file."""

    @staticmethod
    def ListRoutes(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/vasystem.api.v2.RoutesService/ListRoutes',
            vasystem_dot_api_dot_v2_dot_routes__pb2.ListRoutesRequest.SerializeToString,
            vasystem_dot_api_dot_v2_dot_routes__pb2.ListRoutesResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)
