# sec_negotiate_req_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**sender** | **char \*** | Fully Qualified Domain Name | 
**supported_sec_capability_list** | [**list_t**](security_capability.md) \* |  | 
**_3_gpp_sbi_target_api_root_supported** | **int** |  | [optional] [default to false]
**plmn_id_list** | [**list_t**](plmn_id.md) \* |  | [optional] 
**snpn_id_list** | [**list_t**](plmn_id_nid.md) \* |  | [optional] 
**target_plmn_id** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**target_snpn_id** | [**plmn_id_nid_t**](plmn_id_nid.md) \* |  | [optional] 
**intended_usage_purpose** | [**list_t**](intended_n32_purpose.md) \* |  | [optional] 
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


