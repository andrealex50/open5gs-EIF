# access_and_mobility_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**location** | [**user_location_t**](user_location.md) \* |  | [optional] 
**location_ts** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**time_zone** | **char \*** | String with format \&quot;time-numoffset\&quot; optionally appended by \&quot;daylightSavingTime\&quot;, where  - \&quot;time-numoffset\&quot; shall represent the time zone adjusted for daylight saving time and be    encoded as time-numoffset as defined in clause 5.6 of IETF RFC 3339;  - \&quot;daylightSavingTime\&quot; shall represent the adjustment that has been made and shall be    encoded as \&quot;+1\&quot; or \&quot;+2\&quot; for a +1 or +2 hours adjustment.   The example is for 8 hours behind UTC, +1 hour adjustment for Daylight Saving Time.  | [optional] 
**time_zone_ts** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**access_type** | **access_type_t \*** |  | [optional] 
**reg_states** | [**list_t**](rm_info.md) \* |  | [optional] 
**reg_states_ts** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**conn_states** | [**list_t**](cm_info.md) \* |  | [optional] 
**conn_states_ts** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**reachability_status** | [**ue_reachability_t**](ue_reachability.md) \* |  | [optional] 
**reachability_status_ts** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**sms_over_nas_status** | **sms_support_t \*** |  | [optional] 
**sms_over_nas_status_ts** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**roaming_status** | **int** | True  The serving PLMN of the UE is different from the HPLMN of the UE; False The serving PLMN of the UE is the HPLMN of the UE.  | [optional] 
**roaming_status_ts** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**current_plmn** | [**plmn_id_1_t**](plmn_id_1.md) \* |  | [optional] 
**current_plmn_ts** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**rat_type** | [**list_t**](rat_type.md) \* |  | [optional] 
**rat_types_ts** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**supp_feat** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**reset_ids** | **list_t \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


