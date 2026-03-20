# ServiceParameterDataStoreAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ServiceParameterDataStoreAPI_readServiceParameterData**](ServiceParameterDataStoreAPI.md#ServiceParameterDataStoreAPI_readServiceParameterData) | **GET** /application-data/serviceParamData | Retrieve Service Parameter Data


# **ServiceParameterDataStoreAPI_readServiceParameterData**
```c
// Retrieve Service Parameter Data
//
list_t* ServiceParameterDataStoreAPI_readServiceParameterData(apiClient_t *apiClient, list_t * service_param_ids, list_t * dnns, list_t * snssais, list_t * internal_group_ids, list_t * supis, list_t * ue_ipv4s, list_t * ue_ipv6s, list_t * ue_macs, int any_ue, char * supp_feat);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**service_param_ids** | **[list_t](char.md) \*** | Each element identifies a service. | [optional] 
**dnns** | **[list_t](char.md) \*** | Each element identifies a DNN. | [optional] 
**snssais** | **[list_t](snssai.md) \*** | Each element identifies a slice. | [optional] 
**internal_group_ids** | **[list_t](char.md) \*** | Each element identifies a group of users. | [optional] 
**supis** | **[list_t](char.md) \*** | Each element identifies the user. | [optional] 
**ue_ipv4s** | **[list_t](char.md) \*** | Each element identifies the user. | [optional] 
**ue_ipv6s** | **[list_t](char.md) \*** | Each element identifies the user. | [optional] 
**ue_macs** | **[list_t](char.md) \*** | Each element identifies the user. | [optional] 
**any_ue** | **int** | Indicates whether the request is for any UE. | [optional] 
**supp_feat** | **char \*** | Supported Features | [optional] 

### Return type

[list_t](service_parameter_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

