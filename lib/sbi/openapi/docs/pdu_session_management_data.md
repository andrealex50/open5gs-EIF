# pdu_session_management_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pdu_session_status** | **pdu_session_status_t \*** |  | [optional] 
**pdu_session_status_ts** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**dnai** | **char \*** | DNAI (Data network access identifier), see clause 5.6.7 of 3GPP TS 23.501. | [optional] 
**dnai_ts** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**n6_traffic_routing_info** | [**list_t**](route_to_location.md) \* |  | [optional] 
**n6_traffic_routing_info_ts** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**ipv4_addr** | **char \*** | String identifying a IPv4 address formatted in the &#39;dotted decimal&#39; notation as defined in RFC 1166.  | [optional] 
**ipv6_prefix** | **list_t \*** | UE IPv6 prefix. | [optional] 
**ipv6_addrs** | **list_t \*** |  | [optional] 
**pdu_sess_type** | **pdu_session_type_t \*** |  | [optional] 
**ip_addr_ts** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | [optional] 
**pdu_session_id** | **int** | Unsigned integer identifying a PDU session, within the range 0 to 255, as specified in  clause 11.2.3.1b, bits 1 to 8, of 3GPP TS 24.007. If the PDU Session ID is allocated by the  Core Network for UEs not supporting N1 mode, reserved range 64 to 95 is used. PDU Session ID  within the reserved range is only visible in the Core Network.   | [optional] 
**supp_feat** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**reset_ids** | **list_t \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


