# monitoring_configuration_1_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**event_type** | [**event_type_t**](event_type.md) \* |  | 
**immediate_flag** | **int** |  | [optional] 
**location_reporting_configuration** | [**location_reporting_configuration_1_t**](location_reporting_configuration_1.md) \* |  | [optional] 
**association_type** | [**association_type_t**](association_type.md) \* |  | [optional] 
**datalink_report_cfg** | [**datalink_reporting_configuration_1_t**](datalink_reporting_configuration_1.md) \* |  | [optional] 
**loss_connectivity_cfg** | [**loss_connectivity_cfg_1_t**](loss_connectivity_cfg_1.md) \* |  | [optional] 
**maximum_latency** | **int** | indicating a time in seconds. | [optional] 
**maximum_response_time** | **int** | indicating a time in seconds. | [optional] 
**suggested_packet_num_dl** | **int** |  | [optional] 
**dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | [optional] 
**single_nssai** | [**snssai_t**](snssai.md) \* |  | [optional] 
**pdu_session_status_cfg** | [**pdu_session_status_cfg_1_t**](pdu_session_status_cfg_1.md) \* |  | [optional] 
**reachability_for_sms_cfg** | [**reachability_for_sms_configuration_t**](reachability_for_sms_configuration.md) \* |  | [optional] 
**mtc_provider_information** | **char \*** | String uniquely identifying MTC provider information. | [optional] 
**af_id** | **char \*** |  | [optional] 
**reachability_for_data_cfg** | [**reachability_for_data_configuration_1_t**](reachability_for_data_configuration_1.md) \* |  | [optional] 
**idle_status_ind** | **int** |  | [optional] [default to false]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


