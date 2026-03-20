# SMSFRegistrationForNon3GPPAccessAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SMSFRegistrationForNon3GPPAccessAPI_non3GppSmsfRegistration**](SMSFRegistrationForNon3GPPAccessAPI.md#SMSFRegistrationForNon3GPPAccessAPI_non3GppSmsfRegistration) | **PUT** /{ueId}/registrations/smsf-non-3gpp-access | register as SMSF for non-3GPP access


# **SMSFRegistrationForNon3GPPAccessAPI_non3GppSmsfRegistration**
```c
// register as SMSF for non-3GPP access
//
smsf_registration_t* SMSFRegistrationForNon3GPPAccessAPI_non3GppSmsfRegistration(apiClient_t *apiClient, char * ueId, smsf_registration_t * smsf_registration);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**smsf_registration** | **[smsf_registration_t](smsf_registration.md) \*** |  | 

### Return type

[smsf_registration_t](smsf_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

