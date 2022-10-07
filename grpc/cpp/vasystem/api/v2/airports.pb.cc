// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vasystem/api/v2/airports.proto

#include "vasystem/api/v2/airports.pb.h"

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
PROTOBUF_CONSTEXPR Airport::Airport(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.id_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.icao_code_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.iata_code_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct AirportDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AirportDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~AirportDefaultTypeInternal() {}
  union {
    Airport _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AirportDefaultTypeInternal _Airport_default_instance_;
}  // namespace v2
}  // namespace api
}  // namespace vasystem
static ::_pb::Metadata file_level_metadata_vasystem_2fapi_2fv2_2fairports_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_vasystem_2fapi_2fv2_2fairports_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_vasystem_2fapi_2fv2_2fairports_2eproto = nullptr;

const uint32_t TableStruct_vasystem_2fapi_2fv2_2fairports_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::vasystem::api::v2::Airport, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::vasystem::api::v2::Airport, _impl_.id_),
  PROTOBUF_FIELD_OFFSET(::vasystem::api::v2::Airport, _impl_.icao_code_),
  PROTOBUF_FIELD_OFFSET(::vasystem::api::v2::Airport, _impl_.iata_code_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::vasystem::api::v2::Airport)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::vasystem::api::v2::_Airport_default_instance_._instance,
};

const char descriptor_table_protodef_vasystem_2fapi_2fv2_2fairports_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\036vasystem/api/v2/airports.proto\022\017vasyst"
  "em.api.v2\"S\n\007Airport\022\016\n\002id\030\001 \001(\tR\002id\022\033\n\t"
  "icao_code\030\002 \001(\tR\010icaoCode\022\033\n\tiata_code\030\003"
  " \001(\tR\010iataCodeB\271\001\n\023dev.vasystem.api.v2B\r"
  "AirportsProtoP\001Z5github.com/vasystem/api"
  "/grpc/go/vasystem/api/v2;apiv2\242\002\003VAX\252\002\017V"
  "asystem.Api.V2\312\002\017Vasystem\\Api\\V2\342\002\033Vasys"
  "tem\\Api\\V2\\GPBMetadata\352\002\021Vasystem::Api::"
  "V2b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_vasystem_2fapi_2fv2_2fairports_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_vasystem_2fapi_2fv2_2fairports_2eproto = {
    false, false, 330, descriptor_table_protodef_vasystem_2fapi_2fv2_2fairports_2eproto,
    "vasystem/api/v2/airports.proto",
    &descriptor_table_vasystem_2fapi_2fv2_2fairports_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_vasystem_2fapi_2fv2_2fairports_2eproto::offsets,
    file_level_metadata_vasystem_2fapi_2fv2_2fairports_2eproto, file_level_enum_descriptors_vasystem_2fapi_2fv2_2fairports_2eproto,
    file_level_service_descriptors_vasystem_2fapi_2fv2_2fairports_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_vasystem_2fapi_2fv2_2fairports_2eproto_getter() {
  return &descriptor_table_vasystem_2fapi_2fv2_2fairports_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_vasystem_2fapi_2fv2_2fairports_2eproto(&descriptor_table_vasystem_2fapi_2fv2_2fairports_2eproto);
namespace vasystem {
namespace api {
namespace v2 {

// ===================================================================

class Airport::_Internal {
 public:
};

Airport::Airport(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:vasystem.api.v2.Airport)
}
Airport::Airport(const Airport& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Airport* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.id_){}
    , decltype(_impl_.icao_code_){}
    , decltype(_impl_.iata_code_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_id().empty()) {
    _this->_impl_.id_.Set(from._internal_id(), 
      _this->GetArenaForAllocation());
  }
  _impl_.icao_code_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.icao_code_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_icao_code().empty()) {
    _this->_impl_.icao_code_.Set(from._internal_icao_code(), 
      _this->GetArenaForAllocation());
  }
  _impl_.iata_code_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.iata_code_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_iata_code().empty()) {
    _this->_impl_.iata_code_.Set(from._internal_iata_code(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:vasystem.api.v2.Airport)
}

inline void Airport::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.id_){}
    , decltype(_impl_.icao_code_){}
    , decltype(_impl_.iata_code_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.icao_code_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.icao_code_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.iata_code_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.iata_code_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Airport::~Airport() {
  // @@protoc_insertion_point(destructor:vasystem.api.v2.Airport)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Airport::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.id_.Destroy();
  _impl_.icao_code_.Destroy();
  _impl_.iata_code_.Destroy();
}

void Airport::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Airport::Clear() {
// @@protoc_insertion_point(message_clear_start:vasystem.api.v2.Airport)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.id_.ClearToEmpty();
  _impl_.icao_code_.ClearToEmpty();
  _impl_.iata_code_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Airport::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string id = 1 [json_name = "id"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_id();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "vasystem.api.v2.Airport.id"));
        } else
          goto handle_unusual;
        continue;
      // string icao_code = 2 [json_name = "icaoCode"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_icao_code();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "vasystem.api.v2.Airport.icao_code"));
        } else
          goto handle_unusual;
        continue;
      // string iata_code = 3 [json_name = "iataCode"];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_iata_code();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "vasystem.api.v2.Airport.iata_code"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Airport::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:vasystem.api.v2.Airport)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1 [json_name = "id"];
  if (!this->_internal_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_id().data(), static_cast<int>(this->_internal_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "vasystem.api.v2.Airport.id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_id(), target);
  }

  // string icao_code = 2 [json_name = "icaoCode"];
  if (!this->_internal_icao_code().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_icao_code().data(), static_cast<int>(this->_internal_icao_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "vasystem.api.v2.Airport.icao_code");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_icao_code(), target);
  }

  // string iata_code = 3 [json_name = "iataCode"];
  if (!this->_internal_iata_code().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_iata_code().data(), static_cast<int>(this->_internal_iata_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "vasystem.api.v2.Airport.iata_code");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_iata_code(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:vasystem.api.v2.Airport)
  return target;
}

size_t Airport::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:vasystem.api.v2.Airport)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string id = 1 [json_name = "id"];
  if (!this->_internal_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_id());
  }

  // string icao_code = 2 [json_name = "icaoCode"];
  if (!this->_internal_icao_code().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_icao_code());
  }

  // string iata_code = 3 [json_name = "iataCode"];
  if (!this->_internal_iata_code().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_iata_code());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Airport::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Airport::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Airport::GetClassData() const { return &_class_data_; }


void Airport::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Airport*>(&to_msg);
  auto& from = static_cast<const Airport&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:vasystem.api.v2.Airport)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_id().empty()) {
    _this->_internal_set_id(from._internal_id());
  }
  if (!from._internal_icao_code().empty()) {
    _this->_internal_set_icao_code(from._internal_icao_code());
  }
  if (!from._internal_iata_code().empty()) {
    _this->_internal_set_iata_code(from._internal_iata_code());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Airport::CopyFrom(const Airport& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:vasystem.api.v2.Airport)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Airport::IsInitialized() const {
  return true;
}

void Airport::InternalSwap(Airport* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.id_, lhs_arena,
      &other->_impl_.id_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.icao_code_, lhs_arena,
      &other->_impl_.icao_code_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.iata_code_, lhs_arena,
      &other->_impl_.iata_code_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Airport::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_vasystem_2fapi_2fv2_2fairports_2eproto_getter, &descriptor_table_vasystem_2fapi_2fv2_2fairports_2eproto_once,
      file_level_metadata_vasystem_2fapi_2fv2_2fairports_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace v2
}  // namespace api
}  // namespace vasystem
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::vasystem::api::v2::Airport*
Arena::CreateMaybeMessage< ::vasystem::api::v2::Airport >(Arena* arena) {
  return Arena::CreateMessageInternal< ::vasystem::api::v2::Airport >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
