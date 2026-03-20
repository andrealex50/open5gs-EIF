# sm_context_updated_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**up_cnx_state** | **up_cnx_state_t \*** |  | [optional] 
**ho_state** | **ho_state_t \*** |  | [optional] 
**release_ebi_list** | **list_t \*** |  | [optional] 
**allocated_ebi_list** | [**list_t**](ebi_arp_mapping.md) \* |  | [optional] 
**modified_ebi_list** | [**list_t**](ebi_arp_mapping.md) \* |  | [optional] 
**n1_sm_msg** | [**ref_to_binary_data_t**](ref_to_binary_data.md) \* |  | [optional] 
**n2_sm_info** | [**ref_to_binary_data_t**](ref_to_binary_data.md) \* |  | [optional] 
**n2_sm_info_type** | **n2_sm_info_type_t \*** |  | [optional] 
**eps_bearer_setup** | **list_t \*** |  | [optional] 
**data_forwarding** | **int** |  | [optional] 
**n3_dl_forwarding_tnl_list** | [**list_t**](indirect_data_forwarding_tunnel_info.md) \* |  | [optional] 
**n3_ul_forwarding_tnl_list** | [**list_t**](indirect_data_forwarding_tunnel_info.md) \* |  | [optional] 
**n9_ul_forwarding_tunnel** | [**tunnel_info_t**](tunnel_info.md) \* |  | [optional] 
**cause** | **cause_t \*** |  | [optional] 
**ma_accepted_ind** | **int** |  | [optional] [default to false]
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**forwarding_f_teid** | **char \*** | string with format &#39;bytes&#39; as defined in OpenAPI | [optional] 
**forwarding_bearer_contexts** | **list_t \*** |  | [optional] 
**selected_smf_id** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**selected_old_smf_id** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**inter_plmn_api_root** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**anchor_smf_features** | [**anchor_smf_features_t**](anchor_smf_features.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


