# error_report_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**error** | [**problem_details_t**](problem_details.md) \* |  | [optional] 
**rule_reports** | [**list_t**](rule_report.md) \* | Used to report the PCC rule failure. | [optional] 
**sess_rule_reports** | [**list_t**](session_rule_report.md) \* | Used to report the session rule failure. | [optional] 
**pol_dec_failure_reports** | [**list_t**](policy_decision_failure_code.md) \* | Used to report failure of the policy decision and/or condition data. | [optional] 
**invalid_policy_decs** | [**list_t**](invalid_param.md) \* | Indicates the invalid parameters for the reported type(s) of the failed policy decision and/or condition data. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


