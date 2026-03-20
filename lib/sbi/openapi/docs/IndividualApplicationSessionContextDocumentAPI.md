# IndividualApplicationSessionContextDocumentAPI

All URIs are relative to *https://example.com/npcf-policyauthorization/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualApplicationSessionContextDocumentAPI_deleteAppSession**](IndividualApplicationSessionContextDocumentAPI.md#IndividualApplicationSessionContextDocumentAPI_deleteAppSession) | **POST** /app-sessions/{appSessionId}/delete | Deletes an existing Individual Application Session Context
[**IndividualApplicationSessionContextDocumentAPI_getAppSession**](IndividualApplicationSessionContextDocumentAPI.md#IndividualApplicationSessionContextDocumentAPI_getAppSession) | **GET** /app-sessions/{appSessionId} | Reads an existing Individual Application Session Context
[**IndividualApplicationSessionContextDocumentAPI_modAppSession**](IndividualApplicationSessionContextDocumentAPI.md#IndividualApplicationSessionContextDocumentAPI_modAppSession) | **PATCH** /app-sessions/{appSessionId} | Modifies an existing Individual Application Session Context


# **IndividualApplicationSessionContextDocumentAPI_deleteAppSession**
```c
// Deletes an existing Individual Application Session Context
//
app_session_context_t* IndividualApplicationSessionContextDocumentAPI_deleteAppSession(apiClient_t *apiClient, char * appSessionId, events_subsc_req_data_t * events_subsc_req_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**appSessionId** | **char \*** | String identifying the Individual Application Session Context resource. | 
**events_subsc_req_data** | **[events_subsc_req_data_t](events_subsc_req_data.md) \*** | Deletion of the Individual Application Session Context resource, req notification. | [optional] 

### Return type

[app_session_context_t](app_session_context.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualApplicationSessionContextDocumentAPI_getAppSession**
```c
// Reads an existing Individual Application Session Context
//
app_session_context_t* IndividualApplicationSessionContextDocumentAPI_getAppSession(apiClient_t *apiClient, char * appSessionId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**appSessionId** | **char \*** | String identifying the resource. | 

### Return type

[app_session_context_t](app_session_context.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualApplicationSessionContextDocumentAPI_modAppSession**
```c
// Modifies an existing Individual Application Session Context
//
app_session_context_t* IndividualApplicationSessionContextDocumentAPI_modAppSession(apiClient_t *apiClient, char * appSessionId, app_session_context_update_data_patch_t * app_session_context_update_data_patch);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**appSessionId** | **char \*** | String identifying the resource. | 
**app_session_context_update_data_patch** | **[app_session_context_update_data_patch_t](app_session_context_update_data_patch.md) \*** | Modification of the resource. | 

### Return type

[app_session_context_t](app_session_context.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/merge-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

