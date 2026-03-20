# data_restoration_notification_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**last_replication_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**recovery_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**plmn_id** | [**plmn_id_t**](plmn_id.md) \* |  | [optional] 
**supi_ranges** | [**list_t**](supi_range.md) \* |  | [optional] 
**gpsi_ranges** | [**list_t**](identity_range.md) \* |  | [optional] 
**reset_ids** | **list_t \*** |  | [optional] 
**s_nssai_list** | [**list_t**](snssai.md) \* |  | [optional] 
**dnn_list** | **list_t \*** |  | [optional] 
**udm_group_id** | **char \*** | Identifier of a group of NFs. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


