# ParameterUpdateInTheSMFRegistrationAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ParameterUpdateInTheSMFRegistrationAPI_updateSmfRegistration**](ParameterUpdateInTheSMFRegistrationAPI.md#ParameterUpdateInTheSMFRegistrationAPI_updateSmfRegistration) | **PATCH** /{ueId}/registrations/smf-registrations/{pduSessionId} | update a parameter in the SMF registration


# **ParameterUpdateInTheSMFRegistrationAPI_updateSmfRegistration**
```c
// update a parameter in the SMF registration
//
patch_result_t* ParameterUpdateInTheSMFRegistrationAPI_updateSmfRegistration(apiClient_t *apiClient, char * ueId, int pduSessionId, smf_registration_modification_t * smf_registration_modification, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**pduSessionId** | **int** | Identifier of the PDU session | 
**smf_registration_modification** | **[smf_registration_modification_t](smf_registration_modification.md) \*** |  | 
**supported_features** | **char \*** | Features required to be supported by the target NF | [optional] 

### Return type

[patch_result_t](patch_result.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/merge-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

