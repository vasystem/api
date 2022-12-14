// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vasystem/api/v2/virtual_airlines.proto

package dev.vasystem.api.v2;

public interface VirtualAirlineOrBuilder extends
    // @@protoc_insertion_point(interface_extends:vasystem.api.v2.VirtualAirline)
    com.google.protobuf.MessageOrBuilder {

  /**
   * <pre>
   * The name of the virtual airline.
   * Example: `Star Alliance Virtual`
   * </pre>
   *
   * <code>string name = 1 [json_name = "name"];</code>
   * @return The name.
   */
  java.lang.String getName();
  /**
   * <pre>
   * The name of the virtual airline.
   * Example: `Star Alliance Virtual`
   * </pre>
   *
   * <code>string name = 1 [json_name = "name"];</code>
   * @return The bytes for name.
   */
  com.google.protobuf.ByteString
      getNameBytes();

  /**
   * <pre>
   * The main website URL of the virtual airline.
   * Example: `https://staralliancevirtual.org`
   * </pre>
   *
   * <code>string url = 2 [json_name = "url"];</code>
   * @return The url.
   */
  java.lang.String getUrl();
  /**
   * <pre>
   * The main website URL of the virtual airline.
   * Example: `https://staralliancevirtual.org`
   * </pre>
   *
   * <code>string url = 2 [json_name = "url"];</code>
   * @return The bytes for url.
   */
  com.google.protobuf.ByteString
      getUrlBytes();
}
