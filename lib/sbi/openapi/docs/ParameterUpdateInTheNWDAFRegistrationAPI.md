# ParameterUpdateInTheNWDAFRegistrationAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ParameterUpdateInTheNWDAFRegistrationAPI_updateNwdafRegistration**](ParameterUpdateInTheNWDAFRegistrationAPI.md#ParameterUpdateInTheNWDAFRegistrationAPI_updateNwdafRegistration) | **PATCH** /{ueId}/registrations/nwdaf-registrations/{nwdafRegistrationId} | Update a parameter in the NWDAF registration


# **ParameterUpdateInTheNWDAFRegistrationAPI_updateNwdafRegistration**
```c
// Update a parameter in the NWDAF registration
//
update_nwdaf_registration_200_response_t* ParameterUpdateInTheNWDAFRegistrationAPI_updateNwdafRegistration(apiClient_t *apiClient, char * ueId, char * nwdafRegistrationId, nwdaf_registration_modification_t * nwdaf_registration_modification, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**nwdafRegistrationId** | **char \*** | NWDAF registration identifier | 
**nwdaf_registration_modification** | **[nwdaf_registration_modification_t](nwdaf_registration_modification.md) \*** |  | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[update_nwdaf_registration_200_response_t](update_nwdaf_registration_200_response.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/merge-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

