# UEContextInSMSFDataRetrievalAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UEContextInSMSFDataRetrievalAPI_getUeCtxInSmsfData**](UEContextInSMSFDataRetrievalAPI.md#UEContextInSMSFDataRetrievalAPI_getUeCtxInSmsfData) | **GET** /{supi}/ue-context-in-smsf-data | retrieve a UE&#39;s UE Context In SMSF Data


# **UEContextInSMSFDataRetrievalAPI_getUeCtxInSmsfData**
```c
// retrieve a UE's UE Context In SMSF Data
//
ue_context_in_smsf_data_t* UEContextInSMSFDataRetrievalAPI_getUeCtxInSmsfData(apiClient_t *apiClient, char * supi, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supi** | **char \*** | Identifier of the UE | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[ue_context_in_smsf_data_t](ue_context_in_smsf_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

