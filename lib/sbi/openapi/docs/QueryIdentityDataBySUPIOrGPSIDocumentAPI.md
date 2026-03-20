# QueryIdentityDataBySUPIOrGPSIDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**QueryIdentityDataBySUPIOrGPSIDocumentAPI_getIdentityData**](QueryIdentityDataBySUPIOrGPSIDocumentAPI.md#QueryIdentityDataBySUPIOrGPSIDocumentAPI_getIdentityData) | **GET** /subscription-data/{ueId}/identity-data | Retrieve identity data by SUPI or GPSI


# **QueryIdentityDataBySUPIOrGPSIDocumentAPI_getIdentityData**
```c
// Retrieve identity data by SUPI or GPSI
//
identity_data_t* QueryIdentityDataBySUPIOrGPSIDocumentAPI_getIdentityData(apiClient_t *apiClient, char * ueId, app_port_id_t * app_port_id, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE ID | 
**app_port_id** | **[app_port_id_t](.md) \*** | Application port identifier | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[identity_data_t](identity_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

