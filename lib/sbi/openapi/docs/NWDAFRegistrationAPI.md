# NWDAFRegistrationAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**NWDAFRegistrationAPI_nwdafRegistration**](NWDAFRegistrationAPI.md#NWDAFRegistrationAPI_nwdafRegistration) | **PUT** /{ueId}/registrations/nwdaf-registrations/{nwdafRegistrationId} | register as NWDAF


# **NWDAFRegistrationAPI_nwdafRegistration**
```c
// register as NWDAF
//
nwdaf_registration_t* NWDAFRegistrationAPI_nwdafRegistration(apiClient_t *apiClient, char * ueId, char * nwdafRegistrationId, nwdaf_registration_t * nwdaf_registration);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**nwdafRegistrationId** | **char \*** | NWDAF registration identifier | 
**nwdaf_registration** | **[nwdaf_registration_t](nwdaf_registration.md) \*** |  | 

### Return type

[nwdaf_registration_t](nwdaf_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

