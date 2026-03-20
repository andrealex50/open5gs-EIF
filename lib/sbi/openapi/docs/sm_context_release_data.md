# sm_context_release_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**cause** | **cause_t \*** |  | [optional] 
**ng_ap_cause** | [**ng_ap_cause_t**](ng_ap_cause.md) \* |  | [optional] 
**_5g_mm_cause_value** | **int** | Unsigned Integer, i.e. only value 0 and integers above 0 are permissible. | [optional] 
**ue_location** | [**user_location_t**](user_location.md) \* |  | [optional] 
**ue_time_zone** | **char \*** | String with format \&quot;time-numoffset\&quot; optionally appended by \&quot;daylightSavingTime\&quot;, where  - \&quot;time-numoffset\&quot; shall represent the time zone adjusted for daylight saving time and be    encoded as time-numoffset as defined in clause 5.6 of IETF RFC 3339;  - \&quot;daylightSavingTime\&quot; shall represent the adjustment that has been made and shall be    encoded as \&quot;+1\&quot; or \&quot;+2\&quot; for a +1 or +2 hours adjustment.   The example is for 8 hours behind UTC, +1 hour adjustment for Daylight Saving Time.  | [optional] 
**add_ue_location** | [**user_location_t**](user_location.md) \* |  | [optional] 
**vsmf_release_only** | **int** |  | [optional] [default to false]
**n2_sm_info** | [**ref_to_binary_data_t**](ref_to_binary_data.md) \* |  | [optional] 
**n2_sm_info_type** | **n2_sm_info_type_t \*** |  | [optional] 
**ismf_release_only** | **int** |  | [optional] [default to false]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


