# AMFRegistrationFor3GPPAccessAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AMFRegistrationFor3GPPAccessAPI_call3GppRegistration**](AMFRegistrationFor3GPPAccessAPI.md#AMFRegistrationFor3GPPAccessAPI_call3GppRegistration) | **PUT** /{ueId}/registrations/amf-3gpp-access | register as AMF for 3GPP access


# **AMFRegistrationFor3GPPAccessAPI_call3GppRegistration**
```c
// register as AMF for 3GPP access
//
amf3_gpp_access_registration_t* AMFRegistrationFor3GPPAccessAPI_call3GppRegistration(apiClient_t *apiClient, char * ueId, amf3_gpp_access_registration_t * amf3_gpp_access_registration);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**amf3_gpp_access_registration** | **[amf3_gpp_access_registration_t](amf3_gpp_access_registration.md) \*** |  | 

### Return type

[amf3_gpp_access_registration_t](amf3_gpp_access_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

