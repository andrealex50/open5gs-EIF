# SMSF3GPPRegistrationDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SMSF3GPPRegistrationDocumentAPI_createSmsfContext3gpp**](SMSF3GPPRegistrationDocumentAPI.md#SMSF3GPPRegistrationDocumentAPI_createSmsfContext3gpp) | **PUT** /subscription-data/{ueId}/context-data/smsf-3gpp-access | Create the SMSF context data of a UE via 3GPP access
[**SMSF3GPPRegistrationDocumentAPI_deleteSmsfContext3gpp**](SMSF3GPPRegistrationDocumentAPI.md#SMSF3GPPRegistrationDocumentAPI_deleteSmsfContext3gpp) | **DELETE** /subscription-data/{ueId}/context-data/smsf-3gpp-access | To remove the SMSF context data of a UE via 3GPP access
[**SMSF3GPPRegistrationDocumentAPI_querySmsfContext3gpp**](SMSF3GPPRegistrationDocumentAPI.md#SMSF3GPPRegistrationDocumentAPI_querySmsfContext3gpp) | **GET** /subscription-data/{ueId}/context-data/smsf-3gpp-access | Retrieves the SMSF context data of a UE using 3gpp access


# **SMSF3GPPRegistrationDocumentAPI_createSmsfContext3gpp**
```c
// Create the SMSF context data of a UE via 3GPP access
//
smsf_registration_t* SMSF3GPPRegistrationDocumentAPI_createSmsfContext3gpp(apiClient_t *apiClient, char * ueId, smsf_registration_t * smsf_registration);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**smsf_registration** | **[smsf_registration_t](smsf_registration.md) \*** |  | 

### Return type

[smsf_registration_t](smsf_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SMSF3GPPRegistrationDocumentAPI_deleteSmsfContext3gpp**
```c
// To remove the SMSF context data of a UE via 3GPP access
//
void SMSF3GPPRegistrationDocumentAPI_deleteSmsfContext3gpp(apiClient_t *apiClient, char * ueId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SMSF3GPPRegistrationDocumentAPI_querySmsfContext3gpp**
```c
// Retrieves the SMSF context data of a UE using 3gpp access
//
smsf_registration_t* SMSF3GPPRegistrationDocumentAPI_querySmsfContext3gpp(apiClient_t *apiClient, char * ueId, list_t * fields, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**fields** | **[list_t](char.md) \*** | attributes to be retrieved | [optional] 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[smsf_registration_t](smsf_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

