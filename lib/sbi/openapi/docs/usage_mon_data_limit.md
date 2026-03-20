# usage_mon_data_limit_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**limit_id** | **char \*** |  | 
**scopes** | **list_t*** | Identifies the SNSSAI and DNN combinations to which the usage monitoring data limit applies. The S-NSSAI is the key of the map.  | [optional] 
**um_level** | [**usage_mon_level_t**](usage_mon_level.md) \* |  | [optional] 
**start_date** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**end_date** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**usage_limit** | [**usage_threshold_t**](usage_threshold.md) \* |  | [optional] 
**reset_period** | [**time_period_t**](time_period.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


