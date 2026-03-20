# StoredSearchDocumentAPI

All URIs are relative to *https://example.com/nnrf-disc/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**StoredSearchDocumentAPI_retrieveStoredSearch**](StoredSearchDocumentAPI.md#StoredSearchDocumentAPI_retrieveStoredSearch) | **GET** /searches/{searchId} | 


# **StoredSearchDocumentAPI_retrieveStoredSearch**
```c
stored_search_result_t* StoredSearchDocumentAPI_retrieveStoredSearch(apiClient_t *apiClient, char * searchId, char * Accept_Encoding);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**searchId** | **char \*** | Id of a stored search | 
**Accept_Encoding** | **char \*** | Accept-Encoding, described in IETF RFC 7231 | [optional] 

### Return type

[stored_search_result_t](stored_search_result.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

