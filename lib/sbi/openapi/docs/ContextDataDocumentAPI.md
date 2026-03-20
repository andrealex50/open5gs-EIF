# ContextDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ContextDataDocumentAPI_queryContextData**](ContextDataDocumentAPI.md#ContextDataDocumentAPI_queryContextData) | **GET** /subscription-data/{ueId}/context-data | Retrieve multiple context data sets of a UE


# **ContextDataDocumentAPI_queryContextData**
```c
// Retrieve multiple context data sets of a UE
//
context_data_sets_t* ContextDataDocumentAPI_queryContextData(apiClient_t *apiClient, char * ueId, set_t * context_dataset_names);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**context_dataset_names** | **[set_t](context_data_set_name.md) \*** | List of context dataset names | 

### Return type

[context_data_sets_t](context_data_sets.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

