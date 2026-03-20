# pdu_session_tsn_bridge_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**tsn_bridge_info** | [**tsn_bridge_info_t**](tsn_bridge_info.md) \* |  | 
**tsn_bridge_man_cont** | [**bridge_management_container_t**](bridge_management_container.md) \* |  | [optional] 
**tsn_port_man_cont_dstt** | [**port_management_container_t**](port_management_container.md) \* |  | [optional] 
**tsn_port_man_cont_nwtts** | [**list_t**](port_management_container.md) \* |  | [optional] 
**ue_ipv4_addr** | **char \*** | String identifying a IPv4 address formatted in the &#39;dotted decimal&#39; notation as defined in RFC 1166.  | [optional] 
**dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | [optional] 
**snssai** | [**snssai_t**](snssai.md) \* |  | [optional] 
**ip_domain** | **char \*** | IPv4 address domain identifier. | [optional] 
**ue_ipv6_addr_prefix** | **char \*** | String identifying an IPv6 address prefix formatted according to clause 4 of RFC 5952. IPv6Prefix data type may contain an individual /128 IPv6 address.  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


