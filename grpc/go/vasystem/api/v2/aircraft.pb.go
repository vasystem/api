// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.28.1
// 	protoc        (unknown)
// source: vasystem/api/v2/aircraft.proto

package apiv2

import (
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

// An AircraftType resource represents a type of aircraft, irrespective of the airline that operates it.
type AircraftType struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// Unique identifier of the aircraft type.
	Id string `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	// The ICAO aircraft type code. Unique.
	// Example: `B738`
	IcaoCode string `protobuf:"bytes,2,opt,name=icao_code,json=icaoCode,proto3" json:"icao_code,omitempty"`
	// The IATA aircraft type code.
	// Example: `738`
	IataCode string `protobuf:"bytes,3,opt,name=iata_code,json=iataCode,proto3" json:"iata_code,omitempty"`
	// The name of the aircraft type.
	// Example: `Boeing 737-800`
	Name string `protobuf:"bytes,4,opt,name=name,proto3" json:"name,omitempty"`
}

func (x *AircraftType) Reset() {
	*x = AircraftType{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vasystem_api_v2_aircraft_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *AircraftType) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*AircraftType) ProtoMessage() {}

func (x *AircraftType) ProtoReflect() protoreflect.Message {
	mi := &file_vasystem_api_v2_aircraft_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use AircraftType.ProtoReflect.Descriptor instead.
func (*AircraftType) Descriptor() ([]byte, []int) {
	return file_vasystem_api_v2_aircraft_proto_rawDescGZIP(), []int{0}
}

func (x *AircraftType) GetId() string {
	if x != nil {
		return x.Id
	}
	return ""
}

func (x *AircraftType) GetIcaoCode() string {
	if x != nil {
		return x.IcaoCode
	}
	return ""
}

func (x *AircraftType) GetIataCode() string {
	if x != nil {
		return x.IataCode
	}
	return ""
}

func (x *AircraftType) GetName() string {
	if x != nil {
		return x.Name
	}
	return ""
}

// An AircraftModel resource represents a model of aircraft. An aircraft model is an aircraft type linked
// to an airline and its configuration (usually seating configuration).
type AircraftModel struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// Unique identifier of the aircraft model.
	Id string `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	// The type of aircraft.
	AircraftType *AircraftType `protobuf:"bytes,2,opt,name=aircraft_type,json=aircraftType,proto3" json:"aircraft_type,omitempty"`
	// The airline that operates the aircraft model.
	Airline *Airline `protobuf:"bytes,3,opt,name=airline,proto3" json:"airline,omitempty"`
	// The name of the aircraft model.
	// Example: `	Boeing 737-824(WL)`
	Name string `protobuf:"bytes,4,opt,name=name,proto3" json:"name,omitempty"`
}

func (x *AircraftModel) Reset() {
	*x = AircraftModel{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vasystem_api_v2_aircraft_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *AircraftModel) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*AircraftModel) ProtoMessage() {}

func (x *AircraftModel) ProtoReflect() protoreflect.Message {
	mi := &file_vasystem_api_v2_aircraft_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use AircraftModel.ProtoReflect.Descriptor instead.
func (*AircraftModel) Descriptor() ([]byte, []int) {
	return file_vasystem_api_v2_aircraft_proto_rawDescGZIP(), []int{1}
}

func (x *AircraftModel) GetId() string {
	if x != nil {
		return x.Id
	}
	return ""
}

func (x *AircraftModel) GetAircraftType() *AircraftType {
	if x != nil {
		return x.AircraftType
	}
	return nil
}

func (x *AircraftModel) GetAirline() *Airline {
	if x != nil {
		return x.Airline
	}
	return nil
}

func (x *AircraftModel) GetName() string {
	if x != nil {
		return x.Name
	}
	return ""
}

var File_vasystem_api_v2_aircraft_proto protoreflect.FileDescriptor

var file_vasystem_api_v2_aircraft_proto_rawDesc = []byte{
	0x0a, 0x1e, 0x76, 0x61, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x2f, 0x61, 0x70, 0x69, 0x2f, 0x76,
	0x32, 0x2f, 0x61, 0x69, 0x72, 0x63, 0x72, 0x61, 0x66, 0x74, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f,
	0x12, 0x0f, 0x76, 0x61, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x2e, 0x61, 0x70, 0x69, 0x2e, 0x76,
	0x32, 0x1a, 0x1e, 0x76, 0x61, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x2f, 0x61, 0x70, 0x69, 0x2f,
	0x76, 0x32, 0x2f, 0x61, 0x69, 0x72, 0x6c, 0x69, 0x6e, 0x65, 0x73, 0x2e, 0x70, 0x72, 0x6f, 0x74,
	0x6f, 0x22, 0x6c, 0x0a, 0x0c, 0x41, 0x69, 0x72, 0x63, 0x72, 0x61, 0x66, 0x74, 0x54, 0x79, 0x70,
	0x65, 0x12, 0x0e, 0x0a, 0x02, 0x69, 0x64, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x02, 0x69,
	0x64, 0x12, 0x1b, 0x0a, 0x09, 0x69, 0x63, 0x61, 0x6f, 0x5f, 0x63, 0x6f, 0x64, 0x65, 0x18, 0x02,
	0x20, 0x01, 0x28, 0x09, 0x52, 0x08, 0x69, 0x63, 0x61, 0x6f, 0x43, 0x6f, 0x64, 0x65, 0x12, 0x1b,
	0x0a, 0x09, 0x69, 0x61, 0x74, 0x61, 0x5f, 0x63, 0x6f, 0x64, 0x65, 0x18, 0x03, 0x20, 0x01, 0x28,
	0x09, 0x52, 0x08, 0x69, 0x61, 0x74, 0x61, 0x43, 0x6f, 0x64, 0x65, 0x12, 0x12, 0x0a, 0x04, 0x6e,
	0x61, 0x6d, 0x65, 0x18, 0x04, 0x20, 0x01, 0x28, 0x09, 0x52, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x22,
	0xab, 0x01, 0x0a, 0x0d, 0x41, 0x69, 0x72, 0x63, 0x72, 0x61, 0x66, 0x74, 0x4d, 0x6f, 0x64, 0x65,
	0x6c, 0x12, 0x0e, 0x0a, 0x02, 0x69, 0x64, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x02, 0x69,
	0x64, 0x12, 0x42, 0x0a, 0x0d, 0x61, 0x69, 0x72, 0x63, 0x72, 0x61, 0x66, 0x74, 0x5f, 0x74, 0x79,
	0x70, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1d, 0x2e, 0x76, 0x61, 0x73, 0x79, 0x73,
	0x74, 0x65, 0x6d, 0x2e, 0x61, 0x70, 0x69, 0x2e, 0x76, 0x32, 0x2e, 0x41, 0x69, 0x72, 0x63, 0x72,
	0x61, 0x66, 0x74, 0x54, 0x79, 0x70, 0x65, 0x52, 0x0c, 0x61, 0x69, 0x72, 0x63, 0x72, 0x61, 0x66,
	0x74, 0x54, 0x79, 0x70, 0x65, 0x12, 0x32, 0x0a, 0x07, 0x61, 0x69, 0x72, 0x6c, 0x69, 0x6e, 0x65,
	0x18, 0x03, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x18, 0x2e, 0x76, 0x61, 0x73, 0x79, 0x73, 0x74, 0x65,
	0x6d, 0x2e, 0x61, 0x70, 0x69, 0x2e, 0x76, 0x32, 0x2e, 0x41, 0x69, 0x72, 0x6c, 0x69, 0x6e, 0x65,
	0x52, 0x07, 0x61, 0x69, 0x72, 0x6c, 0x69, 0x6e, 0x65, 0x12, 0x12, 0x0a, 0x04, 0x6e, 0x61, 0x6d,
	0x65, 0x18, 0x04, 0x20, 0x01, 0x28, 0x09, 0x52, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x42, 0xb9, 0x01,
	0x0a, 0x13, 0x64, 0x65, 0x76, 0x2e, 0x76, 0x61, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x2e, 0x61,
	0x70, 0x69, 0x2e, 0x76, 0x32, 0x42, 0x0d, 0x41, 0x69, 0x72, 0x63, 0x72, 0x61, 0x66, 0x74, 0x50,
	0x72, 0x6f, 0x74, 0x6f, 0x50, 0x01, 0x5a, 0x35, 0x67, 0x69, 0x74, 0x68, 0x75, 0x62, 0x2e, 0x63,
	0x6f, 0x6d, 0x2f, 0x76, 0x61, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x2f, 0x61, 0x70, 0x69, 0x2f,
	0x67, 0x72, 0x70, 0x63, 0x2f, 0x67, 0x6f, 0x2f, 0x76, 0x61, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d,
	0x2f, 0x61, 0x70, 0x69, 0x2f, 0x76, 0x32, 0x3b, 0x61, 0x70, 0x69, 0x76, 0x32, 0xa2, 0x02, 0x03,
	0x56, 0x41, 0x58, 0xaa, 0x02, 0x0f, 0x56, 0x61, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x2e, 0x41,
	0x70, 0x69, 0x2e, 0x56, 0x32, 0xca, 0x02, 0x0f, 0x56, 0x61, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d,
	0x5c, 0x41, 0x70, 0x69, 0x5c, 0x56, 0x32, 0xe2, 0x02, 0x1b, 0x56, 0x61, 0x73, 0x79, 0x73, 0x74,
	0x65, 0x6d, 0x5c, 0x41, 0x70, 0x69, 0x5c, 0x56, 0x32, 0x5c, 0x47, 0x50, 0x42, 0x4d, 0x65, 0x74,
	0x61, 0x64, 0x61, 0x74, 0x61, 0xea, 0x02, 0x11, 0x56, 0x61, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d,
	0x3a, 0x3a, 0x41, 0x70, 0x69, 0x3a, 0x3a, 0x56, 0x32, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f,
	0x33,
}

var (
	file_vasystem_api_v2_aircraft_proto_rawDescOnce sync.Once
	file_vasystem_api_v2_aircraft_proto_rawDescData = file_vasystem_api_v2_aircraft_proto_rawDesc
)

func file_vasystem_api_v2_aircraft_proto_rawDescGZIP() []byte {
	file_vasystem_api_v2_aircraft_proto_rawDescOnce.Do(func() {
		file_vasystem_api_v2_aircraft_proto_rawDescData = protoimpl.X.CompressGZIP(file_vasystem_api_v2_aircraft_proto_rawDescData)
	})
	return file_vasystem_api_v2_aircraft_proto_rawDescData
}

var file_vasystem_api_v2_aircraft_proto_msgTypes = make([]protoimpl.MessageInfo, 2)
var file_vasystem_api_v2_aircraft_proto_goTypes = []interface{}{
	(*AircraftType)(nil),  // 0: vasystem.api.v2.AircraftType
	(*AircraftModel)(nil), // 1: vasystem.api.v2.AircraftModel
	(*Airline)(nil),       // 2: vasystem.api.v2.Airline
}
var file_vasystem_api_v2_aircraft_proto_depIdxs = []int32{
	0, // 0: vasystem.api.v2.AircraftModel.aircraft_type:type_name -> vasystem.api.v2.AircraftType
	2, // 1: vasystem.api.v2.AircraftModel.airline:type_name -> vasystem.api.v2.Airline
	2, // [2:2] is the sub-list for method output_type
	2, // [2:2] is the sub-list for method input_type
	2, // [2:2] is the sub-list for extension type_name
	2, // [2:2] is the sub-list for extension extendee
	0, // [0:2] is the sub-list for field type_name
}

func init() { file_vasystem_api_v2_aircraft_proto_init() }
func file_vasystem_api_v2_aircraft_proto_init() {
	if File_vasystem_api_v2_aircraft_proto != nil {
		return
	}
	file_vasystem_api_v2_airlines_proto_init()
	if !protoimpl.UnsafeEnabled {
		file_vasystem_api_v2_aircraft_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*AircraftType); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_vasystem_api_v2_aircraft_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*AircraftModel); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_vasystem_api_v2_aircraft_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   2,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_vasystem_api_v2_aircraft_proto_goTypes,
		DependencyIndexes: file_vasystem_api_v2_aircraft_proto_depIdxs,
		MessageInfos:      file_vasystem_api_v2_aircraft_proto_msgTypes,
	}.Build()
	File_vasystem_api_v2_aircraft_proto = out.File
	file_vasystem_api_v2_aircraft_proto_rawDesc = nil
	file_vasystem_api_v2_aircraft_proto_goTypes = nil
	file_vasystem_api_v2_aircraft_proto_depIdxs = nil
}
