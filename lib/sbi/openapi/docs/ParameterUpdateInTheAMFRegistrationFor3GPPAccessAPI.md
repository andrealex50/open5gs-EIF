# ParameterUpdateInTheAMFRegistrationFor3GPPAccessAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ParameterUpdateInTheAMFRegistrationFor3GPPAccessAPI_update3GppRegistration**](ParameterUpdateInTheAMFRegistrationFor3GPPAccessAPI.md#ParameterUpdateInTheAMFRegistrationFor3GPPAccessAPI_update3GppRegistration) | **PATCH** /{ueId}/registrations/amf-3gpp-access | Update a parameter in the AMF registration for 3GPP access


# **ParameterUpdateInTheAMFRegistrationFor3GPPAccessAPI_update3GppRegistration**
```c
// Update a parameter in the AMF registration for 3GPP access
//
patch_result_t* ParameterUpdateInTheAMFRegistrationFor3GPPAccessAPI_update3GppRegistration(apiClient_t *apiClient, char * ueId, amf3_gpp_access_registration_modification_t * amf3_gpp_access_registration_modification, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**amf3_gpp_access_registration_modification** | **[amf3_gpp_access_registration_modification_t](amf3_gpp_access_registration_modification.md) \*** |  | 
**supported_features** | **char \*** | Features required to be supported by the target NF | [optional] 

### Return type

[patch_result_t](patch_result.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/merge-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

