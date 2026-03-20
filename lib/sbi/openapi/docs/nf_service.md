# nf_service_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**service_instance_id** | **char \*** |  | 
**service_name** | **char \*** |  | 
**versions** | [**list_t**](nf_service_version.md) \* |  | 
**scheme** | **uri_scheme_t \*** |  | 
**nf_service_status** | **nf_service_status_t \*** |  | 
**fqdn** | **char \*** | Fully Qualified Domain Name | [optional] 
**inter_plmn_fqdn** | **char \*** | Fully Qualified Domain Name | [optional] 
**ip_end_points** | [**list_t**](ip_end_point.md) \* |  | [optional] 
**api_prefix** | **char \*** |  | [optional] 
**default_notification_subscriptions** | [**list_t**](default_notification_subscription.md) \* |  | [optional] 
**allowed_plmns** | [**list_t**](plmn_id.md) \* |  | [optional] 
**allowed_snpns** | [**list_t**](plmn_id_nid.md) \* |  | [optional] 
**allowed_nf_types** | [**list_t**](nf_type.md) \* |  | [optional] 
**allowed_nf_domains** | **list_t \*** |  | [optional] 
**allowed_nssais** | [**list_t**](ext_snssai.md) \* |  | [optional] 
**allowed_operations_per_nf_type** | **list_t*** | A map (list of key-value pairs) where NF Type serves as key | [optional] 
**allowed_operations_per_nf_instance** | **list_t*** | A map (list of key-value pairs) where NF Instance Id serves as key | [optional] 
**priority** | **int** |  | [optional] 
**capacity** | **int** |  | [optional] 
**load** | **int** |  | [optional] 
**load_time_stamp** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**recovery_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**nf_service_set_id_list** | **list_t \*** |  | [optional] 
**s_nssais** | [**list_t**](ext_snssai.md) \* |  | [optional] 
**per_plmn_snssai_list** | [**list_t**](plmn_snssai.md) \* |  | [optional] 
**vendor_id** | **char \*** | Vendor ID of the NF Service instance (Private Enterprise Number assigned by IANA) | [optional] 
**supported_vendor_specific_features** | **list_t*** | A map (list of key-value pairs) where IANA-assigned SMI Network Management Private Enterprise Codes serves as key  | [optional] 
**oauth2_required** | **int** |  | [optional] 
**per_plmn_oauth2_req_list** | [**plmn_oauth2_t**](plmn_oauth2.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


