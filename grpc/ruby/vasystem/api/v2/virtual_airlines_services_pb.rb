# Generated by the protocol buffer compiler.  DO NOT EDIT!
# Source: vasystem/api/v2/virtual_airlines.proto for package 'Vasystem.Api.V2'

require 'grpc'
require 'vasystem/api/v2/virtual_airlines_pb'

module Vasystem
  module Api
    module V2
      module VirtualAirlinesService
        # Retrieve virtual airline information.
        class Service

          include ::GRPC::GenericService

          self.marshal_class_method = :encode
          self.unmarshal_class_method = :decode
          self.service_name = 'vasystem.api.v2.VirtualAirlinesService'

          # Get virtual airline information
          # This method does not require authentication.
          rpc :GetVirtualAirline, ::Vasystem::Api::V2::GetVirtualAirlineRequest, ::Vasystem::Api::V2::GetVirtualAirlineResponse
        end

        Stub = Service.rpc_stub_class
      end
    end
  end
end
