# qos_monitoring_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**qm_id** | **char \*** | Univocally identifies the QoS monitoring policy data within a PDU session. | 
**req_qos_mon_params** | [**list_t**](requested_qos_monitoring_parameter.md) \* | indicates the UL packet delay, DL packet delay and/or round trip packet delay between the UE and the UPF is to be monitored when the QoS Monitoring for URLLC is enabled for the service data flow.  | 
**rep_freqs** | [**list_t**](reporting_frequency.md) \* |  | 
**rep_thresh_dl** | **int** | Indicates the period of time in units of miliiseconds for DL packet delay. | [optional] 
**rep_thresh_ul** | **int** | Indicates the period of time in units of miliiseconds for UL packet delay. | [optional] 
**rep_thresh_rp** | **int** | Indicates the period of time in units of miliiseconds for round trip packet delay. | [optional] 
**wait_time** | **int** | indicating a time in seconds with OpenAPI defined &#39;nullable: true&#39; property. | [optional] 
**rep_period** | **int** | indicating a time in seconds with OpenAPI defined &#39;nullable: true&#39; property. | [optional] 
**notify_uri** | **char \*** | String providing an URI formatted according to RFC 3986 with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**notify_corre_id** | **char \*** |  | [optional] 
**direct_notif_ind** | **int** | Indicates that the direct event notification sent by UPF to the Local NEF or AF is requested if it is included and set to true. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


