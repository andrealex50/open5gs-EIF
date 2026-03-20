# pp_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**communication_characteristics** | [**communication_characteristics_t**](communication_characteristics.md) \* |  | [optional] 
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**expected_ue_behaviour_parameters** | [**expected_ue_behaviour_t**](expected_ue_behaviour.md) \* |  | [optional] 
**ec_restriction** | [**ec_restriction_t**](ec_restriction.md) \* |  | [optional] 
**acs_info** | [**acs_info_rm_t**](acs_info_rm.md) \* |  | [optional] 
**stn_sr** | **char \*** | String representing the STN-SR as defined in clause 18.6 of 3GPP TS 23.003 with the OpenAPI &#39;nullable: true&#39; property.   | [optional] 
**lcs_privacy** | [**lcs_privacy_t**](lcs_privacy.md) \* |  | [optional] 
**sor_info** | [**sor_info_t**](sor_info.md) \* |  | [optional] 
**_5mbs_authorization_info** | [**model_5_mbs_authorization_info_t**](model_5_mbs_authorization_info.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


