# media_sub_component_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**af_sig_protocol** | **af_sig_protocol_t \*** |  | [optional] 
**ethf_descs** | [**list_t**](eth_flow_description.md) \* |  | [optional] 
**f_num** | **int** |  | 
**f_descs** | **list_t \*** |  | [optional] 
**f_status** | **flow_status_t \*** |  | [optional] 
**mar_bw_dl** | **char \*** | String representing a bit rate; the prefixes follow the standard symbols from The International System of Units, and represent x1000 multipliers, with the exception that prefix \&quot;K\&quot; is used to represent the standard symbol \&quot;k\&quot;.  | [optional] 
**mar_bw_ul** | **char \*** | String representing a bit rate; the prefixes follow the standard symbols from The International System of Units, and represent x1000 multipliers, with the exception that prefix \&quot;K\&quot; is used to represent the standard symbol \&quot;k\&quot;.  | [optional] 
**tos_tr_cl** | **char \*** | 2-octet string, where each octet is encoded in hexadecimal representation. The first octet contains the IPv4 Type-of-Service or the IPv6 Traffic-Class field and the second octet contains the ToS/Traffic Class mask field.  | [optional] 
**flow_usage** | **flow_usage_t \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


