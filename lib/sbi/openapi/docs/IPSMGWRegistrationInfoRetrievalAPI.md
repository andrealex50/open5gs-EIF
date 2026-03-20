# IPSMGWRegistrationInfoRetrievalAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IPSMGWRegistrationInfoRetrievalAPI_getIpSmGwRegistration**](IPSMGWRegistrationInfoRetrievalAPI.md#IPSMGWRegistrationInfoRetrievalAPI_getIpSmGwRegistration) | **GET** /{ueId}/registrations/ip-sm-gw | Retrieve the IP-SM-GW registration information


# **IPSMGWRegistrationInfoRetrievalAPI_getIpSmGwRegistration**
```c
// Retrieve the IP-SM-GW registration information
//
ip_sm_gw_registration_t* IPSMGWRegistrationInfoRetrievalAPI_getIpSmGwRegistration(apiClient_t *apiClient, char * ueId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 

### Return type

[ip_sm_gw_registration_t](ip_sm_gw_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

