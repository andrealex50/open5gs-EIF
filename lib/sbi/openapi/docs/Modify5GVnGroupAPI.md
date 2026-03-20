# Modify5GVnGroupAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Modify5GVnGroupAPI_modify5GVnGroup**](Modify5GVnGroupAPI.md#Modify5GVnGroupAPI_modify5GVnGroup) | **PATCH** /subscription-data/group-data/5g-vn-groups/{externalGroupId} | modify the 5GVnGroup


# **Modify5GVnGroupAPI_modify5GVnGroup**
```c
// modify the 5GVnGroup
//
patch_result_t* Modify5GVnGroupAPI_modify5GVnGroup(apiClient_t *apiClient, char * externalGroupId, list_t * patch_item, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**externalGroupId** | **char \*** |  | 
**patch_item** | **[list_t](patch_item.md) \*** |  | 
**supported_features** | **char \*** | Features required to be supported by the target NF | [optional] 

### Return type

[patch_result_t](patch_result.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

