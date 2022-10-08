// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.28.1
// 	protoc        (unknown)
// source: vasystem/api/v2/virtual_airlines.proto

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

type GetVirtualAirlineRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields
}

func (x *GetVirtualAirlineRequest) Reset() {
	*x = GetVirtualAirlineRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vasystem_api_v2_virtual_airlines_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *GetVirtualAirlineRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*GetVirtualAirlineRequest) ProtoMessage() {}

func (x *GetVirtualAirlineRequest) ProtoReflect() protoreflect.Message {
	mi := &file_vasystem_api_v2_virtual_airlines_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use GetVirtualAirlineRequest.ProtoReflect.Descriptor instead.
func (*GetVirtualAirlineRequest) Descriptor() ([]byte, []int) {
	return file_vasystem_api_v2_virtual_airlines_proto_rawDescGZIP(), []int{0}
}

type GetVirtualAirlineResponse struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	VirtualAirline *VirtualAirline `protobuf:"bytes,1,opt,name=virtual_airline,json=virtualAirline,proto3" json:"virtual_airline,omitempty"`
}

func (x *GetVirtualAirlineResponse) Reset() {
	*x = GetVirtualAirlineResponse{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vasystem_api_v2_virtual_airlines_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *GetVirtualAirlineResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*GetVirtualAirlineResponse) ProtoMessage() {}

func (x *GetVirtualAirlineResponse) ProtoReflect() protoreflect.Message {
	mi := &file_vasystem_api_v2_virtual_airlines_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use GetVirtualAirlineResponse.ProtoReflect.Descriptor instead.
func (*GetVirtualAirlineResponse) Descriptor() ([]byte, []int) {
	return file_vasystem_api_v2_virtual_airlines_proto_rawDescGZIP(), []int{1}
}

func (x *GetVirtualAirlineResponse) GetVirtualAirline() *VirtualAirline {
	if x != nil {
		return x.VirtualAirline
	}
	return nil
}

type VirtualAirline struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// The name of the virtual airline.
	Name string `protobuf:"bytes,1,opt,name=name,proto3" json:"name,omitempty"`
	Url  string `protobuf:"bytes,2,opt,name=url,proto3" json:"url,omitempty"`
}

func (x *VirtualAirline) Reset() {
	*x = VirtualAirline{}
	if protoimpl.UnsafeEnabled {
		mi := &file_vasystem_api_v2_virtual_airlines_proto_msgTypes[2]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *VirtualAirline) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*VirtualAirline) ProtoMessage() {}

func (x *VirtualAirline) ProtoReflect() protoreflect.Message {
	mi := &file_vasystem_api_v2_virtual_airlines_proto_msgTypes[2]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use VirtualAirline.ProtoReflect.Descriptor instead.
func (*VirtualAirline) Descriptor() ([]byte, []int) {
	return file_vasystem_api_v2_virtual_airlines_proto_rawDescGZIP(), []int{2}
}

func (x *VirtualAirline) GetName() string {
	if x != nil {
		return x.Name
	}
	return ""
}

func (x *VirtualAirline) GetUrl() string {
	if x != nil {
		return x.Url
	}
	return ""
}

var File_vasystem_api_v2_virtual_airlines_proto protoreflect.FileDescriptor

var file_vasystem_api_v2_virtual_airlines_proto_rawDesc = []byte{
	0x0a, 0x26, 0x76, 0x61, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x2f, 0x61, 0x70, 0x69, 0x2f, 0x76,
	0x32, 0x2f, 0x76, 0x69, 0x72, 0x74, 0x75, 0x61, 0x6c, 0x5f, 0x61, 0x69, 0x72, 0x6c, 0x69, 0x6e,
	0x65, 0x73, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12, 0x0f, 0x76, 0x61, 0x73, 0x79, 0x73, 0x74,
	0x65, 0x6d, 0x2e, 0x61, 0x70, 0x69, 0x2e, 0x76, 0x32, 0x22, 0x1a, 0x0a, 0x18, 0x47, 0x65, 0x74,
	0x56, 0x69, 0x72, 0x74, 0x75, 0x61, 0x6c, 0x41, 0x69, 0x72, 0x6c, 0x69, 0x6e, 0x65, 0x52, 0x65,
	0x71, 0x75, 0x65, 0x73, 0x74, 0x22, 0x65, 0x0a, 0x19, 0x47, 0x65, 0x74, 0x56, 0x69, 0x72, 0x74,
	0x75, 0x61, 0x6c, 0x41, 0x69, 0x72, 0x6c, 0x69, 0x6e, 0x65, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e,
	0x73, 0x65, 0x12, 0x48, 0x0a, 0x0f, 0x76, 0x69, 0x72, 0x74, 0x75, 0x61, 0x6c, 0x5f, 0x61, 0x69,
	0x72, 0x6c, 0x69, 0x6e, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1f, 0x2e, 0x76, 0x61,
	0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x2e, 0x61, 0x70, 0x69, 0x2e, 0x76, 0x32, 0x2e, 0x56, 0x69,
	0x72, 0x74, 0x75, 0x61, 0x6c, 0x41, 0x69, 0x72, 0x6c, 0x69, 0x6e, 0x65, 0x52, 0x0e, 0x76, 0x69,
	0x72, 0x74, 0x75, 0x61, 0x6c, 0x41, 0x69, 0x72, 0x6c, 0x69, 0x6e, 0x65, 0x22, 0x36, 0x0a, 0x0e,
	0x56, 0x69, 0x72, 0x74, 0x75, 0x61, 0x6c, 0x41, 0x69, 0x72, 0x6c, 0x69, 0x6e, 0x65, 0x12, 0x12,
	0x0a, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x04, 0x6e, 0x61,
	0x6d, 0x65, 0x12, 0x10, 0x0a, 0x03, 0x75, 0x72, 0x6c, 0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x52,
	0x03, 0x75, 0x72, 0x6c, 0x32, 0x86, 0x01, 0x0a, 0x16, 0x56, 0x69, 0x72, 0x74, 0x75, 0x61, 0x6c,
	0x41, 0x69, 0x72, 0x6c, 0x69, 0x6e, 0x65, 0x73, 0x53, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x12,
	0x6c, 0x0a, 0x11, 0x47, 0x65, 0x74, 0x56, 0x69, 0x72, 0x74, 0x75, 0x61, 0x6c, 0x41, 0x69, 0x72,
	0x6c, 0x69, 0x6e, 0x65, 0x12, 0x29, 0x2e, 0x76, 0x61, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x2e,
	0x61, 0x70, 0x69, 0x2e, 0x76, 0x32, 0x2e, 0x47, 0x65, 0x74, 0x56, 0x69, 0x72, 0x74, 0x75, 0x61,
	0x6c, 0x41, 0x69, 0x72, 0x6c, 0x69, 0x6e, 0x65, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x1a,
	0x2a, 0x2e, 0x76, 0x61, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x2e, 0x61, 0x70, 0x69, 0x2e, 0x76,
	0x32, 0x2e, 0x47, 0x65, 0x74, 0x56, 0x69, 0x72, 0x74, 0x75, 0x61, 0x6c, 0x41, 0x69, 0x72, 0x6c,
	0x69, 0x6e, 0x65, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x22, 0x00, 0x42, 0xc0, 0x01,
	0x0a, 0x13, 0x64, 0x65, 0x76, 0x2e, 0x76, 0x61, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x2e, 0x61,
	0x70, 0x69, 0x2e, 0x76, 0x32, 0x42, 0x14, 0x56, 0x69, 0x72, 0x74, 0x75, 0x61, 0x6c, 0x41, 0x69,
	0x72, 0x6c, 0x69, 0x6e, 0x65, 0x73, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x50, 0x01, 0x5a, 0x35, 0x67,
	0x69, 0x74, 0x68, 0x75, 0x62, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x76, 0x61, 0x73, 0x79, 0x73, 0x74,
	0x65, 0x6d, 0x2f, 0x61, 0x70, 0x69, 0x2f, 0x67, 0x72, 0x70, 0x63, 0x2f, 0x67, 0x6f, 0x2f, 0x76,
	0x61, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x2f, 0x61, 0x70, 0x69, 0x2f, 0x76, 0x32, 0x3b, 0x61,
	0x70, 0x69, 0x76, 0x32, 0xa2, 0x02, 0x03, 0x56, 0x41, 0x58, 0xaa, 0x02, 0x0f, 0x56, 0x61, 0x73,
	0x79, 0x73, 0x74, 0x65, 0x6d, 0x2e, 0x41, 0x70, 0x69, 0x2e, 0x56, 0x32, 0xca, 0x02, 0x0f, 0x56,
	0x61, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x5c, 0x41, 0x70, 0x69, 0x5c, 0x56, 0x32, 0xe2, 0x02,
	0x1b, 0x56, 0x61, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x5c, 0x41, 0x70, 0x69, 0x5c, 0x56, 0x32,
	0x5c, 0x47, 0x50, 0x42, 0x4d, 0x65, 0x74, 0x61, 0x64, 0x61, 0x74, 0x61, 0xea, 0x02, 0x11, 0x56,
	0x61, 0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x3a, 0x3a, 0x41, 0x70, 0x69, 0x3a, 0x3a, 0x56, 0x32,
	0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_vasystem_api_v2_virtual_airlines_proto_rawDescOnce sync.Once
	file_vasystem_api_v2_virtual_airlines_proto_rawDescData = file_vasystem_api_v2_virtual_airlines_proto_rawDesc
)

func file_vasystem_api_v2_virtual_airlines_proto_rawDescGZIP() []byte {
	file_vasystem_api_v2_virtual_airlines_proto_rawDescOnce.Do(func() {
		file_vasystem_api_v2_virtual_airlines_proto_rawDescData = protoimpl.X.CompressGZIP(file_vasystem_api_v2_virtual_airlines_proto_rawDescData)
	})
	return file_vasystem_api_v2_virtual_airlines_proto_rawDescData
}

var file_vasystem_api_v2_virtual_airlines_proto_msgTypes = make([]protoimpl.MessageInfo, 3)
var file_vasystem_api_v2_virtual_airlines_proto_goTypes = []interface{}{
	(*GetVirtualAirlineRequest)(nil),  // 0: vasystem.api.v2.GetVirtualAirlineRequest
	(*GetVirtualAirlineResponse)(nil), // 1: vasystem.api.v2.GetVirtualAirlineResponse
	(*VirtualAirline)(nil),            // 2: vasystem.api.v2.VirtualAirline
}
var file_vasystem_api_v2_virtual_airlines_proto_depIdxs = []int32{
	2, // 0: vasystem.api.v2.GetVirtualAirlineResponse.virtual_airline:type_name -> vasystem.api.v2.VirtualAirline
	0, // 1: vasystem.api.v2.VirtualAirlinesService.GetVirtualAirline:input_type -> vasystem.api.v2.GetVirtualAirlineRequest
	1, // 2: vasystem.api.v2.VirtualAirlinesService.GetVirtualAirline:output_type -> vasystem.api.v2.GetVirtualAirlineResponse
	2, // [2:3] is the sub-list for method output_type
	1, // [1:2] is the sub-list for method input_type
	1, // [1:1] is the sub-list for extension type_name
	1, // [1:1] is the sub-list for extension extendee
	0, // [0:1] is the sub-list for field type_name
}

func init() { file_vasystem_api_v2_virtual_airlines_proto_init() }
func file_vasystem_api_v2_virtual_airlines_proto_init() {
	if File_vasystem_api_v2_virtual_airlines_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_vasystem_api_v2_virtual_airlines_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*GetVirtualAirlineRequest); i {
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
		file_vasystem_api_v2_virtual_airlines_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*GetVirtualAirlineResponse); i {
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
		file_vasystem_api_v2_virtual_airlines_proto_msgTypes[2].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*VirtualAirline); i {
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
			RawDescriptor: file_vasystem_api_v2_virtual_airlines_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   3,
			NumExtensions: 0,
			NumServices:   1,
		},
		GoTypes:           file_vasystem_api_v2_virtual_airlines_proto_goTypes,
		DependencyIndexes: file_vasystem_api_v2_virtual_airlines_proto_depIdxs,
		MessageInfos:      file_vasystem_api_v2_virtual_airlines_proto_msgTypes,
	}.Build()
	File_vasystem_api_v2_virtual_airlines_proto = out.File
	file_vasystem_api_v2_virtual_airlines_proto_rawDesc = nil
	file_vasystem_api_v2_virtual_airlines_proto_goTypes = nil
	file_vasystem_api_v2_virtual_airlines_proto_depIdxs = nil
}
