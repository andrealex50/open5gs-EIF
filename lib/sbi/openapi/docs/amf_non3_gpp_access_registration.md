# amf_non3_gpp_access_registration_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**amf_instance_id** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | 
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**purge_flag** | **int** |  | [optional] 
**pei** | **char \*** | String representing a Permanent Equipment Identifier that may contain - an IMEI or IMEISV, as  specified in clause 6.2 of 3GPP TS 23.003; a MAC address for a 5G-RG or FN-RG via  wireline  access, with an indication that this address cannot be trusted for regulatory purpose if this  address cannot be used as an Equipment Identifier of the FN-RG, as specified in clause 4.7.7  of 3GPP TS23.316. Examples are imei-012345678901234 or imeisv-0123456789012345.   | [optional] 
**ims_vo_ps** | **ims_vo_ps_t \*** |  | 
**dereg_callback_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | 
**amf_service_name_dereg** | **char \*** |  | [optional] 
**pcscf_restoration_callback_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**amf_service_name_pcscf_rest** | **char \*** |  | [optional] 
**guami** | [**guami_t**](guami.md) \* |  | 
**backup_amf_info** | [**list_t**](backup_amf_info.md) \* |  | [optional] 
**rat_type** | **rat_type_t \*** |  | 
**urrp_indicator** | **int** |  | [optional] 
**amf_ee_subscription_id** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**registration_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**vgmlc_address** | [**vgmlc_address_t**](vgmlc_address.md) \* |  | [optional] 
**context_info** | [**context_info_t**](context_info.md) \* |  | [optional] 
**no_ee_subscription_ind** | **int** |  | [optional] 
**supi** | **char \*** | String identifying a Supi that shall contain either an IMSI, a network specific identifier, a Global Cable Identifier (GCI) or a Global Line Identifier (GLI) as specified in clause  2.2A of 3GPP TS 23.003. It shall be formatted as follows  - for an IMSI \&quot;imsi-&lt;imsi&gt;\&quot;, where &lt;imsi&gt; shall be formatted according to clause 2.2    of 3GPP TS 23.003 that describes an IMSI.  - for a network specific identifier \&quot;nai-&lt;nai&gt;, where &lt;nai&gt; shall be formatted    according to clause 28.7.2 of 3GPP TS 23.003 that describes an NAI.  - for a GCI \&quot;gci-&lt;gci&gt;\&quot;, where &lt;gci&gt; shall be formatted according to clause 28.15.2    of 3GPP TS 23.003.  - for a GLI \&quot;gli-&lt;gli&gt;\&quot;, where &lt;gli&gt; shall be formatted according to clause 28.16.2 of    3GPP TS 23.003.To enable that the value is used as part of an URI, the string shall    only contain characters allowed according to the \&quot;lower-with-hyphen\&quot; naming convention    defined in 3GPP TS 29.501.  | [optional] 
**re_registration_required** | **int** |  | [optional] 
**admin_dereg_sub_withdrawn** | **int** |  | [optional] 
**data_restoration_callback_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**reset_ids** | **list_t \*** |  | [optional] 
**disaster_roaming_ind** | **int** |  | [optional] [default to false]
**sor_snpn_si_supported** | **int** |  | [optional] [default to false]
**udr_restart_ind** | **int** |  | [optional] [default to false]
**last_synchronization_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


