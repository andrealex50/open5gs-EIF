# session_rule_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**auth_sess_ambr** | [**ambr_t**](ambr.md) \* |  | [optional] 
**auth_def_qos** | [**authorized_default_qos_t**](authorized_default_qos.md) \* |  | [optional] 
**sess_rule_id** | **char \*** | Univocally identifies the session rule within a PDU session. | 
**ref_um_data** | **char \*** | A reference to UsageMonitoringData policy decision type. It is the umId described in clause 5.6.2.12. | [optional] 
**ref_um_n3g_data** | **char \*** | A reference to UsageMonitoringData policy decision type to apply for Non-3GPP access. It is the umId described in clause 5.6.2.12. | [optional] 
**ref_cond_data** | **char \*** | A reference to the condition data. It is the condId described in clause 5.6.2.9. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


