# policy_data_change_notification_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**am_policy_data** | [**am_policy_data_t**](am_policy_data.md) \* |  | [optional] 
**ue_policy_set** | [**ue_policy_set_t**](ue_policy_set.md) \* |  | [optional] 
**plmn_ue_policy_set** | [**ue_policy_set_t**](ue_policy_set.md) \* |  | [optional] 
**sm_policy_data** | [**sm_policy_data_t**](sm_policy_data.md) \* |  | [optional] 
**usage_mon_data** | [**usage_mon_data_t**](usage_mon_data.md) \* |  | [optional] 
**sponsor_connectivity_data** | [**sponsor_connectivity_data_t**](sponsor_connectivity_data.md) \* |  | [optional] 
**bdt_data** | [**bdt_data_t**](bdt_data.md) \* |  | [optional] 
**op_spec_data** | [**operator_specific_data_container_t**](operator_specific_data_container.md) \* |  | [optional] 
**op_spec_data_map** | **list_t*** | Operator Specific Data resource data, if changed and notification was requested. The key of the map is operator specific data element name and the value is the operator specific data of the UE.  | [optional] 
**ue_id** | **char \*** | String represents the SUPI or GPSI | [optional] 
**sponsor_id** | **char \*** |  | [optional] 
**bdt_ref_id** | **char \*** | string identifying a BDT Reference ID as defined in clause 5.3.3 of 3GPP TS 29.154. | [optional] 
**usage_mon_id** | **char \*** |  | [optional] 
**plmn_id** | [**plmn_id_1_t**](plmn_id_1.md) \* |  | [optional] 
**del_resources** | **list_t \*** |  | [optional] 
**notif_id** | **char \*** |  | [optional] 
**reported_fragments** | [**list_t**](notification_item.md) \* |  | [optional] 
**slice_policy_data** | [**slice_policy_data_t**](slice_policy_data.md) \* |  | [optional] 
**snssai** | [**snssai_t**](snssai.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


