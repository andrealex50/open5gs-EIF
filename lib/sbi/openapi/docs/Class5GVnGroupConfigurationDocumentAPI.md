# Class5GVnGroupConfigurationDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Class5GVnGroupConfigurationDocumentAPI_create5GVnGroup**](Class5GVnGroupConfigurationDocumentAPI.md#Class5GVnGroupConfigurationDocumentAPI_create5GVnGroup) | **PUT** /subscription-data/group-data/5g-vn-groups/{externalGroupId} | Create an individual 5G VN Grouop


# **Class5GVnGroupConfigurationDocumentAPI_create5GVnGroup**
```c
// Create an individual 5G VN Grouop
//
model_5_gvn_group_configuration_t* Class5GVnGroupConfigurationDocumentAPI_create5GVnGroup(apiClient_t *apiClient, char * externalGroupId, model_5_gvn_group_configuration_t * model_5_gvn_group_configuration);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**externalGroupId** | **char \*** |  | 
**model_5_gvn_group_configuration** | **[model_5_gvn_group_configuration_t](model_5_gvn_group_configuration.md) \*** |  | 

### Return type

[model_5_gvn_group_configuration_t](model_5_gvn_group_configuration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

