# policy_update_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**resource_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | 
**triggers** | [**list_t**](request_trigger.md) \* | Request Triggers that the PCF subscribes. | [optional] 
**serv_area_res** | [**service_area_restriction_t**](service_area_restriction.md) \* |  | [optional] 
**wl_serv_area_res** | [**wireline_service_area_restriction_t**](wireline_service_area_restriction.md) \* |  | [optional] 
**rfsp** | **int** | Unsigned integer representing the \&quot;Subscriber Profile ID for RAT/Frequency Priority\&quot;  as specified in 3GPP TS 36.413.  | [optional] 
**target_rfsp** | **int** | Unsigned integer representing the \&quot;Subscriber Profile ID for RAT/Frequency Priority\&quot;  as specified in 3GPP TS 36.413.  | [optional] 
**smf_sel_info** | [**smf_selection_data_t**](smf_selection_data.md) \* |  | [optional] 
**ue_ambr** | [**ambr_t**](ambr.md) \* |  | [optional] 
**ue_slice_mbrs** | [**list_t**](ue_slice_mbr.md) \* | One or more UE-Slice-MBR(s) for S-NSSAI(s) of serving PLMN the allowed NSSAI as part of the AMF Access and Mobility Policy as determined by the PCF.  | [optional] 
**pras** | **list_t*** | Contains the presence reporting area(s) for which reporting was requested. The praId attribute within the PresenceInfo data type is the key of the map.  | [optional] 
**pcf_ue_info** | [**pcf_ue_callback_info_t**](pcf_ue_callback_info.md) \* |  | [optional] 
**match_pdus** | [**list_t**](pdu_session_info.md) \* |  | [optional] 
**as_time_dis_param** | [**as_time_distribution_param_t**](as_time_distribution_param.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


