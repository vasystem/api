// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vasystem/api/v2/routes.proto

package dev.vasystem.api.v2;

public interface ListRoutesRequestOrBuilder extends
    // @@protoc_insertion_point(interface_extends:vasystem.api.v2.ListRoutesRequest)
    com.google.protobuf.MessageOrBuilder {

  /**
   * <pre>
   * Filter by airline.
   * Example: `01gevxx0g090m0a78xmvhtfre4`
   * </pre>
   *
   * <code>string airline_id = 1 [json_name = "airlineId"];</code>
   * @return The airlineId.
   */
  java.lang.String getAirlineId();
  /**
   * <pre>
   * Filter by airline.
   * Example: `01gevxx0g090m0a78xmvhtfre4`
   * </pre>
   *
   * <code>string airline_id = 1 [json_name = "airlineId"];</code>
   * @return The bytes for airlineId.
   */
  com.google.protobuf.ByteString
      getAirlineIdBytes();

  /**
   * <pre>
   * Filter by departure airport.
   * Example: `KJFK`
   * </pre>
   *
   * <code>string departure_icao = 2 [json_name = "departureIcao"];</code>
   * @return The departureIcao.
   */
  java.lang.String getDepartureIcao();
  /**
   * <pre>
   * Filter by departure airport.
   * Example: `KJFK`
   * </pre>
   *
   * <code>string departure_icao = 2 [json_name = "departureIcao"];</code>
   * @return The bytes for departureIcao.
   */
  com.google.protobuf.ByteString
      getDepartureIcaoBytes();

  /**
   * <pre>
   * Filter by arrival airport.
   * Example: `YSSY`
   * </pre>
   *
   * <code>string arrival_icao = 3 [json_name = "arrivalIcao"];</code>
   * @return The arrivalIcao.
   */
  java.lang.String getArrivalIcao();
  /**
   * <pre>
   * Filter by arrival airport.
   * Example: `YSSY`
   * </pre>
   *
   * <code>string arrival_icao = 3 [json_name = "arrivalIcao"];</code>
   * @return The bytes for arrivalIcao.
   */
  com.google.protobuf.ByteString
      getArrivalIcaoBytes();

  /**
   * <pre>
   * Filter by the flight number. This does not include the airline code.
   * Example: `1234`
   * </pre>
   *
   * <code>string icao_flight_number = 4 [json_name = "icaoFlightNumber"];</code>
   * @return The icaoFlightNumber.
   */
  java.lang.String getIcaoFlightNumber();
  /**
   * <pre>
   * Filter by the flight number. This does not include the airline code.
   * Example: `1234`
   * </pre>
   *
   * <code>string icao_flight_number = 4 [json_name = "icaoFlightNumber"];</code>
   * @return The bytes for icaoFlightNumber.
   */
  com.google.protobuf.ByteString
      getIcaoFlightNumberBytes();

  /**
   * <pre>
   * Whether to include archived routes. Defaults to false.
   * </pre>
   *
   * <code>bool include_archived = 5 [json_name = "includeArchived"];</code>
   * @return The includeArchived.
   */
  boolean getIncludeArchived();

  /**
   * <pre>
   * The maximum number of results to return. Defaults to 100. Maximum is 1000.
   * </pre>
   *
   * <code>uint64 page_size = 14 [json_name = "pageSize"];</code>
   * @return The pageSize.
   */
  long getPageSize();

  /**
   * <pre>
   * The next_page_token value returned from a previous List request, if any.
   * If used, all other parameters must match the call that provided the token.
   * </pre>
   *
   * <code>string page_token = 15 [json_name = "pageToken"];</code>
   * @return The pageToken.
   */
  java.lang.String getPageToken();
  /**
   * <pre>
   * The next_page_token value returned from a previous List request, if any.
   * If used, all other parameters must match the call that provided the token.
   * </pre>
   *
   * <code>string page_token = 15 [json_name = "pageToken"];</code>
   * @return The bytes for pageToken.
   */
  com.google.protobuf.ByteString
      getPageTokenBytes();
}
