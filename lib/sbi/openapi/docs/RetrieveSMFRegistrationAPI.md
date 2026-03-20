# RetrieveSMFRegistrationAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RetrieveSMFRegistrationAPI_retrieveSmfRegistration**](RetrieveSMFRegistrationAPI.md#RetrieveSMFRegistrationAPI_retrieveSmfRegistration) | **GET** /{ueId}/registrations/smf-registrations/{pduSessionId} | get an SMF registration


# **RetrieveSMFRegistrationAPI_retrieveSmfRegistration**
```c
// get an SMF registration
//
smf_registration_t* RetrieveSMFRegistrationAPI_retrieveSmfRegistration(apiClient_t *apiClient, char * ueId, int pduSessionId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**pduSessionId** | **int** | Identifier of the PDU session | 

### Return type

[smf_registration_t](smf_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

