# MultipleIdentifiersAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MultipleIdentifiersAPI_getMultipleIdentifiers**](MultipleIdentifiersAPI.md#MultipleIdentifiersAPI_getMultipleIdentifiers) | **GET** /multiple-identifiers | Mapping of UE Identifiers


# **MultipleIdentifiersAPI_getMultipleIdentifiers**
```c
// Mapping of UE Identifiers
//
list_t*_t* MultipleIdentifiersAPI_getMultipleIdentifiers(apiClient_t *apiClient, list_t * gpsi_list, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**gpsi_list** | **[list_t](char.md) \*** | list of the GPSIs | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[list_t*_t](supi_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

