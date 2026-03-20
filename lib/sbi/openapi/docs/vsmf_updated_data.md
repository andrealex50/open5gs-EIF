# vsmf_updated_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**qos_flows_add_mod_list** | [**list_t**](qos_flow_item.md) \* |  | [optional] 
**qos_flows_rel_list** | [**list_t**](qos_flow_item.md) \* |  | [optional] 
**qos_flows_failedto_add_mod_list** | [**list_t**](qos_flow_item.md) \* |  | [optional] 
**qos_flows_failedto_rel_list** | [**list_t**](qos_flow_item.md) \* |  | [optional] 
**n1_sm_info_from_ue** | [**ref_to_binary_data_t**](ref_to_binary_data.md) \* |  | [optional] 
**unknown_n1_sm_info** | [**ref_to_binary_data_t**](ref_to_binary_data.md) \* |  | [optional] 
**ue_location** | [**user_location_t**](user_location.md) \* |  | [optional] 
**ue_time_zone** | **char \*** | String with format \&quot;time-numoffset\&quot; optionally appended by \&quot;daylightSavingTime\&quot;, where  - \&quot;time-numoffset\&quot; shall represent the time zone adjusted for daylight saving time and be    encoded as time-numoffset as defined in clause 5.6 of IETF RFC 3339;  - \&quot;daylightSavingTime\&quot; shall represent the adjustment that has been made and shall be    encoded as \&quot;+1\&quot; or \&quot;+2\&quot; for a +1 or +2 hours adjustment.   The example is for 8 hours behind UTC, +1 hour adjustment for Daylight Saving Time.  | [optional] 
**add_ue_location** | [**user_location_t**](user_location.md) \* |  | [optional] 
**assigned_ebi_list** | [**list_t**](ebi_arp_mapping.md) \* |  | [optional] 
**failed_to_assign_ebi_list** | [**list_t**](arp.md) \* |  | [optional] 
**released_ebi_list** | **list_t \*** |  | [optional] 
**secondary_rat_usage_report** | [**list_t**](secondary_rat_usage_report.md) \* |  | [optional] 
**secondary_rat_usage_info** | [**list_t**](secondary_rat_usage_info.md) \* |  | [optional] 
**n4_info** | [**n4_information_t**](n4_information.md) \* |  | [optional] 
**n4_info_ext1** | [**n4_information_t**](n4_information.md) \* |  | [optional] 
**n4_info_ext2** | [**n4_information_t**](n4_information.md) \* |  | [optional] 
**n4_info_ext3** | [**n4_information_t**](n4_information.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


