# Query5GVnGroupConfigurationDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Query5GVnGroupConfigurationDocumentAPI_get5GVnGroupConfiguration**](Query5GVnGroupConfigurationDocumentAPI.md#Query5GVnGroupConfigurationDocumentAPI_get5GVnGroupConfiguration) | **GET** /subscription-data/group-data/5g-vn-groups/{externalGroupId} | Retrieve a 5GVnGroup configuration


# **Query5GVnGroupConfigurationDocumentAPI_get5GVnGroupConfiguration**
```c
// Retrieve a 5GVnGroup configuration
//
model_5_gvn_group_configuration_t* Query5GVnGroupConfigurationDocumentAPI_get5GVnGroupConfiguration(apiClient_t *apiClient, char * externalGroupId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**externalGroupId** | **char \*** |  | 

### Return type

[model_5_gvn_group_configuration_t](model_5_gvn_group_configuration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

