# AMF3GppAccessRegistrationInfoRetrievalAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AMF3GppAccessRegistrationInfoRetrievalAPI_get3GppRegistration**](AMF3GppAccessRegistrationInfoRetrievalAPI.md#AMF3GppAccessRegistrationInfoRetrievalAPI_get3GppRegistration) | **GET** /{ueId}/registrations/amf-3gpp-access | retrieve the AMF registration for 3GPP access information


# **AMF3GppAccessRegistrationInfoRetrievalAPI_get3GppRegistration**
```c
// retrieve the AMF registration for 3GPP access information
//
amf3_gpp_access_registration_t* AMF3GppAccessRegistrationInfoRetrievalAPI_get3GppRegistration(apiClient_t *apiClient, char * ueId, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**supported_features** | **char \*** |  | [optional] 

### Return type

[amf3_gpp_access_registration_t](amf3_gpp_access_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

