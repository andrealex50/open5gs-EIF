# sm_policy_delete_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**user_location_info** | [**user_location_t**](user_location.md) \* |  | [optional] 
**ue_time_zone** | **char \*** | String with format \&quot;time-numoffset\&quot; optionally appended by \&quot;daylightSavingTime\&quot;, where  - \&quot;time-numoffset\&quot; shall represent the time zone adjusted for daylight saving time and be    encoded as time-numoffset as defined in clause 5.6 of IETF RFC 3339;  - \&quot;daylightSavingTime\&quot; shall represent the adjustment that has been made and shall be    encoded as \&quot;+1\&quot; or \&quot;+2\&quot; for a +1 or +2 hours adjustment.   The example is for 8 hours behind UTC, +1 hour adjustment for Daylight Saving Time.  | [optional] 
**serving_network** | [**plmn_id_nid_t**](plmn_id_nid.md) \* |  | [optional] 
**user_location_info_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**ran_nas_rel_causes** | [**list_t**](ran_nas_rel_cause.md) \* | Contains the RAN and/or NAS release cause. | [optional] 
**accu_usage_reports** | [**list_t**](accu_usage_report.md) \* | Contains the usage report | [optional] 
**pdu_sess_rel_cause** | **pdu_session_rel_cause_t \*** |  | [optional] 
**qos_mon_reports** | [**list_t**](qos_monitoring_report.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


