# Class5GVNGroupsInternalDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Class5GVNGroupsInternalDocumentAPI_query5GVnGroupInternal**](Class5GVNGroupsInternalDocumentAPI.md#Class5GVNGroupsInternalDocumentAPI_query5GVnGroupInternal) | **GET** /subscription-data/group-data/5g-vn-groups/internal | Retrieves the data of 5G VN Group


# **Class5GVNGroupsInternalDocumentAPI_query5GVnGroupInternal**
```c
// Retrieves the data of 5G VN Group
//
list_t*_t* Class5GVNGroupsInternalDocumentAPI_query5GVnGroupInternal(apiClient_t *apiClient, list_t * internal_group_ids);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**internal_group_ids** | **[list_t](char.md) \*** | List of Internal Group IDs | 

### Return type

[list_t*_t](model_5_gvn_group_configuration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

