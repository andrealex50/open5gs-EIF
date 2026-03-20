# ServiceSpecificAuthorizationInfoDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ServiceSpecificAuthorizationInfoDocumentAPI_createServiceSpecificAuthorizationInfo**](ServiceSpecificAuthorizationInfoDocumentAPI.md#ServiceSpecificAuthorizationInfoDocumentAPI_createServiceSpecificAuthorizationInfo) | **PUT** /subscription-data/{ueId}/context-data/service-specific-authorizations/{serviceType} | Create Service Specific Authorization Info
[**ServiceSpecificAuthorizationInfoDocumentAPI_getServiceSpecificAuthorizationInfo**](ServiceSpecificAuthorizationInfoDocumentAPI.md#ServiceSpecificAuthorizationInfoDocumentAPI_getServiceSpecificAuthorizationInfo) | **GET** /subscription-data/{ueId}/context-data/service-specific-authorizations/{serviceType} | Retrieve Service Specific Authorization Info
[**ServiceSpecificAuthorizationInfoDocumentAPI_modifyServiceSpecificAuthorizationInfo**](ServiceSpecificAuthorizationInfoDocumentAPI.md#ServiceSpecificAuthorizationInfoDocumentAPI_modifyServiceSpecificAuthorizationInfo) | **PATCH** /subscription-data/{ueId}/context-data/service-specific-authorizations/{serviceType} | Modify Service Specific Authorization Info
[**ServiceSpecificAuthorizationInfoDocumentAPI_removeServiceSpecificAuthorizationInfo**](ServiceSpecificAuthorizationInfoDocumentAPI.md#ServiceSpecificAuthorizationInfoDocumentAPI_removeServiceSpecificAuthorizationInfo) | **DELETE** /subscription-data/{ueId}/context-data/service-specific-authorizations/{serviceType} | Delete Service Specific Authorization Info


# **ServiceSpecificAuthorizationInfoDocumentAPI_createServiceSpecificAuthorizationInfo**
```c
// Create Service Specific Authorization Info
//
service_specific_authorization_info_t* ServiceSpecificAuthorizationInfoDocumentAPI_createServiceSpecificAuthorizationInfo(apiClient_t *apiClient, char * ueId, service_type_t * serviceType, service_specific_authorization_info_t * service_specific_authorization_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**serviceType** | **[service_type_t](.md) \*** | Service Type | 
**service_specific_authorization_info** | **[service_specific_authorization_info_t](service_specific_authorization_info.md) \*** |  | 

### Return type

[service_specific_authorization_info_t](service_specific_authorization_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceSpecificAuthorizationInfoDocumentAPI_getServiceSpecificAuthorizationInfo**
```c
// Retrieve Service Specific Authorization Info
//
service_specific_authorization_info_t* ServiceSpecificAuthorizationInfoDocumentAPI_getServiceSpecificAuthorizationInfo(apiClient_t *apiClient, char * ueId, service_type_t * serviceType);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**serviceType** | **[service_type_t](.md) \*** | Service Type | 

### Return type

[service_specific_authorization_info_t](service_specific_authorization_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ServiceSpecificAuthorizationInfoDocumentAPI_modifyServiceSpecificAuthorizationInfo**
```c
// Modify Service Specific Authorization Info
//
patch_result_t* ServiceSpecificAuthorizationInfoDocumentAPI_modifyServiceSpecificAuthorizationInfo(apiClient_t *apiClient, char * ueId, service_type_t * serviceType, list_t * patch_item, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**serviceType** | **[service_type_t](.md) \*** | Service Type | 
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

# **ServiceSpecificAuthorizationInfoDocumentAPI_removeServiceSpecificAuthorizationInfo**
```c
// Delete Service Specific Authorization Info
//
void ServiceSpecificAuthorizationInfoDocumentAPI_removeServiceSpecificAuthorizationInfo(apiClient_t *apiClient, char * ueId, service_type_t * serviceType);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**serviceType** | **[service_type_t](.md) \*** | Service Type | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

