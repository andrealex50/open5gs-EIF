# UEContextInSMFDataRetrievalAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UEContextInSMFDataRetrievalAPI_getUeCtxInSmfData**](UEContextInSMFDataRetrievalAPI.md#UEContextInSMFDataRetrievalAPI_getUeCtxInSmfData) | **GET** /{supi}/ue-context-in-smf-data | retrieve a UE&#39;s UE Context In SMF Data


# **UEContextInSMFDataRetrievalAPI_getUeCtxInSmfData**
```c
// retrieve a UE's UE Context In SMF Data
//
ue_context_in_smf_data_t* UEContextInSMFDataRetrievalAPI_getUeCtxInSmfData(apiClient_t *apiClient, char * supi, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supi** | **char \*** | Identifier of the UE | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[ue_context_in_smf_data_t](ue_context_in_smf_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

