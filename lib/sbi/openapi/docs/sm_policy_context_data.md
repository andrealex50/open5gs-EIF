# sm_policy_context_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**acc_net_ch_id** | [**acc_net_ch_id_t**](acc_net_ch_id.md) \* |  | [optional] 
**charg_entity_addr** | [**acc_net_charging_address_t**](acc_net_charging_address.md) \* |  | [optional] 
**gpsi** | **char \*** | String identifying a Gpsi shall contain either an External Id or an MSISDN.  It shall be formatted as follows -External Identifier&#x3D; \&quot;extid-&#39;extid&#39;, where &#39;extid&#39;  shall be formatted according to clause 19.7.2 of 3GPP TS 23.003 that describes an  External Identifier.   | [optional] 
**supi** | **char \*** | String identifying a Supi that shall contain either an IMSI, a network specific identifier, a Global Cable Identifier (GCI) or a Global Line Identifier (GLI) as specified in clause  2.2A of 3GPP TS 23.003. It shall be formatted as follows  - for an IMSI \&quot;imsi-&lt;imsi&gt;\&quot;, where &lt;imsi&gt; shall be formatted according to clause 2.2    of 3GPP TS 23.003 that describes an IMSI.  - for a network specific identifier \&quot;nai-&lt;nai&gt;, where &lt;nai&gt; shall be formatted    according to clause 28.7.2 of 3GPP TS 23.003 that describes an NAI.  - for a GCI \&quot;gci-&lt;gci&gt;\&quot;, where &lt;gci&gt; shall be formatted according to clause 28.15.2    of 3GPP TS 23.003.  - for a GLI \&quot;gli-&lt;gli&gt;\&quot;, where &lt;gli&gt; shall be formatted according to clause 28.16.2 of    3GPP TS 23.003.To enable that the value is used as part of an URI, the string shall    only contain characters allowed according to the \&quot;lower-with-hyphen\&quot; naming convention    defined in 3GPP TS 29.501.  | 
**invalid_supi** | **int** | When this attribute is included and set to true, it indicates that the supi attribute contains an invalid value.This attribute shall be present if the SUPI is not available in the SMF or the SUPI is unauthenticated. When present it shall be set to true for an invalid SUPI and false (default) for a valid SUPI.  | [optional] 
**inter_grp_ids** | **list_t \*** |  | [optional] 
**pdu_session_id** | **int** | Unsigned integer identifying a PDU session, within the range 0 to 255, as specified in  clause 11.2.3.1b, bits 1 to 8, of 3GPP TS 24.007. If the PDU Session ID is allocated by the  Core Network for UEs not supporting N1 mode, reserved range 64 to 95 is used. PDU Session ID  within the reserved range is only visible in the Core Network.   | 
**pdu_session_type** | **pdu_session_type_t \*** |  | 
**chargingcharacteristics** | **char \*** |  | [optional] 
**dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | 
**dnn_sel_mode** | **dnn_selection_mode_t \*** |  | [optional] 
**notification_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | 
**access_type** | **access_type_t \*** |  | [optional] 
**rat_type** | **rat_type_t \*** |  | [optional] 
**add_access_info** | [**additional_access_info_t**](additional_access_info.md) \* |  | [optional] 
**serving_network** | [**plmn_id_nid_t**](plmn_id_nid.md) \* |  | [optional] 
**user_location_info** | [**user_location_t**](user_location.md) \* |  | [optional] 
**ue_time_zone** | **char \*** | String with format \&quot;time-numoffset\&quot; optionally appended by \&quot;daylightSavingTime\&quot;, where  - \&quot;time-numoffset\&quot; shall represent the time zone adjusted for daylight saving time and be    encoded as time-numoffset as defined in clause 5.6 of IETF RFC 3339;  - \&quot;daylightSavingTime\&quot; shall represent the adjustment that has been made and shall be    encoded as \&quot;+1\&quot; or \&quot;+2\&quot; for a +1 or +2 hours adjustment.   The example is for 8 hours behind UTC, +1 hour adjustment for Daylight Saving Time.  | [optional] 
**pei** | **char \*** | String representing a Permanent Equipment Identifier that may contain - an IMEI or IMEISV, as  specified in clause 6.2 of 3GPP TS 23.003; a MAC address for a 5G-RG or FN-RG via  wireline  access, with an indication that this address cannot be trusted for regulatory purpose if this  address cannot be used as an Equipment Identifier of the FN-RG, as specified in clause 4.7.7  of 3GPP TS23.316. Examples are imei-012345678901234 or imeisv-0123456789012345.   | [optional] 
**ipv4_address** | **char \*** | String identifying a IPv4 address formatted in the &#39;dotted decimal&#39; notation as defined in RFC 1166.  | [optional] 
**ipv6_address_prefix** | **char \*** | String identifying an IPv6 address prefix formatted according to clause 4 of RFC 5952. IPv6Prefix data type may contain an individual /128 IPv6 address.  | [optional] 
**ip_domain** | **char \*** | Indicates the IPv4 address domain | [optional] 
**subs_sess_ambr** | [**ambr_t**](ambr.md) \* |  | [optional] 
**auth_prof_index** | **char \*** | Indicates the DN-AAA authorization profile index | [optional] 
**subs_def_qos** | [**subscribed_default_qos_t**](subscribed_default_qos.md) \* |  | [optional] 
**vplmn_qos** | [**vplmn_qos_t**](vplmn_qos.md) \* |  | [optional] 
**num_of_pack_filter** | **int** | Contains the number of supported packet filter for signalled QoS rules. | [optional] 
**online** | **int** | If it is included and set to true, the online charging is applied to the PDU session. | [optional] 
**offline** | **int** | If it is included and set to true, the offline charging is applied to the PDU session. | [optional] 
**_3gpp_ps_data_off_status** | **int** | If it is included and set to true, the 3GPP PS Data Off is activated by the UE. | [optional] 
**ref_qos_indication** | **int** | If it is included and set to true, the reflective QoS is supported by the UE. | [optional] 
**trace_req** | [**trace_data_t**](trace_data.md) \* |  | [optional] 
**slice_info** | [**snssai_t**](snssai.md) \* |  | 
**qos_flow_usage** | **qos_flow_usage_t \*** |  | [optional] 
**serv_nf_id** | [**serving_nf_identity_t**](serving_nf_identity.md) \* |  | [optional] 
**supp_feat** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**smf_id** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**recovery_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**ma_pdu_ind** | **ma_pdu_indication_t \*** |  | [optional] 
**atsss_capab** | **npcf_atsss_capability_t \*** |  | [optional] 
**ipv4_frame_route_list** | **list_t \*** |  | [optional] 
**ipv6_frame_route_list** | **list_t \*** |  | [optional] 
**sat_backhaul_category** | **satellite_backhaul_category_t \*** |  | [optional] 
**pcf_ue_info** | [**pcf_ue_callback_info_t**](pcf_ue_callback_info.md) \* |  | [optional] 
**pvs_info** | [**list_t**](server_addressing_info.md) \* |  | [optional] 
**onboard_ind** | **int** | If it is included and set to true, it indicates that the PDU session is used for UE Onboarding. | [optional] 
**nwdaf_datas** | [**list_t**](nwdaf_data.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


