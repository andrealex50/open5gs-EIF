# ee_subscription_1_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**callback_reference** | **char \*** | String providing an URI formatted according to RFC 3986. | 
**monitoring_configurations** | **list_t*** | A map (list of key-value pairs where ReferenceId serves as key) of MonitoringConfigurations | 
**reporting_options** | [**reporting_options_1_t**](reporting_options_1.md) \* |  | [optional] 
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**subscription_id** | **char \*** |  | [optional] 
**context_info** | [**context_info_t**](context_info.md) \* |  | [optional] 
**epc_applied_ind** | **int** |  | [optional] [default to false]
**scef_diam_host** | **char \*** | Fully Qualified Domain Name | [optional] 
**scef_diam_realm** | **char \*** | Fully Qualified Domain Name | [optional] 
**notify_correlation_id** | **char \*** |  | [optional] 
**second_callback_ref** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**gpsi** | **char \*** | String identifying a Gpsi shall contain either an External Id or an MSISDN.  It shall be formatted as follows -External Identifier&#x3D; \&quot;extid-&#39;extid&#39;, where &#39;extid&#39;  shall be formatted according to clause 19.7.2 of 3GPP TS 23.003 that describes an  External Identifier.   | [optional] 
**exclude_gpsi_list** | **list_t \*** |  | [optional] 
**include_gpsi_list** | **list_t \*** |  | [optional] 
**data_restoration_callback_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


