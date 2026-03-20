# vsmf_update_error_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**error** | [**ext_problem_details_t**](ext_problem_details.md) \* |  | 
**pti** | **int** | Procedure Transaction Identifier | [optional] 
**n1sm_cause** | **char \*** |  | [optional] 
**n1_sm_info_from_ue** | [**ref_to_binary_data_t**](ref_to_binary_data.md) \* |  | [optional] 
**unknown_n1_sm_info** | [**ref_to_binary_data_t**](ref_to_binary_data.md) \* |  | [optional] 
**failed_to_assign_ebi_list** | [**list_t**](arp.md) \* |  | [optional] 
**ng_ap_cause** | [**ng_ap_cause_t**](ng_ap_cause.md) \* |  | [optional] 
**_5g_mm_cause_value** | **int** | Unsigned Integer, i.e. only value 0 and integers above 0 are permissible. | [optional] 
**recovery_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**n4_info** | [**n4_information_t**](n4_information.md) \* |  | [optional] 
**n4_info_ext1** | [**n4_information_t**](n4_information.md) \* |  | [optional] 
**n4_info_ext2** | [**n4_information_t**](n4_information.md) \* |  | [optional] 
**n4_info_ext3** | [**n4_information_t**](n4_information.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


