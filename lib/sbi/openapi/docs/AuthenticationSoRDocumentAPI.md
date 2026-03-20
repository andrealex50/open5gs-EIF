# AuthenticationSoRDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AuthenticationSoRDocumentAPI_createAuthenticationSoR**](AuthenticationSoRDocumentAPI.md#AuthenticationSoRDocumentAPI_createAuthenticationSoR) | **PUT** /subscription-data/{ueId}/ue-update-confirmation-data/sor-data | To store the SoR acknowledgement information of a UE and ME support of SOR CMCI
[**AuthenticationSoRDocumentAPI_queryAuthSoR**](AuthenticationSoRDocumentAPI.md#AuthenticationSoRDocumentAPI_queryAuthSoR) | **GET** /subscription-data/{ueId}/ue-update-confirmation-data/sor-data | Retrieves the SoR acknowledgement information of a UE and ME support of SOR CMCI
[**AuthenticationSoRDocumentAPI_updateAuthenticationSoR**](AuthenticationSoRDocumentAPI.md#AuthenticationSoRDocumentAPI_updateAuthenticationSoR) | **PATCH** /subscription-data/{ueId}/ue-update-confirmation-data/sor-data | Updates the ME support of SOR CMCI information of a UE


# **AuthenticationSoRDocumentAPI_createAuthenticationSoR**
```c
// To store the SoR acknowledgement information of a UE and ME support of SOR CMCI
//
void AuthenticationSoRDocumentAPI_createAuthenticationSoR(apiClient_t *apiClient, char * ueId, sor_data_t * sor_data, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**sor_data** | **[sor_data_t](sor_data.md) \*** |  | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AuthenticationSoRDocumentAPI_queryAuthSoR**
```c
// Retrieves the SoR acknowledgement information of a UE and ME support of SOR CMCI
//
sor_data_t* AuthenticationSoRDocumentAPI_queryAuthSoR(apiClient_t *apiClient, char * ueId, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[sor_data_t](sor_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AuthenticationSoRDocumentAPI_updateAuthenticationSoR**
```c
// Updates the ME support of SOR CMCI information of a UE
//
patch_result_t* AuthenticationSoRDocumentAPI_updateAuthenticationSoR(apiClient_t *apiClient, char * ueId, list_t * patch_item, char * supported_features);
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

