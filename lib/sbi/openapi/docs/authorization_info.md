# authorization_info_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**snssai** | [**snssai_t**](snssai.md) \* |  | 
**dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | 
**mtc_provider_information** | **char \*** | String uniquely identifying MTC provider information. | 
**auth_update_callback_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | 
**af_id** | **char \*** |  | [optional] 
**nef_id** | **char \*** | Identity of the NEF | [optional] 
**validity_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**context_info** | [**context_info_t**](context_info.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


