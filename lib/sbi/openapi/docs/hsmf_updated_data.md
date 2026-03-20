# hsmf_updated_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**n1_sm_info_to_ue** | [**ref_to_binary_data_t**](ref_to_binary_data.md) \* |  | [optional] 
**n4_info** | [**n4_information_t**](n4_information.md) \* |  | [optional] 
**n4_info_ext1** | [**n4_information_t**](n4_information.md) \* |  | [optional] 
**n4_info_ext2** | [**n4_information_t**](n4_information.md) \* |  | [optional] 
**dnai_list** | **list_t \*** |  | [optional] 
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**roaming_charging_profile** | [**roaming_charging_profile_t**](roaming_charging_profile.md) \* |  | [optional] 
**home_provided_charging_id** | **char \*** |  | [optional] 
**up_security** | [**up_security_t**](up_security.md) \* |  | [optional] 
**max_integrity_protected_data_rate_ul** | **max_integrity_protected_data_rate_t \*** |  | [optional] 
**max_integrity_protected_data_rate_dl** | **max_integrity_protected_data_rate_t \*** |  | [optional] 
**ipv6_multi_homing_ind** | **int** |  | [optional] [default to false]
**qos_flows_setup_list** | [**list_t**](qos_flow_setup_item.md) \* |  | [optional] 
**session_ambr** | [**ambr_t**](ambr.md) \* |  | [optional] 
**eps_pdn_cnx_info** | [**eps_pdn_cnx_info_t**](eps_pdn_cnx_info.md) \* |  | [optional] 
**eps_bearer_info** | [**list_t**](eps_bearer_info.md) \* |  | [optional] 
**pti** | **int** | Procedure Transaction Identifier | [optional] 
**inter_plmn_api_root** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**intra_plmn_api_root** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


