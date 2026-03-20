# event_notification_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**event** | [**nwdaf_event_t**](nwdaf_event.md) \* |  | 
**start** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**expiry** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**time_stamp_gen** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**fail_notify_code** | [**nwdaf_failure_code_t**](nwdaf_failure_code.md) \* |  | [optional] 
**rv_wait_time** | **int** | indicating a time in seconds. | [optional] 
**ana_meta_info** | [**analytics_metadata_info_t**](analytics_metadata_info.md) \* |  | [optional] 
**nf_load_level_infos** | [**list_t**](nf_load_level_information.md) \* |  | [optional] 
**nsi_load_level_infos** | [**list_t**](nsi_load_level_info.md) \* |  | [optional] 
**slice_load_level_info** | [**slice_load_level_information_t**](slice_load_level_information.md) \* |  | [optional] 
**svc_exps** | [**list_t**](service_experience_info.md) \* |  | [optional] 
**qos_sustain_infos** | [**list_t**](qos_sustainability_info.md) \* |  | [optional] 
**ue_comms** | [**list_t**](ue_communication.md) \* |  | [optional] 
**ue_mobs** | [**list_t**](ue_mobility.md) \* |  | [optional] 
**user_data_cong_infos** | [**list_t**](user_data_congestion_info.md) \* |  | [optional] 
**abnor_behavrs** | [**list_t**](abnormal_behaviour.md) \* |  | [optional] 
**nw_perfs** | [**list_t**](network_perf_info.md) \* |  | [optional] 
**dn_perf_infos** | [**list_t**](dn_perf_info.md) \* |  | [optional] 
**disper_infos** | [**list_t**](dispersion_info.md) \* |  | [optional] 
**red_trans_infos** | [**list_t**](redundant_transmission_exp_info.md) \* |  | [optional] 
**wlan_infos** | [**list_t**](wlan_performance_info.md) \* |  | [optional] 
**smcc_exps** | [**list_t**](smcce_info.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


