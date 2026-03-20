# pcc_rule_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**flow_infos** | [**list_t**](flow_information.md) \* | An array of IP flow packet filter information. | [optional] 
**app_id** | **char \*** | A reference to the application detection filter configured at the UPF. | [optional] 
**app_descriptor** | **char \*** | string with format &#39;bytes&#39; as defined in OpenAPI | [optional] 
**cont_ver** | **int** | Represents the content version of some content. | [optional] 
**pcc_rule_id** | **char \*** | Univocally identifies the PCC rule within a PDU session. | 
**precedence** | **int** | Unsigned Integer, i.e. only value 0 and integers above 0 are permissible. | [optional] 
**af_sig_protocol** | **af_sig_protocol_t \*** |  | [optional] 
**app_reloc** | **int** | Indication of application relocation possibility. | [optional] 
**eas_redis_ind** | **int** | Indicates the EAS rediscovery is required. | [optional] 
**ref_qos_data** | **list_t \*** | A reference to the QosData policy decision type. It is the qosId described in clause 5.6.2.8. | [optional] 
**ref_alt_qos_params** | **list_t \*** | A Reference to the QosData policy decision type for the Alternative QoS parameter sets of the service data flow. | [optional] 
**ref_tc_data** | **list_t \*** | A reference to the TrafficControlData policy decision type. It is the tcId described in clause 5.6.2.10. | [optional] 
**ref_chg_data** | **list_t \*** | A reference to the ChargingData policy decision type. It is the chgId described in clause 5.6.2.11. | [optional] 
**ref_chg_n3g_data** | **list_t \*** | A reference to the ChargingData policy decision type only applicable to Non-3GPP access if \&quot;ATSSS\&quot; feature is supported. It is the chgId described in clause 5.6.2.11.  | [optional] 
**ref_um_data** | **list_t \*** | A reference to UsageMonitoringData policy decision type. It is the umId described in clause 5.6.2.12. | [optional] 
**ref_um_n3g_data** | **list_t \*** | A reference to UsageMonitoringData policy decision type only applicable to Non-3GPP access if \&quot;ATSSS\&quot; feature is supported. It is the umId described in clause 5.6.2.12.   | [optional] 
**ref_cond_data** | **char \*** | A reference to the condition data. It is the condId described in clause 5.6.2.9. | [optional] 
**ref_qos_mon** | **list_t \*** | A reference to the QosMonitoringData policy decision type. It is the qmId described in clause 5.6.2.40. | [optional] 
**addr_preser_ind** | **int** |  | [optional] 
**tscai_input_dl** | [**tscai_input_container_t**](tscai_input_container.md) \* |  | [optional] 
**tscai_input_ul** | [**tscai_input_container_t**](tscai_input_container.md) \* |  | [optional] 
**tscai_time_dom** | **int** | Unsigned Integer, i.e. only value 0 and integers above 0 are permissible. | [optional] 
**dd_notif_ctrl** | [**downlink_data_notification_control_t**](downlink_data_notification_control.md) \* |  | [optional] 
**dd_notif_ctrl2** | [**downlink_data_notification_control_rm_t**](downlink_data_notification_control_rm.md) \* |  | [optional] 
**dis_ue_notif** | **int** |  | [optional] 
**pack_filt_all_prec** | **int** | Unsigned Integer, i.e. only value 0 and integers above 0 are permissible. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


