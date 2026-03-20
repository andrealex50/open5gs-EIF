# app_session_context_update_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**af_app_id** | **char \*** | Contains an AF application identifier. | [optional] 
**af_rout_req** | [**af_routing_requirement_rm_t**](af_routing_requirement_rm.md) \* |  | [optional] 
**asp_id** | **char \*** | Contains an identity of an application service provider. | [optional] 
**bdt_ref_id** | **char \*** | string identifying a BDT Reference ID as defined in clause 5.3.3 of 3GPP TS 29.154. | [optional] 
**ev_subsc** | [**events_subsc_req_data_rm_t**](events_subsc_req_data_rm.md) \* |  | [optional] 
**mcptt_id** | **char \*** | Indication of MCPTT service request. | [optional] 
**mc_video_id** | **char \*** | Indication of modification of MCVideo service. | [optional] 
**med_components** | **list_t*** | Contains media component information. The key of the map is the medCompN attribute. | [optional] 
**mps_action** | **mps_action_t \*** |  | [optional] 
**mps_id** | **char \*** | Indication of MPS service request. | [optional] 
**mcs_id** | **char \*** | Indication of MCS service request. | [optional] 
**preempt_control_info** | [**preemption_control_information_rm_t**](preemption_control_information_rm.md) \* |  | [optional] 
**res_prio** | **reserv_priority_t \*** |  | [optional] 
**serv_inf_status** | **service_info_status_t \*** |  | [optional] 
**sip_fork_ind** | **sip_forking_indication_t \*** |  | [optional] 
**spon_id** | **char \*** | Contains an identity of a sponsor. | [optional] 
**spon_status** | **sponsoring_status_t \*** |  | [optional] 
**tsn_bridge_man_cont** | [**bridge_management_container_t**](bridge_management_container.md) \* |  | [optional] 
**tsn_port_man_cont_dstt** | [**port_management_container_t**](port_management_container.md) \* |  | [optional] 
**tsn_port_man_cont_nwtts** | [**list_t**](port_management_container.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


