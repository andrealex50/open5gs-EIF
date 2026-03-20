# partial_success_report_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**failure_cause** | **failure_cause_t \*** |  | 
**rule_reports** | [**list_t**](rule_report.md) \* | Information about the PCC rules provisioned by the PCF not successfully installed/activated. | [optional] 
**sess_rule_reports** | [**list_t**](session_rule_report.md) \* | Information about the session rules provisioned by the PCF not successfully installed. | [optional] 
**ue_camping_rep** | [**ue_camping_rep_t**](ue_camping_rep.md) \* |  | [optional] 
**policy_dec_failure_reports** | [**list_t**](policy_decision_failure_code.md) \* | Contains the type(s) of failed policy decision and/or condition data. | [optional] 
**invalid_policy_decs** | [**list_t**](invalid_param.md) \* | Indicates the invalid parameters for the reported type(s) of the failed policy decision and/or condition data. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


