// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vasystem/api/v2/dayofweek.proto

#include "vasystem/api/v2/dayofweek.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace vasystem {
namespace api {
namespace v2 {
}  // namespace v2
}  // namespace api
}  // namespace vasystem
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_vasystem_2fapi_2fv2_2fdayofweek_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_vasystem_2fapi_2fv2_2fdayofweek_2eproto = nullptr;
const uint32_t TableStruct_vasystem_2fapi_2fv2_2fdayofweek_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_vasystem_2fapi_2fv2_2fdayofweek_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\037vasystem/api/v2/dayofweek.proto\022\017vasys"
  "tem.api.v2*\330\001\n\tDayOfWeek\022\033\n\027DAY_OF_WEEK_"
  "UNSPECIFIED\020\000\022\026\n\022DAY_OF_WEEK_MONDAY\020\001\022\027\n"
  "\023DAY_OF_WEEK_TUESDAY\020\002\022\031\n\025DAY_OF_WEEK_WE"
  "DNESDAY\020\003\022\030\n\024DAY_OF_WEEK_THURSDAY\020\004\022\026\n\022D"
  "AY_OF_WEEK_FRIDAY\020\005\022\030\n\024DAY_OF_WEEK_SATUR"
  "DAY\020\006\022\026\n\022DAY_OF_WEEK_SUNDAY\020\007B\272\001\n\023dev.va"
  "system.api.v2B\016DayofweekProtoP\001Z5github."
  "com/vasystem/api/grpc/go/vasystem/api/v2"
  ";apiv2\242\002\003VAX\252\002\017Vasystem.Api.V2\312\002\017Vasyste"
  "m\\Api\\V2\342\002\033Vasystem\\Api\\V2\\GPBMetadata\352\002"
  "\021Vasystem::Api::V2b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_vasystem_2fapi_2fv2_2fdayofweek_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_vasystem_2fapi_2fv2_2fdayofweek_2eproto = {
    false, false, 466, descriptor_table_protodef_vasystem_2fapi_2fv2_2fdayofweek_2eproto,
    "vasystem/api/v2/dayofweek.proto",
    &descriptor_table_vasystem_2fapi_2fv2_2fdayofweek_2eproto_once, nullptr, 0, 0,
    schemas, file_default_instances, TableStruct_vasystem_2fapi_2fv2_2fdayofweek_2eproto::offsets,
    nullptr, file_level_enum_descriptors_vasystem_2fapi_2fv2_2fdayofweek_2eproto,
    file_level_service_descriptors_vasystem_2fapi_2fv2_2fdayofweek_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_vasystem_2fapi_2fv2_2fdayofweek_2eproto_getter() {
  return &descriptor_table_vasystem_2fapi_2fv2_2fdayofweek_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_vasystem_2fapi_2fv2_2fdayofweek_2eproto(&descriptor_table_vasystem_2fapi_2fv2_2fdayofweek_2eproto);
namespace vasystem {
namespace api {
namespace v2 {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DayOfWeek_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_vasystem_2fapi_2fv2_2fdayofweek_2eproto);
  return file_level_enum_descriptors_vasystem_2fapi_2fv2_2fdayofweek_2eproto[0];
}
bool DayOfWeek_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v2
}  // namespace api
}  // namespace vasystem
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
