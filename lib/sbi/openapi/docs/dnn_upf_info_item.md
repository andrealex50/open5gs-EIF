# dnn_upf_info_item_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | 
**dnai_list** | **list_t \*** |  | [optional] 
**pdu_session_types** | [**list_t**](pdu_session_type.md) \* |  | [optional] 
**ipv4_address_ranges** | [**list_t**](ipv4_address_range.md) \* |  | [optional] 
**ipv6_prefix_ranges** | [**list_t**](ipv6_prefix_range.md) \* |  | [optional] 
**ipv4_index_list** | [**list_t**](ip_index.md) \* |  | [optional] 
**ipv6_index_list** | [**list_t**](ip_index.md) \* |  | [optional] 
**dnai_nw_instance_list** | **list_t*** | Map of network instance per DNAI for the DNN, where the key of the map is the DNAI. When present, the value of each entry of the map shall contain a N6 network instance that is configured for the DNAI indicated by the key.  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


