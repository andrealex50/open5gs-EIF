# usage_monitoring_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**um_id** | **char \*** | Univocally identifies the usage monitoring policy data within a PDU session. | 
**volume_threshold** | **long** | Unsigned integer identifying a volume in units of bytes with \&quot;nullable&#x3D;true\&quot; property. | [optional] 
**volume_threshold_uplink** | **long** | Unsigned integer identifying a volume in units of bytes with \&quot;nullable&#x3D;true\&quot; property. | [optional] 
**volume_threshold_downlink** | **long** | Unsigned integer identifying a volume in units of bytes with \&quot;nullable&#x3D;true\&quot; property. | [optional] 
**time_threshold** | **int** | indicating a time in seconds with OpenAPI defined &#39;nullable: true&#39; property. | [optional] 
**monitoring_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI with &#39;nullable:true&#39; property.   | [optional] 
**next_vol_threshold** | **long** | Unsigned integer identifying a volume in units of bytes with \&quot;nullable&#x3D;true\&quot; property. | [optional] 
**next_vol_threshold_uplink** | **long** | Unsigned integer identifying a volume in units of bytes with \&quot;nullable&#x3D;true\&quot; property. | [optional] 
**next_vol_threshold_downlink** | **long** | Unsigned integer identifying a volume in units of bytes with \&quot;nullable&#x3D;true\&quot; property. | [optional] 
**next_time_threshold** | **int** | indicating a time in seconds with OpenAPI defined &#39;nullable: true&#39; property. | [optional] 
**inactivity_time** | **int** | indicating a time in seconds with OpenAPI defined &#39;nullable: true&#39; property. | [optional] 
**ex_usage_pcc_rule_ids** | **list_t \*** | Contains the PCC rule identifier(s) which corresponding service data flow(s) shall be excluded from PDU Session usage monitoring. It is only included in the UsageMonitoringData instance for session level usage monitoring.  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


