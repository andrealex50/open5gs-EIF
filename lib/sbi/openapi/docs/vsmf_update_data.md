# vsmf_update_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**request_indication** | **request_indication_t \*** |  | 
**session_ambr** | [**ambr_t**](ambr.md) \* |  | [optional] 
**qos_flows_add_mod_request_list** | [**list_t**](qos_flow_add_modify_request_item.md) \* |  | [optional] 
**qos_flows_rel_request_list** | [**list_t**](qos_flow_release_request_item.md) \* |  | [optional] 
**eps_bearer_info** | [**list_t**](eps_bearer_info.md) \* |  | [optional] 
**assign_ebi_list** | [**list_t**](arp.md) \* |  | [optional] 
**revoke_ebi_list** | **list_t \*** |  | [optional] 
**modified_ebi_list** | [**list_t**](ebi_arp_mapping.md) \* |  | [optional] 
**pti** | **int** | Procedure Transaction Identifier | [optional] 
**n1_sm_info_to_ue** | [**ref_to_binary_data_t**](ref_to_binary_data.md) \* |  | [optional] 
**always_on_granted** | **int** |  | [optional] [default to false]
**hsmf_pdu_session_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**new_smf_id** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**new_smf_pdu_session_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**cause** | **cause_t \*** |  | [optional] 
**n1sm_cause** | **char \*** |  | [optional] 
**back_off_timer** | **int** | indicating a time in seconds. | [optional] 
**ma_release_ind** | **ma_release_indication_t \*** |  | [optional] 
**ma_accepted_ind** | **int** |  | [optional] [default to false]
**additional_cn_tunnel_info** | [**tunnel_info_t**](tunnel_info.md) \* |  | [optional] 
**dnai_list** | **list_t \*** |  | [optional] 
**n4_info** | [**n4_information_t**](n4_information.md) \* |  | [optional] 
**n4_info_ext1** | [**n4_information_t**](n4_information.md) \* |  | [optional] 
**n4_info_ext2** | [**n4_information_t**](n4_information.md) \* |  | [optional] 
**n4_info_ext3** | [**n4_information_t**](n4_information.md) \* |  | [optional] 
**small_data_rate_control_enabled** | **int** |  | [optional] 
**qos_monitoring_info** | [**qos_monitoring_info_t**](qos_monitoring_info.md) \* |  | [optional] 
**eps_pdn_cnx_info** | [**eps_pdn_cnx_info_t**](eps_pdn_cnx_info.md) \* |  | [optional] 
**n9_data_forwarding_ind** | **int** |  | [optional] [default to false]
**n9_inactivity_timer** | **int** | indicating a time in seconds. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


