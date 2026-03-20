# IPSMGWRegistrationAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IPSMGWRegistrationAPI_ipSmGwRegistration**](IPSMGWRegistrationAPI.md#IPSMGWRegistrationAPI_ipSmGwRegistration) | **PUT** /{ueId}/registrations/ip-sm-gw | Register an IP-SM-GW


# **IPSMGWRegistrationAPI_ipSmGwRegistration**
```c
// Register an IP-SM-GW
//
ip_sm_gw_registration_t* IPSMGWRegistrationAPI_ipSmGwRegistration(apiClient_t *apiClient, char * ueId, ip_sm_gw_registration_t * ip_sm_gw_registration);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**ip_sm_gw_registration** | **[ip_sm_gw_registration_t](ip_sm_gw_registration.md) \*** |  | 

### Return type

[ip_sm_gw_registration_t](ip_sm_gw_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

