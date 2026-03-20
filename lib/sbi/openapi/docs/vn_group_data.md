# vn_group_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pdu_session_types** | [**pdu_session_types_t**](pdu_session_types.md) \* |  | [optional] 
**dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | [optional] 
**single_nssai** | [**snssai_t**](snssai.md) \* |  | [optional] 
**app_descriptors** | [**list_t**](app_descriptor.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


