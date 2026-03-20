# SMSF3GPPAccessRegistrationInfoRetrievalAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SMSF3GPPAccessRegistrationInfoRetrievalAPI_get3GppSmsfRegistration**](SMSF3GPPAccessRegistrationInfoRetrievalAPI.md#SMSF3GPPAccessRegistrationInfoRetrievalAPI_get3GppSmsfRegistration) | **GET** /{ueId}/registrations/smsf-3gpp-access | retrieve the SMSF registration for 3GPP access information


# **SMSF3GPPAccessRegistrationInfoRetrievalAPI_get3GppSmsfRegistration**
```c
// retrieve the SMSF registration for 3GPP access information
//
smsf_registration_t* SMSF3GPPAccessRegistrationInfoRetrievalAPI_get3GppSmsfRegistration(apiClient_t *apiClient, char * ueId, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**supported_features** | **char \*** |  | [optional] 

### Return type

[smsf_registration_t](smsf_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

