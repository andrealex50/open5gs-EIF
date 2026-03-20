# NIDDAuthorizationInfoDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**NIDDAuthorizationInfoDocumentAPI_createNIDDAuthorizationInfo**](NIDDAuthorizationInfoDocumentAPI.md#NIDDAuthorizationInfoDocumentAPI_createNIDDAuthorizationInfo) | **PUT** /subscription-data/{ueId}/context-data/nidd-authorizations | Create NIDD Authorization Info
[**NIDDAuthorizationInfoDocumentAPI_getNiddAuthorizationInfo**](NIDDAuthorizationInfoDocumentAPI.md#NIDDAuthorizationInfoDocumentAPI_getNiddAuthorizationInfo) | **GET** /subscription-data/{ueId}/context-data/nidd-authorizations | Retrieve NIDD Authorization Info
[**NIDDAuthorizationInfoDocumentAPI_modifyNiddAuthorizationInfo**](NIDDAuthorizationInfoDocumentAPI.md#NIDDAuthorizationInfoDocumentAPI_modifyNiddAuthorizationInfo) | **PATCH** /subscription-data/{ueId}/context-data/nidd-authorizations | Modify NIDD Authorization Info
[**NIDDAuthorizationInfoDocumentAPI_removeNiddAuthorizationInfo**](NIDDAuthorizationInfoDocumentAPI.md#NIDDAuthorizationInfoDocumentAPI_removeNiddAuthorizationInfo) | **DELETE** /subscription-data/{ueId}/context-data/nidd-authorizations | Delete NIDD Authorization Info


# **NIDDAuthorizationInfoDocumentAPI_createNIDDAuthorizationInfo**
```c
// Create NIDD Authorization Info
//
nidd_authorization_info_t* NIDDAuthorizationInfoDocumentAPI_createNIDDAuthorizationInfo(apiClient_t *apiClient, char * ueId, nidd_authorization_info_t * nidd_authorization_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**nidd_authorization_info** | **[nidd_authorization_info_t](nidd_authorization_info.md) \*** |  | 

### Return type

[nidd_authorization_info_t](nidd_authorization_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **NIDDAuthorizationInfoDocumentAPI_getNiddAuthorizationInfo**
```c
// Retrieve NIDD Authorization Info
//
nidd_authorization_info_t* NIDDAuthorizationInfoDocumentAPI_getNiddAuthorizationInfo(apiClient_t *apiClient, char * ueId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 

### Return type

[nidd_authorization_info_t](nidd_authorization_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **NIDDAuthorizationInfoDocumentAPI_modifyNiddAuthorizationInfo**
```c
// Modify NIDD Authorization Info
//
patch_result_t* NIDDAuthorizationInfoDocumentAPI_modifyNiddAuthorizationInfo(apiClient_t *apiClient, char * ueId, list_t * patch_item, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**patch_item** | **[list_t](patch_item.md) \*** |  | 
**supported_features** | **char \*** | Features required to be supported by the target NF | [optional] 

### Return type

[patch_result_t](patch_result.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **NIDDAuthorizationInfoDocumentAPI_removeNiddAuthorizationInfo**
```c
// Delete NIDD Authorization Info
//
void NIDDAuthorizationInfoDocumentAPI_removeNiddAuthorizationInfo(apiClient_t *apiClient, char * ueId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

