# Delete5GVnGroupAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Delete5GVnGroupAPI_delete5GVnGroup**](Delete5GVnGroupAPI.md#Delete5GVnGroupAPI_delete5GVnGroup) | **DELETE** /subscription-data/group-data/5g-vn-groups/{externalGroupId} | Deletes the 5GVnGroup


# **Delete5GVnGroupAPI_delete5GVnGroup**
```c
// Deletes the 5GVnGroup
//
void Delete5GVnGroupAPI_delete5GVnGroup(apiClient_t *apiClient, char * externalGroupId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**externalGroupId** | **char \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

