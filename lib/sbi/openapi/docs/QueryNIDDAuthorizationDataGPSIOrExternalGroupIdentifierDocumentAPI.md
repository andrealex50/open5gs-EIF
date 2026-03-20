# QueryNIDDAuthorizationDataGPSIOrExternalGroupIdentifierDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**QueryNIDDAuthorizationDataGPSIOrExternalGroupIdentifierDocumentAPI_getNiddAuData**](QueryNIDDAuthorizationDataGPSIOrExternalGroupIdentifierDocumentAPI.md#QueryNIDDAuthorizationDataGPSIOrExternalGroupIdentifierDocumentAPI_getNiddAuData) | **GET** /subscription-data/{ueId}/nidd-authorization-data | Retrieve NIDD Authorization Data GPSI or External Group identifier


# **QueryNIDDAuthorizationDataGPSIOrExternalGroupIdentifierDocumentAPI_getNiddAuData**
```c
// Retrieve NIDD Authorization Data GPSI or External Group identifier
//
authorization_data_t* QueryNIDDAuthorizationDataGPSIOrExternalGroupIdentifierDocumentAPI_getNiddAuData(apiClient_t *apiClient, char * ueId, snssai_t * single_nssai, char * dnn, char * mtc_provider_information, char * af_id, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE ID | 
**single_nssai** | **[snssai_t](.md) \*** | single NSSAI | 
**dnn** | **char \*** | DNN | 
**mtc_provider_information** | **char \*** | MTC Provider Information | 
**af_id** | **char \*** | Application Function Identifier | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[authorization_data_t](authorization_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

