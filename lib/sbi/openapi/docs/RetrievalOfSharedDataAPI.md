# RetrievalOfSharedDataAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RetrievalOfSharedDataAPI_getSharedData**](RetrievalOfSharedDataAPI.md#RetrievalOfSharedDataAPI_getSharedData) | **GET** /shared-data | retrieve shared data


# **RetrievalOfSharedDataAPI_getSharedData**
```c
// retrieve shared data
//
list_t* RetrievalOfSharedDataAPI_getSharedData(apiClient_t *apiClient, set_t * shared_data_ids, char * supportedFeatures, char * supported_features, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**shared_data_ids** | **[set_t](char.md) \*** | List of shared data ids | 
**supportedFeatures** | **char \*** | Supported Features; this query parameter should not be used | [optional] 
**supported_features** | **char \*** | Supported Features | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[list_t](shared_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

