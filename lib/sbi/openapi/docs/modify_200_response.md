# modify_200_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**nf_instance_id** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | 
**implicit_unsubscribe** | **int** |  | [optional] 
**expires** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**callback_reference** | **char \*** | String providing an URI formatted according to RFC 3986. | 
**amf_service_name** | **char \*** |  | [optional] 
**monitored_resource_uris** | **list_t \*** |  | 
**single_nssai** | [**snssai_t**](snssai.md) \* |  | [optional] 
**dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | [optional] 
**subscription_id** | **char \*** |  | [optional] 
**plmn_id** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**immediate_report** | **int** |  | [optional] [default to false]
**report** | [**list_t**](report_item.md) \* | The execution report contains an array of report items. Each report item indicates one  failed modification.  | 
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**context_info** | [**context_info_t**](context_info.md) \* |  | [optional] 
**nf_change_filter** | **int** |  | [optional] [default to false]
**unique_subscription** | **int** |  | [optional] 
**reset_ids** | **list_t \*** |  | [optional] 
**ue_con_smf_data_sub_filter** | [**ue_context_in_smf_data_sub_filter_t**](ue_context_in_smf_data_sub_filter.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


