# pp_dl_packet_count_ext_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**af_instance_id** | **char \*** |  | 
**reference_id** | **int** |  | 
**dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | [optional] 
**single_nssai** | [**snssai_t**](snssai.md) \* |  | [optional] 
**validity_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**mtc_provider_information** | **char \*** | String uniquely identifying MTC provider information. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


