# NWDAFRegistrationInfoRetrievalAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**NWDAFRegistrationInfoRetrievalAPI_getNwdafRegistration**](NWDAFRegistrationInfoRetrievalAPI.md#NWDAFRegistrationInfoRetrievalAPI_getNwdafRegistration) | **GET** /{ueId}/registrations/nwdaf-registrations | retrieve the NWDAF registration


# **NWDAFRegistrationInfoRetrievalAPI_getNwdafRegistration**
```c
// retrieve the NWDAF registration
//
list_t* NWDAFRegistrationInfoRetrievalAPI_getNwdafRegistration(apiClient_t *apiClient, char * ueId, list_t * analytics_ids, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**analytics_ids** | **[list_t](event_id.md) \*** | List of analytics Id(s) provided by the consumers of NWDAF. | [optional] 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[list_t](nwdaf_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

