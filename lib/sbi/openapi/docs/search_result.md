# search_result_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**validity_period** | **int** |  | [optional] 
**nf_instances** | [**list_t**](nf_profile.md) \* |  | 
**search_id** | **char \*** |  | [optional] 
**num_nf_inst_complete** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | [optional] 
**preferred_search** | [**preferred_search_t**](preferred_search.md) \* |  | [optional] 
**nrf_supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**nf_instance_list** | **list_t*** | List of matching NF instances. The key of the map is the NF instance ID. | [optional] 
**altered_priority_ind** | **int** |  | [optional] 
**no_profile_match_info** | [**no_profile_match_info_t**](no_profile_match_info.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


