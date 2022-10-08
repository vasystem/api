/* eslint-disable */
// @generated by protobuf-ts 2.8.1 with parameter long_type_string,ts_nocheck,eslint_disable
// @generated from protobuf file "vasystem/api/v2/virtual_airline.proto" (package "vasystem.api.v2", syntax proto3)
// tslint:disable
// @ts-nocheck
import type { RpcTransport } from "@protobuf-ts/runtime-rpc";
import type { ServiceInfo } from "@protobuf-ts/runtime-rpc";
import { VirtualAirlinesService } from "./virtual_airline";
import { stackIntercept } from "@protobuf-ts/runtime-rpc";
import type { GetVirtualAirlineResponse } from "./virtual_airline";
import type { GetVirtualAirlineRequest } from "./virtual_airline";
import type { UnaryCall } from "@protobuf-ts/runtime-rpc";
import type { RpcOptions } from "@protobuf-ts/runtime-rpc";
/**
 * @generated from protobuf service vasystem.api.v2.VirtualAirlinesService
 */
export interface IVirtualAirlinesServiceClient {
    /**
     * Get virtual airline information
     * This method does not require authentication.
     *
     * @generated from protobuf rpc: GetVirtualAirline(vasystem.api.v2.GetVirtualAirlineRequest) returns (vasystem.api.v2.GetVirtualAirlineResponse);
     */
    getVirtualAirline(input: GetVirtualAirlineRequest, options?: RpcOptions): UnaryCall<GetVirtualAirlineRequest, GetVirtualAirlineResponse>;
}
/**
 * @generated from protobuf service vasystem.api.v2.VirtualAirlinesService
 */
export class VirtualAirlinesServiceClient implements IVirtualAirlinesServiceClient, ServiceInfo {
    typeName = VirtualAirlinesService.typeName;
    methods = VirtualAirlinesService.methods;
    options = VirtualAirlinesService.options;
    constructor(private readonly _transport: RpcTransport) {
    }
    /**
     * Get virtual airline information
     * This method does not require authentication.
     *
     * @generated from protobuf rpc: GetVirtualAirline(vasystem.api.v2.GetVirtualAirlineRequest) returns (vasystem.api.v2.GetVirtualAirlineResponse);
     */
    getVirtualAirline(input: GetVirtualAirlineRequest, options?: RpcOptions): UnaryCall<GetVirtualAirlineRequest, GetVirtualAirlineResponse> {
        const method = this.methods[0], opt = this._transport.mergeOptions(options);
        return stackIntercept<GetVirtualAirlineRequest, GetVirtualAirlineResponse>("unary", this._transport, method, opt, input);
    }
}
