# shared_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**shared_data_id** | **char \*** |  | 
**shared_am_data** | [**access_and_mobility_subscription_data_t**](access_and_mobility_subscription_data.md) \* |  | [optional] 
**shared_sms_subs_data** | [**sms_subscription_data_t**](sms_subscription_data.md) \* |  | [optional] 
**shared_sms_mng_subs_data** | [**sms_management_subscription_data_t**](sms_management_subscription_data.md) \* |  | [optional] 
**shared_dnn_configurations** | **list_t*** | A map(list of key-value pairs) where Dnn, or optionally the Wildcard DNN, serves as key of DnnConfiguration | [optional] 
**shared_trace_data** | [**trace_data_t**](trace_data.md) \* |  | [optional] 
**shared_snssai_infos** | **list_t*** | A map(list of key-value pairs) where singleNssai serves as key of SnssaiInfo | [optional] 
**shared_vn_group_datas** | **list_t*** | A map(list of key-value pairs) where GroupId serves as key of VnGroupData | [optional] 
**treatment_instructions** | **list_t*** | A map(list of key-value pairs) where JSON pointer pointing to an attribute within the SharedData serves as key of SharedDataTreatmentInstruction | [optional] 
**shared_sm_subs_data** | [**session_management_subscription_data_t**](session_management_subscription_data.md) \* |  | [optional] 
**shared_ecs_addr_config_info** | [**ecs_addr_config_info_t**](ecs_addr_config_info.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


