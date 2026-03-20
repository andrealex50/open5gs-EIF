# event_reporting_requirement_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**accuracy** | [**accuracy_t**](accuracy.md) \* |  | [optional] 
**acc_per_subset** | [**list_t**](accuracy.md) \* | Each element indicates the preferred accuracy level per analytics subset. It may be present if the \&quot;listOfAnaSubsets\&quot; attribute is present in the subscription request when the subscription event is NF_LOAD, UE_COMM, DISPERSION, NETWORK_PERFORMANCE, WLAN_PERFORMANCE, DN_PERFORMANCE or SERVICE_EXPERIENCE.  | [optional] 
**start_ts** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**end_ts** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**offset_period** | **int** | Offset period in units of seconds to the reporting time, if the value is negative means  statistics in the past offset period, otherwise a positive value means prediction in the  future offset period. May be present if the \&quot;repPeriod\&quot; attribute is included within the  \&quot;evtReq\&quot; attribute.  | [optional] 
**samp_ratio** | **int** | Unsigned integer indicating Sampling Ratio (see clauses 4.15.1 of 3GPP TS 23.502), expressed in percent.   | [optional] 
**max_object_nbr** | **int** | Unsigned Integer, i.e. only value 0 and integers above 0 are permissible. | [optional] 
**max_supi_nbr** | **int** | Unsigned Integer, i.e. only value 0 and integers above 0 are permissible. | [optional] 
**time_ana_needed** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**ana_meta** | [**list_t**](analytics_metadata.md) \* |  | [optional] 
**ana_meta_ind** | [**analytics_metadata_indication_t**](analytics_metadata_indication.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


