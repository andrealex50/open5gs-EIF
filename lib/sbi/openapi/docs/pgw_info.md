# pgw_info_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | 
**pgw_fqdn** | **char \*** | Fully Qualified Domain Name | 
**pgw_ip_addr** | [**ip_address_t**](ip_address.md) \* |  | [optional] 
**plmn_id** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**epdg_ind** | **int** |  | [optional] [default to false]
**pcf_id** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**registration_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


