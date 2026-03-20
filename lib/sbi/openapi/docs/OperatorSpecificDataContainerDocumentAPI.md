# OperatorSpecificDataContainerDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**OperatorSpecificDataContainerDocumentAPI_createOperSpecData**](OperatorSpecificDataContainerDocumentAPI.md#OperatorSpecificDataContainerDocumentAPI_createOperSpecData) | **PUT** /subscription-data/{ueId}/operator-specific-data | To create an operator-specific data resource of a UE
[**OperatorSpecificDataContainerDocumentAPI_deleteOperSpecData**](OperatorSpecificDataContainerDocumentAPI.md#OperatorSpecificDataContainerDocumentAPI_deleteOperSpecData) | **DELETE** /subscription-data/{ueId}/operator-specific-data | To remove an operator-specific data resource of a UE
[**OperatorSpecificDataContainerDocumentAPI_modifyOperSpecData**](OperatorSpecificDataContainerDocumentAPI.md#OperatorSpecificDataContainerDocumentAPI_modifyOperSpecData) | **PATCH** /subscription-data/{ueId}/operator-specific-data | To modify operator specific data of a UE
[**OperatorSpecificDataContainerDocumentAPI_queryOperSpecData**](OperatorSpecificDataContainerDocumentAPI.md#OperatorSpecificDataContainerDocumentAPI_queryOperSpecData) | **GET** /subscription-data/{ueId}/operator-specific-data | Retrieves the operator specific data of a UE


# **OperatorSpecificDataContainerDocumentAPI_createOperSpecData**
```c
// To create an operator-specific data resource of a UE
//
list_t*_t* OperatorSpecificDataContainerDocumentAPI_createOperSpecData(apiClient_t *apiClient, char * ueId, list_t* request_body, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**request_body** | **list_t*** |  | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[list_t*_t](operator_specific_data_container.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OperatorSpecificDataContainerDocumentAPI_deleteOperSpecData**
```c
// To remove an operator-specific data resource of a UE
//
void OperatorSpecificDataContainerDocumentAPI_deleteOperSpecData(apiClient_t *apiClient, char * ueId);
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
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **OperatorSpecificDataContainerDocumentAPI_modifyOperSpecData**
```c
// To modify operator specific data of a UE
//
patch_result_t* OperatorSpecificDataContainerDocumentAPI_modifyOperSpecData(apiClient_t *apiClient, char * ueId, list_t * patch_item, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
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

# **OperatorSpecificDataContainerDocumentAPI_queryOperSpecData**
```c
// Retrieves the operator specific data of a UE
//
list_t*_t* OperatorSpecificDataContainerDocumentAPI_queryOperSpecData(apiClient_t *apiClient, char * ueId, list_t * fields, char * supported_features, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**fields** | **[list_t](char.md) \*** | attributes to be retrieved | [optional] 
**supported_features** | **char \*** | Supported Features | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[list_t*_t](operator_specific_data_container.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

