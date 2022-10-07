// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: vasystem/api/v2/aircraft.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace Vasystem.Api.V2 {

  /// <summary>Holder for reflection information generated from vasystem/api/v2/aircraft.proto</summary>
  public static partial class AircraftReflection {

    #region Descriptor
    /// <summary>File descriptor for vasystem/api/v2/aircraft.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static AircraftReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Ch52YXN5c3RlbS9hcGkvdjIvYWlyY3JhZnQucHJvdG8SD3Zhc3lzdGVtLmFw",
            "aS52MhoedmFzeXN0ZW0vYXBpL3YyL2FpcmxpbmVzLnByb3RvImwKDEFpcmNy",
            "YWZ0VHlwZRIOCgJpZBgBIAEoCVICaWQSGwoJaWNhb19jb2RlGAIgASgJUghp",
            "Y2FvQ29kZRIbCglpYXRhX2NvZGUYAyABKAlSCGlhdGFDb2RlEhIKBG5hbWUY",
            "BCABKAlSBG5hbWUiqwEKDUFpcmNyYWZ0TW9kZWwSDgoCaWQYASABKAlSAmlk",
            "EkIKDWFpcmNyYWZ0X3R5cGUYAiABKAsyHS52YXN5c3RlbS5hcGkudjIuQWly",
            "Y3JhZnRUeXBlUgxhaXJjcmFmdFR5cGUSMgoHYWlybGluZRgDIAEoCzIYLnZh",
            "c3lzdGVtLmFwaS52Mi5BaXJsaW5lUgdhaXJsaW5lEhIKBG5hbWUYBCABKAlS",
            "BG5hbWVCuQEKE2Rldi52YXN5c3RlbS5hcGkudjJCDUFpcmNyYWZ0UHJvdG9Q",
            "AVo1Z2l0aHViLmNvbS92YXN5c3RlbS9hcGkvZ3JwYy9nby92YXN5c3RlbS9h",
            "cGkvdjI7YXBpdjKiAgNWQViqAg9WYXN5c3RlbS5BcGkuVjLKAg9WYXN5c3Rl",
            "bVxBcGlcVjLiAhtWYXN5c3RlbVxBcGlcVjJcR1BCTWV0YWRhdGHqAhFWYXN5",
            "c3RlbTo6QXBpOjpWMmIGcHJvdG8z"));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { global::Vasystem.Api.V2.AirlinesReflection.Descriptor, },
          new pbr::GeneratedClrTypeInfo(null, null, new pbr::GeneratedClrTypeInfo[] {
            new pbr::GeneratedClrTypeInfo(typeof(global::Vasystem.Api.V2.AircraftType), global::Vasystem.Api.V2.AircraftType.Parser, new[]{ "Id", "IcaoCode", "IataCode", "Name" }, null, null, null, null),
            new pbr::GeneratedClrTypeInfo(typeof(global::Vasystem.Api.V2.AircraftModel), global::Vasystem.Api.V2.AircraftModel.Parser, new[]{ "Id", "AircraftType", "Airline", "Name" }, null, null, null, null)
          }));
    }
    #endregion

  }
  #region Messages
  public sealed partial class AircraftType : pb::IMessage<AircraftType>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<AircraftType> _parser = new pb::MessageParser<AircraftType>(() => new AircraftType());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<AircraftType> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Vasystem.Api.V2.AircraftReflection.Descriptor.MessageTypes[0]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public AircraftType() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public AircraftType(AircraftType other) : this() {
      id_ = other.id_;
      icaoCode_ = other.icaoCode_;
      iataCode_ = other.iataCode_;
      name_ = other.name_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public AircraftType Clone() {
      return new AircraftType(this);
    }

    /// <summary>Field number for the "id" field.</summary>
    public const int IdFieldNumber = 1;
    private string id_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string Id {
      get { return id_; }
      set {
        id_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "icao_code" field.</summary>
    public const int IcaoCodeFieldNumber = 2;
    private string icaoCode_ = "";
    /// <summary>
    /// The ICAO aircraft type code.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string IcaoCode {
      get { return icaoCode_; }
      set {
        icaoCode_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "iata_code" field.</summary>
    public const int IataCodeFieldNumber = 3;
    private string iataCode_ = "";
    /// <summary>
    /// The IATA aircraft type code.
    /// </summary>
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string IataCode {
      get { return iataCode_; }
      set {
        iataCode_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "name" field.</summary>
    public const int NameFieldNumber = 4;
    private string name_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string Name {
      get { return name_; }
      set {
        name_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override bool Equals(object other) {
      return Equals(other as AircraftType);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(AircraftType other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Id != other.Id) return false;
      if (IcaoCode != other.IcaoCode) return false;
      if (IataCode != other.IataCode) return false;
      if (Name != other.Name) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      if (Id.Length != 0) hash ^= Id.GetHashCode();
      if (IcaoCode.Length != 0) hash ^= IcaoCode.GetHashCode();
      if (IataCode.Length != 0) hash ^= IataCode.GetHashCode();
      if (Name.Length != 0) hash ^= Name.GetHashCode();
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void WriteTo(pb::CodedOutputStream output) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      output.WriteRawMessage(this);
    #else
      if (Id.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Id);
      }
      if (IcaoCode.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(IcaoCode);
      }
      if (IataCode.Length != 0) {
        output.WriteRawTag(26);
        output.WriteString(IataCode);
      }
      if (Name.Length != 0) {
        output.WriteRawTag(34);
        output.WriteString(Name);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (Id.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Id);
      }
      if (IcaoCode.Length != 0) {
        output.WriteRawTag(18);
        output.WriteString(IcaoCode);
      }
      if (IataCode.Length != 0) {
        output.WriteRawTag(26);
        output.WriteString(IataCode);
      }
      if (Name.Length != 0) {
        output.WriteRawTag(34);
        output.WriteString(Name);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public int CalculateSize() {
      int size = 0;
      if (Id.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Id);
      }
      if (IcaoCode.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(IcaoCode);
      }
      if (IataCode.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(IataCode);
      }
      if (Name.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Name);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(AircraftType other) {
      if (other == null) {
        return;
      }
      if (other.Id.Length != 0) {
        Id = other.Id;
      }
      if (other.IcaoCode.Length != 0) {
        IcaoCode = other.IcaoCode;
      }
      if (other.IataCode.Length != 0) {
        IataCode = other.IataCode;
      }
      if (other.Name.Length != 0) {
        Name = other.Name;
      }
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(pb::CodedInputStream input) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      input.ReadRawMessage(this);
    #else
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 10: {
            Id = input.ReadString();
            break;
          }
          case 18: {
            IcaoCode = input.ReadString();
            break;
          }
          case 26: {
            IataCode = input.ReadString();
            break;
          }
          case 34: {
            Name = input.ReadString();
            break;
          }
        }
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
            break;
          case 10: {
            Id = input.ReadString();
            break;
          }
          case 18: {
            IcaoCode = input.ReadString();
            break;
          }
          case 26: {
            IataCode = input.ReadString();
            break;
          }
          case 34: {
            Name = input.ReadString();
            break;
          }
        }
      }
    }
    #endif

  }

  public sealed partial class AircraftModel : pb::IMessage<AircraftModel>
  #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      , pb::IBufferMessage
  #endif
  {
    private static readonly pb::MessageParser<AircraftModel> _parser = new pb::MessageParser<AircraftModel>(() => new AircraftModel());
    private pb::UnknownFieldSet _unknownFields;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pb::MessageParser<AircraftModel> Parser { get { return _parser; } }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public static pbr::MessageDescriptor Descriptor {
      get { return global::Vasystem.Api.V2.AircraftReflection.Descriptor.MessageTypes[1]; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    pbr::MessageDescriptor pb::IMessage.Descriptor {
      get { return Descriptor; }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public AircraftModel() {
      OnConstruction();
    }

    partial void OnConstruction();

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public AircraftModel(AircraftModel other) : this() {
      id_ = other.id_;
      aircraftType_ = other.aircraftType_ != null ? other.aircraftType_.Clone() : null;
      airline_ = other.airline_ != null ? other.airline_.Clone() : null;
      name_ = other.name_;
      _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public AircraftModel Clone() {
      return new AircraftModel(this);
    }

    /// <summary>Field number for the "id" field.</summary>
    public const int IdFieldNumber = 1;
    private string id_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string Id {
      get { return id_; }
      set {
        id_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    /// <summary>Field number for the "aircraft_type" field.</summary>
    public const int AircraftTypeFieldNumber = 2;
    private global::Vasystem.Api.V2.AircraftType aircraftType_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Vasystem.Api.V2.AircraftType AircraftType {
      get { return aircraftType_; }
      set {
        aircraftType_ = value;
      }
    }

    /// <summary>Field number for the "airline" field.</summary>
    public const int AirlineFieldNumber = 3;
    private global::Vasystem.Api.V2.Airline airline_;
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public global::Vasystem.Api.V2.Airline Airline {
      get { return airline_; }
      set {
        airline_ = value;
      }
    }

    /// <summary>Field number for the "name" field.</summary>
    public const int NameFieldNumber = 4;
    private string name_ = "";
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public string Name {
      get { return name_; }
      set {
        name_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
      }
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override bool Equals(object other) {
      return Equals(other as AircraftModel);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public bool Equals(AircraftModel other) {
      if (ReferenceEquals(other, null)) {
        return false;
      }
      if (ReferenceEquals(other, this)) {
        return true;
      }
      if (Id != other.Id) return false;
      if (!object.Equals(AircraftType, other.AircraftType)) return false;
      if (!object.Equals(Airline, other.Airline)) return false;
      if (Name != other.Name) return false;
      return Equals(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override int GetHashCode() {
      int hash = 1;
      if (Id.Length != 0) hash ^= Id.GetHashCode();
      if (aircraftType_ != null) hash ^= AircraftType.GetHashCode();
      if (airline_ != null) hash ^= Airline.GetHashCode();
      if (Name.Length != 0) hash ^= Name.GetHashCode();
      if (_unknownFields != null) {
        hash ^= _unknownFields.GetHashCode();
      }
      return hash;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public override string ToString() {
      return pb::JsonFormatter.ToDiagnosticString(this);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void WriteTo(pb::CodedOutputStream output) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      output.WriteRawMessage(this);
    #else
      if (Id.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Id);
      }
      if (aircraftType_ != null) {
        output.WriteRawTag(18);
        output.WriteMessage(AircraftType);
      }
      if (airline_ != null) {
        output.WriteRawTag(26);
        output.WriteMessage(Airline);
      }
      if (Name.Length != 0) {
        output.WriteRawTag(34);
        output.WriteString(Name);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(output);
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    void pb::IBufferMessage.InternalWriteTo(ref pb::WriteContext output) {
      if (Id.Length != 0) {
        output.WriteRawTag(10);
        output.WriteString(Id);
      }
      if (aircraftType_ != null) {
        output.WriteRawTag(18);
        output.WriteMessage(AircraftType);
      }
      if (airline_ != null) {
        output.WriteRawTag(26);
        output.WriteMessage(Airline);
      }
      if (Name.Length != 0) {
        output.WriteRawTag(34);
        output.WriteString(Name);
      }
      if (_unknownFields != null) {
        _unknownFields.WriteTo(ref output);
      }
    }
    #endif

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public int CalculateSize() {
      int size = 0;
      if (Id.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Id);
      }
      if (aircraftType_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(AircraftType);
      }
      if (airline_ != null) {
        size += 1 + pb::CodedOutputStream.ComputeMessageSize(Airline);
      }
      if (Name.Length != 0) {
        size += 1 + pb::CodedOutputStream.ComputeStringSize(Name);
      }
      if (_unknownFields != null) {
        size += _unknownFields.CalculateSize();
      }
      return size;
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(AircraftModel other) {
      if (other == null) {
        return;
      }
      if (other.Id.Length != 0) {
        Id = other.Id;
      }
      if (other.aircraftType_ != null) {
        if (aircraftType_ == null) {
          AircraftType = new global::Vasystem.Api.V2.AircraftType();
        }
        AircraftType.MergeFrom(other.AircraftType);
      }
      if (other.airline_ != null) {
        if (airline_ == null) {
          Airline = new global::Vasystem.Api.V2.Airline();
        }
        Airline.MergeFrom(other.Airline);
      }
      if (other.Name.Length != 0) {
        Name = other.Name;
      }
      _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
    }

    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    public void MergeFrom(pb::CodedInputStream input) {
    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
      input.ReadRawMessage(this);
    #else
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
            break;
          case 10: {
            Id = input.ReadString();
            break;
          }
          case 18: {
            if (aircraftType_ == null) {
              AircraftType = new global::Vasystem.Api.V2.AircraftType();
            }
            input.ReadMessage(AircraftType);
            break;
          }
          case 26: {
            if (airline_ == null) {
              Airline = new global::Vasystem.Api.V2.Airline();
            }
            input.ReadMessage(Airline);
            break;
          }
          case 34: {
            Name = input.ReadString();
            break;
          }
        }
      }
    #endif
    }

    #if !GOOGLE_PROTOBUF_REFSTRUCT_COMPATIBILITY_MODE
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute]
    [global::System.CodeDom.Compiler.GeneratedCode("protoc", null)]
    void pb::IBufferMessage.InternalMergeFrom(ref pb::ParseContext input) {
      uint tag;
      while ((tag = input.ReadTag()) != 0) {
        switch(tag) {
          default:
            _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, ref input);
            break;
          case 10: {
            Id = input.ReadString();
            break;
          }
          case 18: {
            if (aircraftType_ == null) {
              AircraftType = new global::Vasystem.Api.V2.AircraftType();
            }
            input.ReadMessage(AircraftType);
            break;
          }
          case 26: {
            if (airline_ == null) {
              Airline = new global::Vasystem.Api.V2.Airline();
            }
            input.ReadMessage(Airline);
            break;
          }
          case 34: {
            Name = input.ReadString();
            break;
          }
        }
      }
    }
    #endif

  }

  #endregion

}

#endregion Designer generated code
