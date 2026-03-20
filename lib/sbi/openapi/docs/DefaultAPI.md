# DefaultAPI

All URIs are relative to *https://example.com/nausf-auth/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**DefaultAPI_eapAuthMethod**](DefaultAPI.md#DefaultAPI_eapAuthMethod) | **POST** /ue-authentications/{authCtxId}/eap-session | 
[**DefaultAPI_proseAuth**](DefaultAPI.md#DefaultAPI_proseAuth) | **POST** /prose-authentications/{authCtxId}/prose-auth | 
[**DefaultAPI_proseAuthenticationsPost**](DefaultAPI.md#DefaultAPI_proseAuthenticationsPost) | **POST** /prose-authentications | 
[**DefaultAPI_rgAuthenticationsPost**](DefaultAPI.md#DefaultAPI_rgAuthenticationsPost) | **POST** /rg-authentications | 
[**DefaultAPI_ueAuthenticationsAuthCtxId5gAkaConfirmationPut**](DefaultAPI.md#DefaultAPI_ueAuthenticationsAuthCtxId5gAkaConfirmationPut) | **PUT** /ue-authentications/{authCtxId}/5g-aka-confirmation | 
[**DefaultAPI_ueAuthenticationsDeregisterPost**](DefaultAPI.md#DefaultAPI_ueAuthenticationsDeregisterPost) | **POST** /ue-authentications/deregister | 
[**DefaultAPI_ueAuthenticationsPost**](DefaultAPI.md#DefaultAPI_ueAuthenticationsPost) | **POST** /ue-authentications | 


# **DefaultAPI_eapAuthMethod**
```c
eap_session_t* DefaultAPI_eapAuthMethod(apiClient_t *apiClient, char * authCtxId, eap_session_t * eap_session);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**authCtxId** | **char \*** |  | 
**eap_session** | **[eap_session_t](eap_session.md) \*** |  | [optional] 

### Return type

[eap_session_t](eap_session.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/3gppHal+json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DefaultAPI_proseAuth**
```c
pro_se_eap_session_t* DefaultAPI_proseAuth(apiClient_t *apiClient, char * authCtxId, pro_se_eap_session_t * pro_se_eap_session);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**authCtxId** | **char \*** |  | 
**pro_se_eap_session** | **[pro_se_eap_session_t](pro_se_eap_session.md) \*** |  | [optional] 

### Return type

[pro_se_eap_session_t](pro_se_eap_session.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/3gppHal+json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DefaultAPI_proseAuthenticationsPost**
```c
pro_se_authentication_result_t* DefaultAPI_proseAuthenticationsPost(apiClient_t *apiClient, pro_se_authentication_info_t * pro_se_authentication_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pro_se_authentication_info** | **[pro_se_authentication_info_t](pro_se_authentication_info.md) \*** |  | 

### Return type

[pro_se_authentication_result_t](pro_se_authentication_result.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/3gppHal+json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DefaultAPI_rgAuthenticationsPost**
```c
rg_auth_ctx_t* DefaultAPI_rgAuthenticationsPost(apiClient_t *apiClient, rg_authentication_info_t * rg_authentication_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**rg_authentication_info** | **[rg_authentication_info_t](rg_authentication_info.md) \*** |  | 

### Return type

[rg_auth_ctx_t](rg_auth_ctx.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DefaultAPI_ueAuthenticationsAuthCtxId5gAkaConfirmationPut**
```c
confirmation_data_response_t* DefaultAPI_ueAuthenticationsAuthCtxId5gAkaConfirmationPut(apiClient_t *apiClient, char * authCtxId, confirmation_data_t * confirmation_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**authCtxId** | **char \*** |  | 
**confirmation_data** | **[confirmation_data_t](confirmation_data.md) \*** |  | [optional] 

### Return type

[confirmation_data_response_t](confirmation_data_response.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DefaultAPI_ueAuthenticationsDeregisterPost**
```c
void DefaultAPI_ueAuthenticationsDeregisterPost(apiClient_t *apiClient, deregistration_info_t * deregistration_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**deregistration_info** | **[deregistration_info_t](deregistration_info.md) \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **DefaultAPI_ueAuthenticationsPost**
```c
ue_authentication_ctx_t* DefaultAPI_ueAuthenticationsPost(apiClient_t *apiClient, authentication_info_t * authentication_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**authentication_info** | **[authentication_info_t](authentication_info.md) \*** |  | 

### Return type

[ue_authentication_ctx_t](ue_authentication_ctx.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/3gppHal+json, application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

