# ConfirmAuthAPI

All URIs are relative to *https://example.com/nudm-ueau/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ConfirmAuthAPI_confirmAuth**](ConfirmAuthAPI.md#ConfirmAuthAPI_confirmAuth) | **POST** /{supi}/auth-events | Create a new confirmation event


# **ConfirmAuthAPI_confirmAuth**
```c
// Create a new confirmation event
//
auth_event_t* ConfirmAuthAPI_confirmAuth(apiClient_t *apiClient, char * supi, auth_event_t * auth_event);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supi** | **char \*** | SUPI of the user | 
**auth_event** | **[auth_event_t](auth_event.md) \*** |  | 

### Return type

[auth_event_t](auth_event.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

