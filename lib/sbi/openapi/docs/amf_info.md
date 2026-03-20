# amf_info_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**amf_set_id** | **char \*** | String identifying the AMF Set ID (10 bits) as specified in clause 2.10.1 of 3GPP TS 23.003.  It is encoded as a string of 3 hexadecimal characters where the first character is limited to  values 0 to 3 (i.e. 10 bits).  | 
**amf_region_id** | **char \*** | String identifying the AMF Set ID (10 bits) as specified in clause 2.10.1 of 3GPP TS 23.003.  It is encoded as a string of 3 hexadecimal characters where the first character is limited to  values 0 to 3 (i.e. 10 bits)  | 
**guami_list** | [**list_t**](guami.md) \* |  | 
**tai_list** | [**list_t**](tai.md) \* |  | [optional] 
**tai_range_list** | [**list_t**](tai_range.md) \* |  | [optional] 
**backup_info_amf_failure** | [**list_t**](guami.md) \* |  | [optional] 
**backup_info_amf_removal** | [**list_t**](guami.md) \* |  | [optional] 
**n2_interface_amf_info** | [**n2_interface_amf_info_t**](n2_interface_amf_info.md) \* |  | [optional] 
**amf_onboarding_capability** | **int** |  | [optional] [default to false]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


