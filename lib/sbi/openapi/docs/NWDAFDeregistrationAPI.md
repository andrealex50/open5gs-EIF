# NWDAFDeregistrationAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**NWDAFDeregistrationAPI_nwdafDeregistration**](NWDAFDeregistrationAPI.md#NWDAFDeregistrationAPI_nwdafDeregistration) | **DELETE** /{ueId}/registrations/nwdaf-registrations/{nwdafRegistrationId} | delete an NWDAF registration


# **NWDAFDeregistrationAPI_nwdafDeregistration**
```c
// delete an NWDAF registration
//
void NWDAFDeregistrationAPI_nwdafDeregistration(apiClient_t *apiClient, char * ueId, char * nwdafRegistrationId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**nwdafRegistrationId** | **char \*** | NWDAF registration identifier | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

