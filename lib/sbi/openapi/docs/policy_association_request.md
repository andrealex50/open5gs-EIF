# policy_association_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**notification_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | 
**alt_notif_ipv4_addrs** | **list_t \*** | Alternate or backup IPv4 Address(es) where to send Notifications. | [optional] 
**alt_notif_ipv6_addrs** | **list_t \*** | Alternate or backup IPv6 Address(es) where to send Notifications. | [optional] 
**alt_notif_fqdns** | **list_t \*** | Alternate or backup FQDN(s) where to send Notifications. | [optional] 
**supi** | **char \*** | String identifying a Supi that shall contain either an IMSI, a network specific identifier, a Global Cable Identifier (GCI) or a Global Line Identifier (GLI) as specified in clause  2.2A of 3GPP TS 23.003. It shall be formatted as follows  - for an IMSI \&quot;imsi-&lt;imsi&gt;\&quot;, where &lt;imsi&gt; shall be formatted according to clause 2.2    of 3GPP TS 23.003 that describes an IMSI.  - for a network specific identifier \&quot;nai-&lt;nai&gt;, where &lt;nai&gt; shall be formatted    according to clause 28.7.2 of 3GPP TS 23.003 that describes an NAI.  - for a GCI \&quot;gci-&lt;gci&gt;\&quot;, where &lt;gci&gt; shall be formatted according to clause 28.15.2    of 3GPP TS 23.003.  - for a GLI \&quot;gli-&lt;gli&gt;\&quot;, where &lt;gli&gt; shall be formatted according to clause 28.16.2 of    3GPP TS 23.003.To enable that the value is used as part of an URI, the string shall    only contain characters allowed according to the \&quot;lower-with-hyphen\&quot; naming convention    defined in 3GPP TS 29.501.  | 
**gpsi** | **char \*** | String identifying a Gpsi shall contain either an External Id or an MSISDN.  It shall be formatted as follows -External Identifier&#x3D; \&quot;extid-&#39;extid&#39;, where &#39;extid&#39;  shall be formatted according to clause 19.7.2 of 3GPP TS 23.003 that describes an  External Identifier.   | [optional] 
**access_type** | **access_type_t \*** |  | [optional] 
**access_types** | [**list_t**](access_type.md) \* |  | [optional] 
**pei** | **char \*** | String representing a Permanent Equipment Identifier that may contain - an IMEI or IMEISV, as  specified in clause 6.2 of 3GPP TS 23.003; a MAC address for a 5G-RG or FN-RG via  wireline  access, with an indication that this address cannot be trusted for regulatory purpose if this  address cannot be used as an Equipment Identifier of the FN-RG, as specified in clause 4.7.7  of 3GPP TS23.316. Examples are imei-012345678901234 or imeisv-0123456789012345.   | [optional] 
**user_loc** | [**user_location_t**](user_location.md) \* |  | [optional] 
**time_zone** | **char \*** | String with format \&quot;time-numoffset\&quot; optionally appended by \&quot;daylightSavingTime\&quot;, where  - \&quot;time-numoffset\&quot; shall represent the time zone adjusted for daylight saving time and be    encoded as time-numoffset as defined in clause 5.6 of IETF RFC 3339;  - \&quot;daylightSavingTime\&quot; shall represent the adjustment that has been made and shall be    encoded as \&quot;+1\&quot; or \&quot;+2\&quot; for a +1 or +2 hours adjustment.   The example is for 8 hours behind UTC, +1 hour adjustment for Daylight Saving Time.  | [optional] 
**serving_plmn** | [**plmn_id_nid_t**](plmn_id_nid.md) \* |  | [optional] 
**rat_type** | **rat_type_t \*** |  | [optional] 
**rat_types** | [**list_t**](rat_type.md) \* |  | [optional] 
**group_ids** | **list_t \*** |  | [optional] 
**serv_area_res** | [**service_area_restriction_t**](service_area_restriction.md) \* |  | [optional] 
**wl_serv_area_res** | [**wireline_service_area_restriction_t**](wireline_service_area_restriction.md) \* |  | [optional] 
**rfsp** | **int** | Unsigned integer representing the \&quot;Subscriber Profile ID for RAT/Frequency Priority\&quot;  as specified in 3GPP TS 36.413.  | [optional] 
**ue_ambr** | [**ambr_t**](ambr.md) \* |  | [optional] 
**ue_slice_mbrs** | [**list_t**](ue_slice_mbr.md) \* | The subscribed UE Slice-MBR for each subscribed S-NSSAI of the home PLMN mapping  to a S-NSSAI of the serving PLMN Shall be provided when available.  | [optional] 
**allowed_snssais** | [**list_t**](snssai.md) \* | array of allowed S-NSSAIs for the 3GPP access. | [optional] 
**target_snssais** | [**list_t**](snssai.md) \* | array of target S-NSSAIs. | [optional] 
**mapping_snssais** | [**list_t**](mapping_of_snssai.md) \* | mapping of each S-NSSAI of the Allowed NSSAI to the corresponding S-NSSAI of the HPLMN.   | [optional] 
**n3g_allowed_snssais** | [**list_t**](snssai.md) \* | array of allowed S-NSSAIs for the Non-3GPP access. | [optional] 
**guami** | [**guami_t**](guami.md) \* |  | [optional] 
**service_name** | **char \*** |  | [optional] 
**trace_req** | [**trace_data_t**](trace_data.md) \* |  | [optional] 
**nwdaf_datas** | [**list_t**](nwdaf_data.md) \* |  | [optional] 
**supp_feat** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


