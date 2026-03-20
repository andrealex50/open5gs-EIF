# requested_usage_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ref_um_ids** | **list_t \*** | An array of usage monitoring data id references to the usage monitoring data instances for which the PCF is requesting a usage report. This attribute shall only be provided when allUmIds is not set to true.  | [optional] 
**all_um_ids** | **int** | This boolean indicates whether requested usage data applies to all usage monitoring data instances. When it&#39;s not included, it means requested usage data shall only apply to the usage monitoring data instances referenced by the refUmIds attribute.  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


