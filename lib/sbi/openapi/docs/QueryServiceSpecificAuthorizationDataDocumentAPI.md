# QueryServiceSpecificAuthorizationDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**QueryServiceSpecificAuthorizationDataDocumentAPI_getSSAuData**](QueryServiceSpecificAuthorizationDataDocumentAPI.md#QueryServiceSpecificAuthorizationDataDocumentAPI_getSSAuData) | **GET** /subscription-data/{ueId}/service-specific-authorization-data/{serviceType} | Retrieve ServiceSpecific Authorization Data


# **QueryServiceSpecificAuthorizationDataDocumentAPI_getSSAuData**
```c
// Retrieve ServiceSpecific Authorization Data
//
authorization_data_t* QueryServiceSpecificAuthorizationDataDocumentAPI_getSSAuData(apiClient_t *apiClient, char * ueId, service_type_t * serviceType, snssai_t * single_nssai, char * dnn, char * mtc_provider_information, char * af_id, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE ID | 
**serviceType** | **[service_type_t](.md) \*** | Service Type | 
**single_nssai** | **[snssai_t](.md) \*** | single NSSAI | 
**dnn** | **char \*** | DNN | 
**mtc_provider_information** | **char \*** | MTC Provider Information | [optional] 
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

