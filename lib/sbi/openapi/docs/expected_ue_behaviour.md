# expected_ue_behaviour_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**af_instance_id** | **char \*** |  | 
**reference_id** | **int** |  | 
**stationary_indication** | [**stationary_indication_rm_t**](stationary_indication_rm.md) \* |  | [optional] 
**communication_duration_time** | **int** | indicating a time in seconds with OpenAPI defined &#39;nullable: true&#39; property. | [optional] 
**scheduled_communication_type** | [**scheduled_communication_type_rm_t**](scheduled_communication_type_rm.md) \* |  | [optional] 
**periodic_time** | **int** | indicating a time in seconds with OpenAPI defined &#39;nullable: true&#39; property. | [optional] 
**scheduled_communication_time** | [**scheduled_communication_time_rm_t**](scheduled_communication_time_rm.md) \* |  | [optional] 
**expected_umts** | [**list_t**](location_area.md) \* | Identifies the UE&#39;s expected geographical movement. The attribute is only applicable in 5G. | [optional] 
**traffic_profile** | [**traffic_profile_rm_t**](traffic_profile_rm.md) \* |  | [optional] 
**battery_indication** | [**battery_indication_rm_t**](battery_indication_rm.md) \* |  | [optional] 
**validity_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**mtc_provider_information** | **char \*** | String uniquely identifying MTC provider information. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


