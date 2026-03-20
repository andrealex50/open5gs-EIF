# apn_rate_status_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**remain_packets_ul** | **int** | When present, it shall contain the number of packets the UE is allowed to send uplink in the given time unit for the given APN (all PDN connections of the UE to this APN see clause 4.7.7.3 in 3GPP TS 23.401.  | [optional] 
**remain_packets_dl** | **int** | When present, it shall contain the number of packets the UE is allowed to send uplink in the given time unit for the given APN (all PDN connections of the UE to this APN see clause 4.7.7.3 in 3GPP TS 23.401.  | [optional] 
**validity_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**remain_ex_reports_ul** | **int** | When present, it shall indicate the number of additional exception reports the UE is allowed to send uplink in the given time unit for the given APN (all PDN connections of the UE to this APN, see clause 4.7.7.3 in 3GPP TS 23.401.  | [optional] 
**remain_ex_reports_dl** | **int** | When present, it shall indicate the number of additional exception reports the AF is allowed to send downlink in the  given time unit for the given APN (all PDN connections of the UE to this APN, see clause 4.7.7.3 in 3GPP TS 23.401.  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


