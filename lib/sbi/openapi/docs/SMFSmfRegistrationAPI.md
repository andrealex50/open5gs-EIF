# SMFSmfRegistrationAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SMFSmfRegistrationAPI_getSmfRegistration**](SMFSmfRegistrationAPI.md#SMFSmfRegistrationAPI_getSmfRegistration) | **GET** /{ueId}/registrations/smf-registrations | retrieve the SMF registration information
[**SMFSmfRegistrationAPI_registration**](SMFSmfRegistrationAPI.md#SMFSmfRegistrationAPI_registration) | **PUT** /{ueId}/registrations/smf-registrations/{pduSessionId} | register as SMF


# **SMFSmfRegistrationAPI_getSmfRegistration**
```c
// retrieve the SMF registration information
//
smf_registration_info_t* SMFSmfRegistrationAPI_getSmfRegistration(apiClient_t *apiClient, char * ueId, snssai_t * single_nssai, char * dnn, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**single_nssai** | **[snssai_t](.md) \*** |  | [optional] 
**dnn** | **char \*** |  | [optional] 
**supported_features** | **char \*** |  | [optional] 

### Return type

[smf_registration_info_t](smf_registration_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SMFSmfRegistrationAPI_registration**
```c
// register as SMF
//
smf_registration_t* SMFSmfRegistrationAPI_registration(apiClient_t *apiClient, char * ueId, int pduSessionId, smf_registration_t * smf_registration);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**pduSessionId** | **int** | Identifier of the PDU session | 
**smf_registration** | **[smf_registration_t](smf_registration.md) \*** |  | 

### Return type

[smf_registration_t](smf_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

