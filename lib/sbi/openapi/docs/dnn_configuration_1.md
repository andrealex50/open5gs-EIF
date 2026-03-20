# dnn_configuration_1_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pdu_session_types** | [**pdu_session_types_1_t**](pdu_session_types_1.md) \* |  | 
**ssc_modes** | [**ssc_modes_1_t**](ssc_modes_1.md) \* |  | 
**iwk_eps_ind** | **int** |  | [optional] 
**_5g_qos_profile** | [**subscribed_default_qos_1_t**](subscribed_default_qos_1.md) \* |  | [optional] 
**session_ambr** | [**ambr_1_t**](ambr_1.md) \* |  | [optional] 
**_3gpp_charging_characteristics** | **char \*** |  | [optional] 
**static_ip_address** | [**list_t**](ip_address_1.md) \* |  | [optional] 
**up_security** | [**up_security_1_t**](up_security_1.md) \* |  | [optional] 
**pdu_session_continuity_ind** | **pdu_session_continuity_ind_t \*** |  | [optional] 
**nidd_nef_id** | **char \*** | Identity of the NEF | [optional] 
**nidd_info** | [**nidd_information_1_t**](nidd_information_1.md) \* |  | [optional] 
**redundant_session_allowed** | **int** |  | [optional] 
**acs_info** | [**acs_info_1_t**](acs_info_1.md) \* |  | [optional] 
**ipv4_frame_route_list** | [**list_t**](frame_route_info_1.md) \* |  | [optional] 
**ipv6_frame_route_list** | [**list_t**](frame_route_info_1.md) \* |  | [optional] 
**atsss_allowed** | **int** |  | [optional] [default to false]
**secondary_auth** | **int** |  | [optional] 
**uav_secondary_auth** | **int** |  | [optional] [default to false]
**dn_aaa_ip_address_allocation** | **int** |  | [optional] 
**dn_aaa_address** | [**ip_address_1_t**](ip_address_1.md) \* |  | [optional] 
**additional_dn_aaa_addresses** | [**list_t**](ip_address_1.md) \* |  | [optional] 
**dn_aaa_fqdn** | **char \*** | Fully Qualified Domain Name | [optional] 
**iptv_acc_ctrl_info** | **char \*** |  | [optional] 
**ipv4_index** | [**ip_index_t**](ip_index.md) \* |  | [optional] 
**ipv6_index** | [**ip_index_t**](ip_index.md) \* |  | [optional] 
**ecs_addr_config_info** | [**ecs_addr_config_info_1_t**](ecs_addr_config_info_1.md) \* |  | [optional] 
**additional_ecs_addr_config_infos** | [**list_t**](ecs_addr_config_info_1.md) \* |  | [optional] 
**shared_ecs_addr_config_info** | **char \*** |  | [optional] 
**additional_shared_ecs_addr_config_info_ids** | **list_t \*** |  | [optional] 
**eas_discovery_authorized** | **int** |  | [optional] [default to false]
**onboarding_ind** | **int** |  | [optional] [default to false]
**aerial_ue_ind** | **aerial_ue_indication_t \*** |  | [optional] 
**subscribed_max_ipv6_prefix_size** | **int** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


