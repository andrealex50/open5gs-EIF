# dnn_route_selection_descriptor_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | 
**ssc_modes** | [**list_t**](ssc_mode.md) \* |  | [optional] 
**pdu_sess_types** | [**list_t**](pdu_session_type.md) \* |  | [optional] 
**atsss_info** | **int** | Indicates whether MA PDU session establishment is allowed for this DNN. When set to value true MA PDU session establishment is allowed for this DNN.  | [optional] [default to false]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


