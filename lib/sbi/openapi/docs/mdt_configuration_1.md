# mdt_configuration_1_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**job_type** | **job_type_t \*** |  | 
**report_type** | **report_type_mdt_t \*** |  | [optional] 
**area_scope** | [**area_scope_t**](area_scope.md) \* |  | [optional] 
**measurement_lte_list** | [**list_t**](measurement_lte_for_mdt.md) \* |  | [optional] 
**measurement_nr_list** | [**list_t**](measurement_nr_for_mdt.md) \* |  | [optional] 
**sensor_measurement_list** | [**list_t**](sensor_measurement.md) \* |  | [optional] 
**reporting_trigger_list** | [**list_t**](reporting_trigger.md) \* |  | [optional] 
**report_interval** | **report_interval_mdt_t \*** |  | [optional] 
**report_interval_nr** | **report_interval_nr_mdt_t \*** |  | [optional] 
**report_amount** | **report_amount_mdt_t \*** |  | [optional] 
**event_threshold_rsrp** | **int** | This IE shall be present if the report trigger parameter is configured for A2 event reporting or A2 event triggered periodic reporting and the job type parameter is configured for Immediate MDT or combined Immediate MDT and Trace in LTE. When present, this IE shall indicate the Event Threshold for RSRP, and the value shall be between 0-97.  | [optional] 
**event_threshold_rsrp_nr** | **int** | This IE shall be present if the report trigger parameter is configured for A2 event reporting or A2 event triggered periodic reporting and the job type parameter is configured for Immediate MDT or combined Immediate MDT and Trace in NR. When present, this IE shall indicate the Event Threshold for RSRP, and the value shall be between 0-127.  | [optional] 
**event_threshold_rsrq** | **int** | This IE shall be present if the report trigger parameter is configured for A2 event reporting or A2 event triggered periodic reporting and the job type parameter is configured for Immediate MDT or combined Immediate MDT and Trace in LTE.When present, this IE shall indicate the Event Threshold for RSRQ, and the value shall be between 0-34.  | [optional] 
**event_threshold_rsrq_nr** | **int** | This IE shall be present if the report trigger parameter is configured for A2 event reporting or A2 event triggered periodic reporting and the job type parameter is configured for Immediate MDT or combined Immediate MDT and Trace in NR.When present, this IE shall indicate the Event Threshold for RSRQ, and the value shall be between 0-127.  | [optional] 
**event_list** | [**list_t**](event_for_mdt.md) \* |  | [optional] 
**logging_interval** | **logging_interval_mdt_t \*** |  | [optional] 
**logging_interval_nr** | **logging_interval_nr_mdt_t \*** |  | [optional] 
**logging_duration** | **logging_duration_mdt_t \*** |  | [optional] 
**logging_duration_nr** | **logging_duration_nr_mdt_t \*** |  | [optional] 
**positioning_method** | **positioning_method_mdt_t \*** |  | [optional] 
**add_positioning_method_list** | [**list_t**](positioning_method_mdt.md) \* |  | [optional] 
**collection_period_rmm_lte** | **collection_period_rmm_lte_mdt_t \*** |  | [optional] 
**collection_period_rmm_nr** | **collection_period_rmm_nr_mdt_t \*** |  | [optional] 
**measurement_period_lte** | **measurement_period_lte_mdt_t \*** |  | [optional] 
**mdt_allowed_plmn_id_list** | [**list_t**](plmn_id_1.md) \* |  | [optional] 
**mbsfn_area_list** | [**list_t**](mbsfn_area.md) \* |  | [optional] 
**inter_freq_target_list** | [**list_t**](inter_freq_target_info_1.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


