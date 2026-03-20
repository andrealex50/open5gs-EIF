# subscription_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**nf_status_notification_uri** | **char \*** |  | 
**req_nf_instance_id** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**subscr_cond** | [**subscr_cond_t**](subscr_cond.md) \* |  | [optional] 
**subscription_id** | **char \*** |  | [optional] [readonly] 
**validity_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**req_notif_events** | [**list_t**](notification_event_type.md) \* |  | [optional] 
**plmn_id** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**nid** | **char \*** | This represents the Network Identifier, which together with a PLMN ID is used to identify an SNPN (see 3GPP TS 23.003 and 3GPP TS 23.501 clause 5.30.2.1).   | [optional] 
**notif_condition** | [**notif_condition_t**](notif_condition.md) \* |  | [optional] 
**req_nf_type** | **nf_type_t \*** |  | [optional] 
**req_nf_fqdn** | **char \*** | Fully Qualified Domain Name | [optional] 
**req_snssais** | [**list_t**](ext_snssai.md) \* |  | [optional] 
**req_per_plmn_snssais** | [**list_t**](plmn_snssai.md) \* |  | [optional] 
**req_plmn_list** | [**list_t**](plmn_id.md) \* |  | [optional] 
**req_snpn_list** | [**list_t**](plmn_id_nid.md) \* |  | [optional] 
**serving_scope** | **list_t \*** |  | [optional] 
**requester_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**nrf_supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**hnrf_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**onboarding_capability** | **int** |  | [optional] [default to false]
**target_hni** | **char \*** | Fully Qualified Domain Name | [optional] 
**preferred_locality** | **char \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


