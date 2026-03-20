# events_subsc_put_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**events** | [**list_t**](af_event_subscription.md) \* |  | 
**notif_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**req_qos_mon_params** | [**list_t**](requested_qos_monitoring_parameter.md) \* |  | [optional] 
**qos_mon** | [**qos_monitoring_information_t**](qos_monitoring_information.md) \* |  | [optional] 
**req_anis** | [**list_t**](required_access_info.md) \* |  | [optional] 
**usg_thres** | [**usage_threshold_t**](usage_threshold.md) \* |  | [optional] 
**notif_corre_id** | **char \*** |  | [optional] 
**af_app_ids** | **list_t \*** |  | [optional] 
**direct_notif_ind** | **int** |  | [optional] 
**ad_reports** | [**list_t**](app_detection_report.md) \* | Includes the detected application report. | [optional] 
**access_type** | **access_type_t \*** |  | [optional] 
**add_access_info** | [**additional_access_info_t**](additional_access_info.md) \* |  | [optional] 
**rel_access_info** | [**additional_access_info_t**](additional_access_info.md) \* |  | [optional] 
**an_charg_addr** | [**acc_net_charging_address_t**](acc_net_charging_address.md) \* |  | [optional] 
**an_charg_ids** | [**list_t**](access_net_charging_identifier.md) \* |  | [optional] 
**an_gw_addr** | [**an_gw_address_t**](an_gw_address.md) \* |  | [optional] 
**ev_subs_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | 
**ev_notifs** | [**list_t**](af_event_notification.md) \* |  | 
**failed_resourc_alloc_reports** | [**list_t**](resources_allocation_info.md) \* |  | [optional] 
**succ_resourc_alloc_reports** | [**list_t**](resources_allocation_info.md) \* |  | [optional] 
**no_net_loc_supp** | **net_loc_access_support_t \*** |  | [optional] 
**out_of_cred_reports** | [**list_t**](out_of_credit_information.md) \* |  | [optional] 
**plmn_id** | [**plmn_id_nid_t**](plmn_id_nid.md) \* |  | [optional] 
**qnc_reports** | [**list_t**](qos_notification_control_info.md) \* |  | [optional] 
**qos_mon_reports** | [**list_t**](qos_monitoring_report.md) \* |  | [optional] 
**ran_nas_rel_causes** | [**list_t**](ran_nas_rel_cause.md) \* | Contains the RAN and/or NAS release cause. | [optional] 
**rat_type** | **rat_type_t \*** |  | [optional] 
**sat_backhaul_category** | **satellite_backhaul_category_t \*** |  | [optional] 
**ue_loc** | [**user_location_t**](user_location.md) \* |  | [optional] 
**ue_loc_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**ue_time_zone** | **char \*** | String with format \&quot;time-numoffset\&quot; optionally appended by \&quot;daylightSavingTime\&quot;, where  - \&quot;time-numoffset\&quot; shall represent the time zone adjusted for daylight saving time and be    encoded as time-numoffset as defined in clause 5.6 of IETF RFC 3339;  - \&quot;daylightSavingTime\&quot; shall represent the adjustment that has been made and shall be    encoded as \&quot;+1\&quot; or \&quot;+2\&quot; for a +1 or +2 hours adjustment.   The example is for 8 hours behind UTC, +1 hour adjustment for Daylight Saving Time.  | [optional] 
**usg_rep** | [**accumulated_usage_t**](accumulated_usage.md) \* |  | [optional] 
**tsn_bridge_man_cont** | [**bridge_management_container_t**](bridge_management_container.md) \* |  | [optional] 
**tsn_port_man_cont_dstt** | [**port_management_container_t**](port_management_container.md) \* |  | [optional] 
**tsn_port_man_cont_nwtts** | [**list_t**](port_management_container.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


