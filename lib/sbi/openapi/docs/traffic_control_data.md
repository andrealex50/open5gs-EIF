# traffic_control_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**tc_id** | **char \*** | Univocally identifies the traffic control policy data within a PDU session. | 
**flow_status** | **flow_status_t \*** |  | [optional] 
**redirect_info** | [**redirect_information_t**](redirect_information.md) \* |  | [optional] 
**add_redirect_info** | [**list_t**](redirect_information.md) \* |  | [optional] 
**mute_notif** | **int** | Indicates whether applicat&#39;on&#39;s start or stop notification is to be muted. | [optional] 
**traffic_steering_pol_id_dl** | **char \*** | Reference to a pre-configured traffic steering policy for downlink traffic at the SMF. | [optional] 
**traffic_steering_pol_id_ul** | **char \*** | Reference to a pre-configured traffic steering policy for uplink traffic at the SMF. | [optional] 
**route_to_locs** | [**list_t**](route_to_location.md) \* | A list of location which the traffic shall be routed to for the AF request | [optional] 
**max_allowed_up_lat** | **int** | Unsigned Integer, i.e. only value 0 and integers above 0 are permissible with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**eas_ip_replace_infos** | [**list_t**](eas_ip_replacement_info.md) \* | Contains EAS IP replacement information. | [optional] 
**traff_corre_ind** | **int** |  | [optional] 
**sim_conn_ind** | **int** | Indicates whether simultaneous connectivity should be temporarily maintained for the source and target PSA. | [optional] 
**sim_conn_term** | **int** | indicating a time in seconds. | [optional] 
**up_path_chg_event** | [**up_path_chg_event_t**](up_path_chg_event.md) \* |  | [optional] 
**steer_fun** | **steering_functionality_t \*** |  | [optional] 
**steer_mode_dl** | [**steering_mode_t**](steering_mode.md) \* |  | [optional] 
**steer_mode_ul** | [**steering_mode_t**](steering_mode.md) \* |  | [optional] 
**mul_acc_ctrl** | **npcf_multicast_access_control_t \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


