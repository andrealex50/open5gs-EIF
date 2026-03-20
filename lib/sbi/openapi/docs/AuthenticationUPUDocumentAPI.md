# AuthenticationUPUDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AuthenticationUPUDocumentAPI_createAuthenticationUPU**](AuthenticationUPUDocumentAPI.md#AuthenticationUPUDocumentAPI_createAuthenticationUPU) | **PUT** /subscription-data/{ueId}/ue-update-confirmation-data/upu-data | To store the UPU acknowledgement information of a UE
[**AuthenticationUPUDocumentAPI_queryAuthUPU**](AuthenticationUPUDocumentAPI.md#AuthenticationUPUDocumentAPI_queryAuthUPU) | **GET** /subscription-data/{ueId}/ue-update-confirmation-data/upu-data | Retrieves the UPU acknowledgement information of a UE


# **AuthenticationUPUDocumentAPI_createAuthenticationUPU**
```c
// To store the UPU acknowledgement information of a UE
//
void AuthenticationUPUDocumentAPI_createAuthenticationUPU(apiClient_t *apiClient, char * ueId, upu_data_t * upu_data, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**upu_data** | **[upu_data_t](upu_data.md) \*** |  | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AuthenticationUPUDocumentAPI_queryAuthUPU**
```c
// Retrieves the UPU acknowledgement information of a UE
//
upu_data_t* AuthenticationUPUDocumentAPI_queryAuthUPU(apiClient_t *apiClient, char * ueId, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[upu_data_t](upu_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

