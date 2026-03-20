# policy_association_update_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**notification_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**alt_notif_ipv4_addrs** | **list_t \*** | Alternate or backup IPv4 Address(es) where to send Notifications. | [optional] 
**alt_notif_ipv6_addrs** | **list_t \*** | Alternate or backup IPv6 Address(es) where to send Notifications. | [optional] 
**alt_notif_fqdns** | **list_t \*** | Alternate or backup FQDN(s) where to send Notifications. | [optional] 
**triggers** | [**list_t**](request_trigger.md) \* | Request Triggers that the NF service consumer observes. | [optional] 
**serv_area_res** | [**service_area_restriction_t**](service_area_restriction.md) \* |  | [optional] 
**wl_serv_area_res** | [**wireline_service_area_restriction_t**](wireline_service_area_restriction.md) \* |  | [optional] 
**rfsp** | **int** | Unsigned integer representing the \&quot;Subscriber Profile ID for RAT/Frequency Priority\&quot;  as specified in 3GPP TS 36.413.  | [optional] 
**smf_sel_info** | [**smf_selection_data_t**](smf_selection_data.md) \* |  | [optional] 
**ue_ambr** | [**ambr_t**](ambr.md) \* |  | [optional] 
**ue_slice_mbrs** | [**list_t**](ue_slice_mbr.md) \* | The subscribed UE-Slice-MBR for each subscribed S-NSSAI of the home PLMN mapping to a S-NSSAI of the serving PLMN Shall be provided for the \&quot;UE_SLICE_MBR_CH\&quot; policy control request trigger.  | [optional] 
**pra_statuses** | **list_t*** | Contains the UE presence status for tracking area for which changes of the UE presence occurred. The praId attribute within the PresenceInfo data type is the key of the map.  | [optional] 
**user_loc** | [**user_location_t**](user_location.md) \* |  | [optional] 
**allowed_snssais** | [**list_t**](snssai.md) \* | array of allowed S-NSSAIs for the 3GPP access. | [optional] 
**target_snssais** | [**list_t**](snssai.md) \* | array of target S-NSSAIs. | [optional] 
**mapping_snssais** | [**list_t**](mapping_of_snssai.md) \* | mapping of each S-NSSAI of the Allowed NSSAI to the corresponding S-NSSAI of the HPLMN.   | [optional] 
**access_types** | [**list_t**](access_type.md) \* |  | [optional] 
**rat_types** | [**list_t**](rat_type.md) \* |  | [optional] 
**n3g_allowed_snssais** | [**list_t**](snssai.md) \* | array of allowed S-NSSAIs for the Non-3GPP access. | [optional] 
**trace_req** | [**trace_data_t**](trace_data.md) \* |  | [optional] 
**guami** | [**guami_t**](guami.md) \* |  | [optional] 
**nwdaf_datas** | [**list_t**](nwdaf_data.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


