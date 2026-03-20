# AuthenticationResultDeletionAPI

All URIs are relative to *https://example.com/nausf-auth/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AuthenticationResultDeletionAPI_delete5gAkaAuthenticationResult**](AuthenticationResultDeletionAPI.md#AuthenticationResultDeletionAPI_delete5gAkaAuthenticationResult) | **DELETE** /ue-authentications/{authCtxId}/5g-aka-confirmation | Deletes the authentication result in the UDM
[**AuthenticationResultDeletionAPI_deleteEapAuthenticationResult**](AuthenticationResultDeletionAPI.md#AuthenticationResultDeletionAPI_deleteEapAuthenticationResult) | **DELETE** /ue-authentications/{authCtxId}/eap-session | Deletes the authentication result in the UDM
[**AuthenticationResultDeletionAPI_deleteProSeAuthenticationResult**](AuthenticationResultDeletionAPI.md#AuthenticationResultDeletionAPI_deleteProSeAuthenticationResult) | **DELETE** /prose-authentications/{authCtxId}/prose-auth | Deletes the authentication result in the UDM


# **AuthenticationResultDeletionAPI_delete5gAkaAuthenticationResult**
```c
// Deletes the authentication result in the UDM
//
void AuthenticationResultDeletionAPI_delete5gAkaAuthenticationResult(apiClient_t *apiClient, char * authCtxId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**authCtxId** | **char \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AuthenticationResultDeletionAPI_deleteEapAuthenticationResult**
```c
// Deletes the authentication result in the UDM
//
void AuthenticationResultDeletionAPI_deleteEapAuthenticationResult(apiClient_t *apiClient, char * authCtxId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**authCtxId** | **char \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AuthenticationResultDeletionAPI_deleteProSeAuthenticationResult**
```c
// Deletes the authentication result in the UDM
//
void AuthenticationResultDeletionAPI_deleteProSeAuthenticationResult(apiClient_t *apiClient, char * authCtxId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**authCtxId** | **char \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

