# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: vasystem/api/v2/airports.proto

require 'google/protobuf'

Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("vasystem/api/v2/airports.proto", :syntax => :proto3) do
    add_message "vasystem.api.v2.Airport" do
      optional :id, :string, 1, json_name: "id"
      optional :icao_code, :string, 2, json_name: "icaoCode"
      optional :iata_code, :string, 3, json_name: "iataCode"
    end
  end
end

module Vasystem
  module Api
    module V2
      Airport = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("vasystem.api.v2.Airport").msgclass
    end
  end
end
