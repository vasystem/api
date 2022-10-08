// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vasystem/api/v2/routes.proto

package dev.vasystem.api.v2;

public interface RouteOrBuilder extends
    // @@protoc_insertion_point(interface_extends:vasystem.api.v2.Route)
    com.google.protobuf.MessageOrBuilder {

  /**
   * <pre>
   * The unique identifier for the route.
   * </pre>
   *
   * <code>string id = 1 [json_name = "id"];</code>
   * @return The id.
   */
  java.lang.String getId();
  /**
   * <pre>
   * The unique identifier for the route.
   * </pre>
   *
   * <code>string id = 1 [json_name = "id"];</code>
   * @return The bytes for id.
   */
  com.google.protobuf.ByteString
      getIdBytes();

  /**
   * <pre>
   * The airline that operates this route.
   * </pre>
   *
   * <code>.vasystem.api.v2.Airline airline = 2 [json_name = "airline"];</code>
   * @return Whether the airline field is set.
   */
  boolean hasAirline();
  /**
   * <pre>
   * The airline that operates this route.
   * </pre>
   *
   * <code>.vasystem.api.v2.Airline airline = 2 [json_name = "airline"];</code>
   * @return The airline.
   */
  dev.vasystem.api.v2.Airline getAirline();
  /**
   * <pre>
   * The airline that operates this route.
   * </pre>
   *
   * <code>.vasystem.api.v2.Airline airline = 2 [json_name = "airline"];</code>
   */
  dev.vasystem.api.v2.AirlineOrBuilder getAirlineOrBuilder();

  /**
   * <pre>
   * This does not include the airline code.
   * Example: `1234`
   * </pre>
   *
   * <code>string icao_flight_number = 3 [json_name = "icaoFlightNumber"];</code>
   * @return The icaoFlightNumber.
   */
  java.lang.String getIcaoFlightNumber();
  /**
   * <pre>
   * This does not include the airline code.
   * Example: `1234`
   * </pre>
   *
   * <code>string icao_flight_number = 3 [json_name = "icaoFlightNumber"];</code>
   * @return The bytes for icaoFlightNumber.
   */
  com.google.protobuf.ByteString
      getIcaoFlightNumberBytes();

  /**
   * <pre>
   * The departure airport.
   * </pre>
   *
   * <code>.vasystem.api.v2.Airport departure = 5 [json_name = "departure"];</code>
   * @return Whether the departure field is set.
   */
  boolean hasDeparture();
  /**
   * <pre>
   * The departure airport.
   * </pre>
   *
   * <code>.vasystem.api.v2.Airport departure = 5 [json_name = "departure"];</code>
   * @return The departure.
   */
  dev.vasystem.api.v2.Airport getDeparture();
  /**
   * <pre>
   * The departure airport.
   * </pre>
   *
   * <code>.vasystem.api.v2.Airport departure = 5 [json_name = "departure"];</code>
   */
  dev.vasystem.api.v2.AirportOrBuilder getDepartureOrBuilder();

  /**
   * <pre>
   * The arrival airport.
   * </pre>
   *
   * <code>.vasystem.api.v2.Airport arrival = 6 [json_name = "arrival"];</code>
   * @return Whether the arrival field is set.
   */
  boolean hasArrival();
  /**
   * <pre>
   * The arrival airport.
   * </pre>
   *
   * <code>.vasystem.api.v2.Airport arrival = 6 [json_name = "arrival"];</code>
   * @return The arrival.
   */
  dev.vasystem.api.v2.Airport getArrival();
  /**
   * <pre>
   * The arrival airport.
   * </pre>
   *
   * <code>.vasystem.api.v2.Airport arrival = 6 [json_name = "arrival"];</code>
   */
  dev.vasystem.api.v2.AirportOrBuilder getArrivalOrBuilder();

  /**
   * <pre>
   * The departure time is in UTC.
   * </pre>
   *
   * <code>.vasystem.api.v2.TimeOfDay departure_time = 7 [json_name = "departureTime"];</code>
   * @return Whether the departureTime field is set.
   */
  boolean hasDepartureTime();
  /**
   * <pre>
   * The departure time is in UTC.
   * </pre>
   *
   * <code>.vasystem.api.v2.TimeOfDay departure_time = 7 [json_name = "departureTime"];</code>
   * @return The departureTime.
   */
  dev.vasystem.api.v2.TimeOfDay getDepartureTime();
  /**
   * <pre>
   * The departure time is in UTC.
   * </pre>
   *
   * <code>.vasystem.api.v2.TimeOfDay departure_time = 7 [json_name = "departureTime"];</code>
   */
  dev.vasystem.api.v2.TimeOfDayOrBuilder getDepartureTimeOrBuilder();

  /**
   * <pre>
   * The arrival time is in UTC.
   * </pre>
   *
   * <code>.vasystem.api.v2.TimeOfDay arrival_time = 8 [json_name = "arrivalTime"];</code>
   * @return Whether the arrivalTime field is set.
   */
  boolean hasArrivalTime();
  /**
   * <pre>
   * The arrival time is in UTC.
   * </pre>
   *
   * <code>.vasystem.api.v2.TimeOfDay arrival_time = 8 [json_name = "arrivalTime"];</code>
   * @return The arrivalTime.
   */
  dev.vasystem.api.v2.TimeOfDay getArrivalTime();
  /**
   * <pre>
   * The arrival time is in UTC.
   * </pre>
   *
   * <code>.vasystem.api.v2.TimeOfDay arrival_time = 8 [json_name = "arrivalTime"];</code>
   */
  dev.vasystem.api.v2.TimeOfDayOrBuilder getArrivalTimeOrBuilder();

  /**
   * <pre>
   * The duration of this flight. This field is purely provided for convenience and can also
   * be calculated from the departure and arrival times.
   * </pre>
   *
   * <code>.google.protobuf.Duration duration = 9 [json_name = "duration"];</code>
   * @return Whether the duration field is set.
   */
  boolean hasDuration();
  /**
   * <pre>
   * The duration of this flight. This field is purely provided for convenience and can also
   * be calculated from the departure and arrival times.
   * </pre>
   *
   * <code>.google.protobuf.Duration duration = 9 [json_name = "duration"];</code>
   * @return The duration.
   */
  com.google.protobuf.Duration getDuration();
  /**
   * <pre>
   * The duration of this flight. This field is purely provided for convenience and can also
   * be calculated from the departure and arrival times.
   * </pre>
   *
   * <code>.google.protobuf.Duration duration = 9 [json_name = "duration"];</code>
   */
  com.google.protobuf.DurationOrBuilder getDurationOrBuilder();

  /**
   * <pre>
   * The days of the week that this flight operates.
   * </pre>
   *
   * <code>repeated .vasystem.api.v2.DayOfWeek days_flown = 10 [json_name = "daysFlown"];</code>
   * @return A list containing the daysFlown.
   */
  java.util.List<dev.vasystem.api.v2.DayOfWeek> getDaysFlownList();
  /**
   * <pre>
   * The days of the week that this flight operates.
   * </pre>
   *
   * <code>repeated .vasystem.api.v2.DayOfWeek days_flown = 10 [json_name = "daysFlown"];</code>
   * @return The count of daysFlown.
   */
  int getDaysFlownCount();
  /**
   * <pre>
   * The days of the week that this flight operates.
   * </pre>
   *
   * <code>repeated .vasystem.api.v2.DayOfWeek days_flown = 10 [json_name = "daysFlown"];</code>
   * @param index The index of the element to return.
   * @return The daysFlown at the given index.
   */
  dev.vasystem.api.v2.DayOfWeek getDaysFlown(int index);
  /**
   * <pre>
   * The days of the week that this flight operates.
   * </pre>
   *
   * <code>repeated .vasystem.api.v2.DayOfWeek days_flown = 10 [json_name = "daysFlown"];</code>
   * @return A list containing the enum numeric values on the wire for daysFlown.
   */
  java.util.List<java.lang.Integer>
  getDaysFlownValueList();
  /**
   * <pre>
   * The days of the week that this flight operates.
   * </pre>
   *
   * <code>repeated .vasystem.api.v2.DayOfWeek days_flown = 10 [json_name = "daysFlown"];</code>
   * @param index The index of the value to return.
   * @return The enum numeric value on the wire of daysFlown at the given index.
   */
  int getDaysFlownValue(int index);

  /**
   * <pre>
   * The aircraft models that operate this route.
   * </pre>
   *
   * <code>repeated .vasystem.api.v2.AircraftModel aircraft_models = 11 [json_name = "aircraftModels"];</code>
   */
  java.util.List<dev.vasystem.api.v2.AircraftModel> 
      getAircraftModelsList();
  /**
   * <pre>
   * The aircraft models that operate this route.
   * </pre>
   *
   * <code>repeated .vasystem.api.v2.AircraftModel aircraft_models = 11 [json_name = "aircraftModels"];</code>
   */
  dev.vasystem.api.v2.AircraftModel getAircraftModels(int index);
  /**
   * <pre>
   * The aircraft models that operate this route.
   * </pre>
   *
   * <code>repeated .vasystem.api.v2.AircraftModel aircraft_models = 11 [json_name = "aircraftModels"];</code>
   */
  int getAircraftModelsCount();
  /**
   * <pre>
   * The aircraft models that operate this route.
   * </pre>
   *
   * <code>repeated .vasystem.api.v2.AircraftModel aircraft_models = 11 [json_name = "aircraftModels"];</code>
   */
  java.util.List<? extends dev.vasystem.api.v2.AircraftModelOrBuilder> 
      getAircraftModelsOrBuilderList();
  /**
   * <pre>
   * The aircraft models that operate this route.
   * </pre>
   *
   * <code>repeated .vasystem.api.v2.AircraftModel aircraft_models = 11 [json_name = "aircraftModels"];</code>
   */
  dev.vasystem.api.v2.AircraftModelOrBuilder getAircraftModelsOrBuilder(
      int index);

  /**
   * <pre>
   * Whether this route is archived. An archived route cannot be booked by pilots.
   * </pre>
   *
   * <code>bool archived = 16 [json_name = "archived"];</code>
   * @return The archived.
   */
  boolean getArchived();
}
