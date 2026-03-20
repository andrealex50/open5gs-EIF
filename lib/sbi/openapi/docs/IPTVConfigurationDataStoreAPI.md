# IPTVConfigurationDataStoreAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IPTVConfigurationDataStoreAPI_readIPTVCongifurationData**](IPTVConfigurationDataStoreAPI.md#IPTVConfigurationDataStoreAPI_readIPTVCongifurationData) | **GET** /application-data/iptvConfigData | Retrieve IPTV configuration Data


# **IPTVConfigurationDataStoreAPI_readIPTVCongifurationData**
```c
// Retrieve IPTV configuration Data
//
list_t* IPTVConfigurationDataStoreAPI_readIPTVCongifurationData(apiClient_t *apiClient, list_t * config_ids, list_t * dnns, list_t * snssais, list_t * supis, list_t * inter_group_ids);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**config_ids** | **[list_t](char.md) \*** | Each element identifies a configuration. | [optional] 
**dnns** | **[list_t](char.md) \*** | Each element identifies a DNN. | [optional] 
**snssais** | **[list_t](snssai.md) \*** | Each element identifies a slice. | [optional] 
**supis** | **[list_t](char.md) \*** | Each element identifies the user. | [optional] 
**inter_group_ids** | **[list_t](char.md) \*** | Each element identifies a group of users. | [optional] 

### Return type

[list_t](iptv_config_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

