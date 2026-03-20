# Class5GVNGroupsStoreAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Class5GVNGroupsStoreAPI_query5GVnGroup**](Class5GVNGroupsStoreAPI.md#Class5GVNGroupsStoreAPI_query5GVnGroup) | **GET** /subscription-data/group-data/5g-vn-groups | Retrieves the data of a 5G VN Group


# **Class5GVNGroupsStoreAPI_query5GVnGroup**
```c
// Retrieves the data of a 5G VN Group
//
list_t*_t* Class5GVNGroupsStoreAPI_query5GVnGroup(apiClient_t *apiClient, list_t * gpsis);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**gpsis** | **[list_t](char.md) \*** | List of GPSIs | [optional] 

### Return type

[list_t*_t](model_5_gvn_group_configuration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

