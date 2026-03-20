# DeleteAuthAPI

All URIs are relative to *https://example.com/nudm-ueau/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DeleteAuthAPI_deleteAuth**](DeleteAuthAPI.md#DeleteAuthAPI_deleteAuth) | **PUT** /{supi}/auth-events/{authEventId} | Deletes the authentication result in the UDM


# **DeleteAuthAPI_deleteAuth**
```c
// Deletes the authentication result in the UDM
//
void DeleteAuthAPI_deleteAuth(apiClient_t *apiClient, char * supi, char * authEventId, auth_event_t * auth_event);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supi** | **char \*** | SUPI of the user | 
**authEventId** | **char \*** | authEvent Id | 
**auth_event** | **[auth_event_t](auth_event.md) \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

