# pdu_session_created_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pdu_session_type** | **pdu_session_type_t \*** |  | 
**ssc_mode** | **char \*** |  | 
**hcn_tunnel_info** | [**tunnel_info_t**](tunnel_info.md) \* |  | [optional] 
**cn_tunnel_info** | [**tunnel_info_t**](tunnel_info.md) \* |  | [optional] 
**additional_cn_tunnel_info** | [**tunnel_info_t**](tunnel_info.md) \* |  | [optional] 
**session_ambr** | [**ambr_t**](ambr.md) \* |  | [optional] 
**qos_flows_setup_list** | [**list_t**](qos_flow_setup_item.md) \* |  | [optional] 
**h_smf_instance_id** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**smf_instance_id** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**pdu_session_id** | **int** | Unsigned integer identifying a PDU session, within the range 0 to 255, as specified in  clause 11.2.3.1b, bits 1 to 8, of 3GPP TS 24.007. If the PDU Session ID is allocated by the  Core Network for UEs not supporting N1 mode, reserved range 64 to 95 is used. PDU Session ID  within the reserved range is only visible in the Core Network.   | [optional] 
**s_nssai** | [**snssai_t**](snssai.md) \* |  | [optional] 
**enable_pause_charging** | **int** |  | [optional] [default to false]
**ue_ipv4_address** | **char \*** | String identifying a IPv4 address formatted in the &#39;dotted decimal&#39; notation as defined in RFC 1166.  | [optional] 
**ue_ipv6_prefix** | **char \*** | String identifying an IPv6 address prefix formatted according to clause 4 of RFC 5952. IPv6Prefix data type may contain an individual /128 IPv6 address.  | [optional] 
**n1_sm_info_to_ue** | [**ref_to_binary_data_t**](ref_to_binary_data.md) \* |  | [optional] 
**eps_pdn_cnx_info** | [**eps_pdn_cnx_info_t**](eps_pdn_cnx_info.md) \* |  | [optional] 
**eps_bearer_info** | [**list_t**](eps_bearer_info.md) \* |  | [optional] 
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**max_integrity_protected_data_rate** | **max_integrity_protected_data_rate_t \*** |  | [optional] 
**max_integrity_protected_data_rate_dl** | **max_integrity_protected_data_rate_t \*** |  | [optional] 
**always_on_granted** | **int** |  | [optional] [default to false]
**gpsi** | **char \*** | String identifying a Gpsi shall contain either an External Id or an MSISDN.  It shall be formatted as follows -External Identifier&#x3D; \&quot;extid-&#39;extid&#39;, where &#39;extid&#39;  shall be formatted according to clause 19.7.2 of 3GPP TS 23.003 that describes an  External Identifier.   | [optional] 
**up_security** | [**up_security_t**](up_security.md) \* |  | [optional] 
**roaming_charging_profile** | [**roaming_charging_profile_t**](roaming_charging_profile.md) \* |  | [optional] 
**h_smf_service_instance_id** | **char \*** |  | [optional] 
**smf_service_instance_id** | **char \*** |  | [optional] 
**recovery_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**dnai_list** | **list_t \*** |  | [optional] 
**ipv6_multi_homing_ind** | **int** |  | [optional] [default to false]
**ma_accepted_ind** | **int** |  | [optional] [default to false]
**home_provided_charging_id** | **char \*** |  | [optional] 
**nef_ext_buf_support_ind** | **int** |  | [optional] [default to false]
**small_data_rate_control_enabled** | **int** |  | [optional] [default to false]
**ue_ipv6_interface_id** | **char \*** |  | [optional] 
**ipv6_index** | **int** | Represents information that identifies which IP pool or external server is used to allocate the IP address.  | [optional] 
**dn_aaa_address** | [**ip_address_t**](ip_address.md) \* |  | [optional] 
**redundant_pdu_session_info** | [**redundant_pdu_session_information_t**](redundant_pdu_session_information.md) \* |  | [optional] 
**nspu_support_ind** | **int** |  | [optional] 
**inter_plmn_api_root** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**intra_plmn_api_root** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


