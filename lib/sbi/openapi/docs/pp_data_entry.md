# pp_data_entry_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**communication_characteristics** | [**communication_characteristics_af_t**](communication_characteristics_af.md) \* |  | [optional] 
**reference_id** | **int** |  | [optional] 
**validity_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**mtc_provider_information** | **char \*** | String uniquely identifying MTC provider information. | [optional] 
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**ecs_addr_config_info** | [**ecs_addr_config_info_1_t**](ecs_addr_config_info_1.md) \* |  | [optional] 
**additional_ecs_addr_config_infos** | [**list_t**](ecs_addr_config_info_1.md) \* |  | [optional] 
**ec_restriction** | [**ec_restriction_1_t**](ec_restriction_1.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


