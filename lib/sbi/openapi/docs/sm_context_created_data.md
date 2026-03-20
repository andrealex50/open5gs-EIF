# sm_context_created_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**h_smf_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**smf_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**pdu_session_id** | **int** | Unsigned integer identifying a PDU session, within the range 0 to 255, as specified in  clause 11.2.3.1b, bits 1 to 8, of 3GPP TS 24.007. If the PDU Session ID is allocated by the  Core Network for UEs not supporting N1 mode, reserved range 64 to 95 is used. PDU Session ID  within the reserved range is only visible in the Core Network.   | [optional] 
**s_nssai** | [**snssai_t**](snssai.md) \* |  | [optional] 
**up_cnx_state** | **up_cnx_state_t \*** |  | [optional] 
**n2_sm_info** | [**ref_to_binary_data_t**](ref_to_binary_data.md) \* |  | [optional] 
**n2_sm_info_type** | **n2_sm_info_type_t \*** |  | [optional] 
**allocated_ebi_list** | [**list_t**](ebi_arp_mapping.md) \* |  | [optional] 
**ho_state** | **ho_state_t \*** |  | [optional] 
**gpsi** | **char \*** | String identifying a Gpsi shall contain either an External Id or an MSISDN.  It shall be formatted as follows -External Identifier&#x3D; \&quot;extid-&#39;extid&#39;, where &#39;extid&#39;  shall be formatted according to clause 19.7.2 of 3GPP TS 23.003 that describes an  External Identifier.   | [optional] 
**smf_service_instance_id** | **char \*** |  | [optional] 
**recovery_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**selected_smf_id** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**selected_old_smf_id** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**inter_plmn_api_root** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


