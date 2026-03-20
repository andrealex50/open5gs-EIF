# RetrievalOfTheIndividualSharedDataAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RetrievalOfTheIndividualSharedDataAPI_getIndividualSharedData**](RetrievalOfTheIndividualSharedDataAPI.md#RetrievalOfTheIndividualSharedDataAPI_getIndividualSharedData) | **GET** /shared-data/{sharedDataId} | retrieve the individual shared data


# **RetrievalOfTheIndividualSharedDataAPI_getIndividualSharedData**
```c
// retrieve the individual shared data
//
shared_data_t* RetrievalOfTheIndividualSharedDataAPI_getIndividualSharedData(apiClient_t *apiClient, set_t * sharedDataId, char * supported_features, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sharedDataId** | **[set_t](char.md) \*** | Id of the Shared data | 
**supported_features** | **char \*** | Supported Features | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[shared_data_t](shared_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

