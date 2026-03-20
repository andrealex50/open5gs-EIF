# event_subscription_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**any_slice** | **int** | FALSE represents not applicable for all slices. TRUE represents applicable for all slices.  | [optional] 
**app_ids** | **list_t \*** | Identification(s) of application to which the subscription applies. | [optional] 
**dnns** | **list_t \*** | Identification(s) of DNN to which the subscription applies. | [optional] 
**dnais** | **list_t \*** |  | [optional] 
**event** | [**nwdaf_event_t**](nwdaf_event.md) \* |  | 
**extra_report_req** | [**event_reporting_requirement_t**](event_reporting_requirement.md) \* |  | [optional] 
**ladn_dnns** | **list_t \*** | Identification(s) of LADN DNN to indicate the LADN service area as the AOI. | [optional] 
**load_level_threshold** | **int** | Indicates that the NWDAF shall report the corresponding network slice load level to the NF  service consumer where the load level of the network slice identified by snssais is  reached.  | [optional] 
**notification_method** | [**notification_method_t**](notification_method.md) \* |  | [optional] 
**matching_dir** | [**matching_direction_t**](matching_direction.md) \* |  | [optional] 
**nf_load_lvl_thds** | [**list_t**](threshold_level.md) \* | Shall be supplied in order to start reporting when an average load level is reached.  | [optional] 
**nf_instance_ids** | **list_t \*** |  | [optional] 
**nf_set_ids** | **list_t \*** |  | [optional] 
**nf_types** | [**list_t**](nf_type.md) \* |  | [optional] 
**network_area** | [**network_area_info_t**](network_area_info.md) \* |  | [optional] 
**visited_areas** | [**list_t**](network_area_info.md) \* |  | [optional] 
**max_top_app_ul_nbr** | **int** | Unsigned Integer, i.e. only value 0 and integers above 0 are permissible. | [optional] 
**max_top_app_dl_nbr** | **int** | Unsigned Integer, i.e. only value 0 and integers above 0 are permissible. | [optional] 
**nsi_id_infos** | [**list_t**](nsi_id_info.md) \* |  | [optional] 
**nsi_level_thrds** | **list_t \*** |  | [optional] 
**qos_requ** | [**qos_requirement_t**](qos_requirement.md) \* |  | [optional] 
**qos_flow_ret_thds** | [**list_t**](retainability_threshold.md) \* |  | [optional] 
**ran_ue_throu_thds** | **list_t \*** |  | [optional] 
**repetition_period** | **int** | indicating a time in seconds. | [optional] 
**snssaia** | [**list_t**](snssai.md) \* | Identification(s) of network slice to which the subscription applies. It corresponds to  snssais in the data model definition of 3GPP TS 29.520.   | [optional] 
**tgt_ue** | [**target_ue_information_t**](target_ue_information.md) \* |  | [optional] 
**cong_thresholds** | [**list_t**](threshold_level.md) \* |  | [optional] 
**nw_perf_requs** | [**list_t**](network_perf_requirement.md) \* |  | [optional] 
**bw_requs** | [**list_t**](bw_requirement.md) \* |  | [optional] 
**excep_requs** | [**list_t**](exception.md) \* |  | [optional] 
**expt_ana_type** | [**expected_analytics_type_t**](expected_analytics_type.md) \* |  | [optional] 
**expt_ue_behav** | [**expected_ue_behaviour_data_t**](expected_ue_behaviour_data.md) \* |  | [optional] 
**rat_freqs** | [**list_t**](rat_freq_information.md) \* |  | [optional] 
**list_of_ana_subsets** | [**list_t**](analytics_subset.md) \* |  | [optional] 
**disper_reqs** | [**list_t**](dispersion_requirement.md) \* |  | [optional] 
**red_trans_reqs** | [**list_t**](redundant_transmission_exp_req.md) \* |  | [optional] 
**wlan_reqs** | [**list_t**](wlan_performance_req.md) \* |  | [optional] 
**upf_info** | [**upf_information_t**](upf_information.md) \* |  | [optional] 
**app_server_addrs** | [**list_t**](addr_fqdn.md) \* |  | [optional] 
**dn_perf_reqs** | [**list_t**](dn_performance_req.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


