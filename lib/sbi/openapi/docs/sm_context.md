# sm_context_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pdu_session_id** | **int** | Unsigned integer identifying a PDU session, within the range 0 to 255, as specified in  clause 11.2.3.1b, bits 1 to 8, of 3GPP TS 24.007. If the PDU Session ID is allocated by the  Core Network for UEs not supporting N1 mode, reserved range 64 to 95 is used. PDU Session ID  within the reserved range is only visible in the Core Network.   | 
**dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | 
**selected_dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | [optional] 
**s_nssai** | [**snssai_t**](snssai.md) \* |  | 
**hplmn_snssai** | [**snssai_t**](snssai.md) \* |  | [optional] 
**pdu_session_type** | **pdu_session_type_t \*** |  | 
**gpsi** | **char \*** | String identifying a Gpsi shall contain either an External Id or an MSISDN.  It shall be formatted as follows -External Identifier&#x3D; \&quot;extid-&#39;extid&#39;, where &#39;extid&#39;  shall be formatted according to clause 19.7.2 of 3GPP TS 23.003 that describes an  External Identifier.   | [optional] 
**h_smf_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**smf_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**pdu_session_ref** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**inter_plmn_api_root** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**intra_plmn_api_root** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**pcf_id** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**pcf_group_id** | **char \*** | Identifier of a group of NFs. | [optional] 
**pcf_set_id** | **char \*** | NF Set Identifier (see clause 28.12 of 3GPP TS 23.003), formatted as the following string \&quot;set&lt;Set ID&gt;.&lt;nftype&gt;set.5gc.mnc&lt;MNC&gt;.mcc&lt;MCC&gt;\&quot;, or  \&quot;set&lt;SetID&gt;.&lt;NFType&gt;set.5gc.nid&lt;NID&gt;.mnc&lt;MNC&gt;.mcc&lt;MCC&gt;\&quot; with  &lt;MCC&gt; encoded as defined in clause 5.4.2 (\&quot;Mcc\&quot; data type definition)  &lt;MNC&gt; encoding the Mobile Network Code part of the PLMN, comprising 3 digits.    If there are only 2 significant digits in the MNC, one \&quot;0\&quot; digit shall be inserted    at the left side to fill the 3 digits coding of MNC.  Pattern: &#39;^[0-9]{3}$&#39; &lt;NFType&gt; encoded as a value defined in Table 6.1.6.3.3-1 of 3GPP TS 29.510 but    with lower case characters &lt;Set ID&gt; encoded as a string of characters consisting of    alphabetic characters (A-Z and a-z), digits (0-9) and/or the hyphen (-) and that    shall end with either an alphabetic character or a digit.   | [optional] 
**sel_mode** | **dnn_selection_mode_t \*** |  | [optional] 
**udm_group_id** | **char \*** | Identifier of a group of NFs. | [optional] 
**routing_indicator** | **char \*** |  | [optional] 
**h_nw_pub_key_id** | **int** |  | [optional] 
**session_ambr** | [**ambr_t**](ambr.md) \* |  | 
**qos_flows_list** | [**list_t**](qos_flow_setup_item.md) \* |  | 
**h_smf_instance_id** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**smf_instance_id** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**pdu_session_smf_set_id** | **char \*** | NF Set Identifier (see clause 28.12 of 3GPP TS 23.003), formatted as the following string \&quot;set&lt;Set ID&gt;.&lt;nftype&gt;set.5gc.mnc&lt;MNC&gt;.mcc&lt;MCC&gt;\&quot;, or  \&quot;set&lt;SetID&gt;.&lt;NFType&gt;set.5gc.nid&lt;NID&gt;.mnc&lt;MNC&gt;.mcc&lt;MCC&gt;\&quot; with  &lt;MCC&gt; encoded as defined in clause 5.4.2 (\&quot;Mcc\&quot; data type definition)  &lt;MNC&gt; encoding the Mobile Network Code part of the PLMN, comprising 3 digits.    If there are only 2 significant digits in the MNC, one \&quot;0\&quot; digit shall be inserted    at the left side to fill the 3 digits coding of MNC.  Pattern: &#39;^[0-9]{3}$&#39; &lt;NFType&gt; encoded as a value defined in Table 6.1.6.3.3-1 of 3GPP TS 29.510 but    with lower case characters &lt;Set ID&gt; encoded as a string of characters consisting of    alphabetic characters (A-Z and a-z), digits (0-9) and/or the hyphen (-) and that    shall end with either an alphabetic character or a digit.   | [optional] 
**pdu_session_smf_service_set_id** | **char \*** | NF Service Set Identifier (see clause 28.12 of 3GPP TS 23.003) formatted as the following  string \&quot;set&lt;Set ID&gt;.sn&lt;Service Name&gt;.nfi&lt;NF Instance ID&gt;.5gc.mnc&lt;MNC&gt;.mcc&lt;MCC&gt;\&quot;, or  \&quot;set&lt;SetID&gt;.sn&lt;ServiceName&gt;.nfi&lt;NFInstanceID&gt;.5gc.nid&lt;NID&gt;.mnc&lt;MNC&gt;.mcc&lt;MCC&gt;\&quot; with  &lt;MCC&gt; encoded as defined in clause 5.4.2 (\&quot;Mcc\&quot; data type definition)   &lt;MNC&gt; encoding the Mobile Network Code part of the PLMN, comprising 3 digits.    If there are only 2 significant digits in the MNC, one \&quot;0\&quot; digit shall be inserted    at the left side to fill the 3 digits coding of MNC.  Pattern: &#39;^[0-9]{3}$&#39; &lt;NID&gt; encoded as defined in clause 5.4.2 (\&quot;Nid\&quot; data type definition)  &lt;NFInstanceId&gt; encoded as defined in clause 5.3.2  &lt;ServiceName&gt; encoded as defined in 3GPP TS 29.510  &lt;Set ID&gt; encoded as a string of characters consisting of alphabetic    characters (A-Z and a-z), digits (0-9) and/or the hyphen (-) and that shall end    with either an alphabetic character or a digit.  | [optional] 
**pdu_session_smf_binding** | **sbi_binding_level_t \*** |  | [optional] 
**enable_pause_charging** | **int** |  | [optional] [default to false]
**ue_ipv4_address** | **char \*** | String identifying a IPv4 address formatted in the &#39;dotted decimal&#39; notation as defined in RFC 1166.  | [optional] 
**ue_ipv6_prefix** | **char \*** | String identifying an IPv6 address prefix formatted according to clause 4 of RFC 5952. IPv6Prefix data type may contain an individual /128 IPv6 address.  | [optional] 
**eps_pdn_cnx_info** | [**eps_pdn_cnx_info_t**](eps_pdn_cnx_info.md) \* |  | [optional] 
**eps_bearer_info** | [**list_t**](eps_bearer_info.md) \* |  | [optional] 
**max_integrity_protected_data_rate** | **max_integrity_protected_data_rate_t \*** |  | [optional] 
**max_integrity_protected_data_rate_dl** | **max_integrity_protected_data_rate_t \*** |  | [optional] 
**always_on_granted** | **int** |  | [optional] [default to false]
**up_security** | [**up_security_t**](up_security.md) \* |  | [optional] 
**h_smf_service_instance_id** | **char \*** |  | [optional] 
**smf_service_instance_id** | **char \*** |  | [optional] 
**recovery_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**forwarding_ind** | **int** |  | [optional] [default to false]
**psa_tunnel_info** | [**tunnel_info_t**](tunnel_info.md) \* |  | [optional] 
**charging_id** | **char \*** |  | [optional] 
**charging_info** | [**charging_information_t**](charging_information.md) \* |  | [optional] 
**roaming_charging_profile** | [**roaming_charging_profile_t**](roaming_charging_profile.md) \* |  | [optional] 
**nef_ext_buf_support_ind** | **int** |  | [optional] [default to false]
**ipv6_index** | **int** | Represents information that identifies which IP pool or external server is used to allocate the IP address.  | [optional] 
**dn_aaa_address** | [**ip_address_t**](ip_address.md) \* |  | [optional] 
**redundant_pdu_session_info** | [**redundant_pdu_session_information_t**](redundant_pdu_session_information.md) \* |  | [optional] 
**ran_tunnel_info** | [**qos_flow_tunnel_t**](qos_flow_tunnel.md) \* |  | [optional] 
**add_ran_tunnel_info** | [**list_t**](qos_flow_tunnel.md) \* |  | [optional] 
**red_ran_tunnel_info** | [**qos_flow_tunnel_t**](qos_flow_tunnel.md) \* |  | [optional] 
**add_red_ran_tunnel_info** | [**list_t**](qos_flow_tunnel.md) \* |  | [optional] 
**nspu_support_ind** | **int** |  | [optional] 
**smf_binding_info** | **char \*** |  | [optional] 
**satellite_backhaul_cat** | **satellite_backhaul_category_t \*** |  | [optional] 
**ssc_mode** | **char \*** |  | [optional] 
**dlset_support_ind** | **int** |  | [optional] 
**n9fsc_support_ind** | **int** |  | [optional] 
**disaster_roaming_ind** | **int** |  | [optional] [default to false]
**anchor_smf_oauth2_required** | **int** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


