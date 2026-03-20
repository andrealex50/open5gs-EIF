# AMFRegistrationForNon3GPPAccessAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AMFRegistrationForNon3GPPAccessAPI_non3GppRegistration**](AMFRegistrationForNon3GPPAccessAPI.md#AMFRegistrationForNon3GPPAccessAPI_non3GppRegistration) | **PUT** /{ueId}/registrations/amf-non-3gpp-access | register as AMF for non-3GPP access


# **AMFRegistrationForNon3GPPAccessAPI_non3GppRegistration**
```c
// register as AMF for non-3GPP access
//
amf_non3_gpp_access_registration_t* AMFRegistrationForNon3GPPAccessAPI_non3GppRegistration(apiClient_t *apiClient, char * ueId, amf_non3_gpp_access_registration_t * amf_non3_gpp_access_registration);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**amf_non3_gpp_access_registration** | **[amf_non3_gpp_access_registration_t](amf_non3_gpp_access_registration.md) \*** |  | 

### Return type

[amf_non3_gpp_access_registration_t](amf_non3_gpp_access_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

