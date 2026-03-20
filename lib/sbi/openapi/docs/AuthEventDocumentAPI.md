# AuthEventDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AuthEventDocumentAPI_deleteAuthenticationStatus**](AuthEventDocumentAPI.md#AuthEventDocumentAPI_deleteAuthenticationStatus) | **DELETE** /subscription-data/{ueId}/authentication-data/authentication-status | To remove the Authentication Status of a UE
[**AuthEventDocumentAPI_queryAuthenticationStatus**](AuthEventDocumentAPI.md#AuthEventDocumentAPI_queryAuthenticationStatus) | **GET** /subscription-data/{ueId}/authentication-data/authentication-status | Retrieves the Authentication Status of a UE


# **AuthEventDocumentAPI_deleteAuthenticationStatus**
```c
// To remove the Authentication Status of a UE
//
void AuthEventDocumentAPI_deleteAuthenticationStatus(apiClient_t *apiClient, char * ueId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AuthEventDocumentAPI_queryAuthenticationStatus**
```c
// Retrieves the Authentication Status of a UE
//
auth_event_t* AuthEventDocumentAPI_queryAuthenticationStatus(apiClient_t *apiClient, char * ueId, list_t * fields, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**fields** | **[list_t](char.md) \*** | attributes to be retrieved | [optional] 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[auth_event_t](auth_event.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

