# ApplicationSessionsCollectionAPI

All URIs are relative to *https://example.com/npcf-policyauthorization/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ApplicationSessionsCollectionAPI_postAppSessions**](ApplicationSessionsCollectionAPI.md#ApplicationSessionsCollectionAPI_postAppSessions) | **POST** /app-sessions | Creates a new Individual Application Session Context resource


# **ApplicationSessionsCollectionAPI_postAppSessions**
```c
// Creates a new Individual Application Session Context resource
//
app_session_context_t* ApplicationSessionsCollectionAPI_postAppSessions(apiClient_t *apiClient, app_session_context_t * app_session_context);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**app_session_context** | **[app_session_context_t](app_session_context.md) \*** | Contains the information for the creation the resource. | 

### Return type

[app_session_context_t](app_session_context.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

