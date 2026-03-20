# UEContextInAMFDataRetrievalAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UEContextInAMFDataRetrievalAPI_getUeCtxInAmfData**](UEContextInAMFDataRetrievalAPI.md#UEContextInAMFDataRetrievalAPI_getUeCtxInAmfData) | **GET** /{supi}/ue-context-in-amf-data | retrieve a UE&#39;s UE Context In AMF Data


# **UEContextInAMFDataRetrievalAPI_getUeCtxInAmfData**
```c
// retrieve a UE's UE Context In AMF Data
//
ue_context_in_amf_data_t* UEContextInAMFDataRetrievalAPI_getUeCtxInAmfData(apiClient_t *apiClient, char * supi, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supi** | **char \*** | Identifier of the UE | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[ue_context_in_amf_data_t](ue_context_in_amf_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

