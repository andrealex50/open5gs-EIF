# OperatorSpecificDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**OperatorSpecificDataDocumentAPI_deleteOperatorSpecificData**](OperatorSpecificDataDocumentAPI.md#OperatorSpecificDataDocumentAPI_deleteOperatorSpecificData) | **DELETE** /policy-data/ues/{ueId}/operator-specific-data | When the feature OSDResource_Create_Delete is supported, delete OperatorSpecificData resource
[**OperatorSpecificDataDocumentAPI_readOperatorSpecificData**](OperatorSpecificDataDocumentAPI.md#OperatorSpecificDataDocumentAPI_readOperatorSpecificData) | **GET** /policy-data/ues/{ueId}/operator-specific-data | Retrieve the operator specific policy data of an UE
[**OperatorSpecificDataDocumentAPI_replaceOperatorSpecificData**](OperatorSpecificDataDocumentAPI.md#OperatorSpecificDataDocumentAPI_replaceOperatorSpecificData) | **PUT** /policy-data/ues/{ueId}/operator-specific-data | Create or modify the operator specific policy data of a UE
[**OperatorSpecificDataDocumentAPI_updateOperatorSpecificData**](OperatorSpecificDataDocumentAPI.md#OperatorSpecificDataDocumentAPI_updateOperatorSpecificData) | **PATCH** /policy-data/ues/{ueId}/operator-specific-data | Modify the operator specific policy data of a UE


# **OperatorSpecificDataDocumentAPI_deleteOperatorSpecificData**
```c
// When the feature OSDResource_Create_Delete is supported, delete OperatorSpecificData resource
//
void OperatorSpecificDataDocumentAPI_deleteOperatorSpecificData(apiClient_t *apiClient, char * ueId);
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
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OperatorSpecificDataDocumentAPI_readOperatorSpecificData**
```c
// Retrieve the operator specific policy data of an UE
//
list_t*_t* OperatorSpecificDataDocumentAPI_readOperatorSpecificData(apiClient_t *apiClient, char * ueId, list_t * fields, char * supp_feat);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE Id | 
**fields** | **[list_t](char.md) \*** | attributes to be retrieved | [optional] 
**supp_feat** | **char \*** | Supported Features | [optional] 

### Return type

[list_t*_t](operator_specific_data_container.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OperatorSpecificDataDocumentAPI_replaceOperatorSpecificData**
```c
// Create or modify the operator specific policy data of a UE
//
list_t*_t* OperatorSpecificDataDocumentAPI_replaceOperatorSpecificData(apiClient_t *apiClient, char * ueId, list_t* request_body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE Id | 
**request_body** | **list_t*** |  | 

### Return type

[list_t*_t](operator_specific_data_container.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OperatorSpecificDataDocumentAPI_updateOperatorSpecificData**
```c
// Modify the operator specific policy data of a UE
//
patch_result_t* OperatorSpecificDataDocumentAPI_updateOperatorSpecificData(apiClient_t *apiClient, char * ueId, list_t * patch_item);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE Id | 
**patch_item** | **[list_t](patch_item.md) \*** |  | 

### Return type

[patch_result_t](patch_result.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

