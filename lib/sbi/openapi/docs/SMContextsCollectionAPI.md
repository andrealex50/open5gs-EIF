# SMContextsCollectionAPI

All URIs are relative to *https://example.com/nsmf-pdusession/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SMContextsCollectionAPI_postSmContexts**](SMContextsCollectionAPI.md#SMContextsCollectionAPI_postSmContexts) | **POST** /sm-contexts | Create SM Context


# **SMContextsCollectionAPI_postSmContexts**
```c
// Create SM Context
//
sm_context_created_data_t* SMContextsCollectionAPI_postSmContexts(apiClient_t *apiClient, sm_context_create_data_t * jsonData, binary_t* binaryDataN1SmMessage, binary_t* binaryDataN2SmInformation, binary_t* binaryDataN2SmInformationExt1);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**jsonData** | **[sm_context_create_data_t](sm_context_create_data.md) \*** |  | [optional] 
**binaryDataN1SmMessage** | **binary_t*** |  | [optional] 
**binaryDataN2SmInformation** | **binary_t*** |  | [optional] 
**binaryDataN2SmInformationExt1** | **binary_t*** |  | [optional] 

### Return type

[sm_context_created_data_t](sm_context_created_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: multipart/related
 - **Accept**: application/json, multipart/related, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

