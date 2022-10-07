# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: vasystem/api/v2/aircraft.proto

require 'google/protobuf'

require 'vasystem/api/v2/airlines_pb'

Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("vasystem/api/v2/aircraft.proto", :syntax => :proto3) do
    add_message "vasystem.api.v2.AircraftType" do
      optional :id, :string, 1, json_name: "id"
      optional :icao_code, :string, 2, json_name: "icaoCode"
      optional :iata_code, :string, 3, json_name: "iataCode"
      optional :name, :string, 4, json_name: "name"
    end
    add_message "vasystem.api.v2.AircraftModel" do
      optional :id, :string, 1, json_name: "id"
      optional :aircraft_type, :message, 2, "vasystem.api.v2.AircraftType", json_name: "aircraftType"
      optional :airline, :message, 3, "vasystem.api.v2.Airline", json_name: "airline"
      optional :name, :string, 4, json_name: "name"
    end
  end
end

module Vasystem
  module Api
    module V2
      AircraftType = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("vasystem.api.v2.AircraftType").msgclass
      AircraftModel = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("vasystem.api.v2.AircraftModel").msgclass
    end
  end
end
