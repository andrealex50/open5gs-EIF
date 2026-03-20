# session_management_subscription_data_1_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**single_nssai** | [**snssai_t**](snssai.md) \* |  | 
**dnn_configurations** | **list_t*** | A map (list of key-value pairs where Dnn, or optionally the Wildcard DNN, serves as key) of DnnConfigurations | [optional] 
**internal_group_ids** | **list_t \*** |  | [optional] 
**shared_vn_group_data_ids** | **list_t*** | A map(list of key-value pairs) where GroupId serves as key of SharedDataId | [optional] 
**shared_dnn_configurations_id** | **char \*** |  | [optional] 
**odb_packet_services** | **odb_packet_services_t \*** |  | [optional] 
**trace_data** | [**trace_data_t**](trace_data.md) \* |  | [optional] 
**shared_trace_data_id** | **char \*** |  | [optional] 
**expected_ue_behaviours_list** | **list_t*** | A map(list of key-value pairs) where Dnn serves as key of ExpectedUeBehaviourData | [optional] 
**suggested_packet_num_dl_list** | **list_t*** | A map(list of key-value pairs) where Dnn serves as key of SuggestedPacketNumDl | [optional] 
**_3gpp_charging_characteristics** | **char \*** |  | [optional] 
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


