# af_routing_requirement_rm_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**app_reloc** | **int** |  | [optional] 
**route_to_locs** | [**list_t**](route_to_location.md) \* |  | [optional] 
**sp_val** | [**spatial_validity_rm_t**](spatial_validity_rm.md) \* |  | [optional] 
**temp_vals** | [**list_t**](temporal_validity.md) \* |  | [optional] 
**up_path_chg_sub** | [**up_path_chg_event_t**](up_path_chg_event.md) \* |  | [optional] 
**addr_preser_ind** | **int** |  | [optional] 
**sim_conn_ind** | **int** | Indicates whether simultaneous connectivity should be temporarily maintained for the source and target PSA. | [optional] 
**sim_conn_term** | **int** | indicating a time in seconds with OpenAPI defined &#39;nullable: true&#39; property. | [optional] 
**eas_ip_replace_infos** | [**list_t**](eas_ip_replacement_info.md) \* | Contains EAS IP replacement information. | [optional] 
**eas_redis_ind** | **int** | Indicates the EAS rediscovery is required. | [optional] 
**max_allowed_up_lat** | **int** | Unsigned Integer, i.e. only value 0 and integers above 0 are permissible with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


