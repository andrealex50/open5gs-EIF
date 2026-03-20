# GenerateGBAAuthenticationVectorsAPI

All URIs are relative to *https://example.com/nudm-ueau/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GenerateGBAAuthenticationVectorsAPI_generateGbaAv**](GenerateGBAAuthenticationVectorsAPI.md#GenerateGBAAuthenticationVectorsAPI_generateGbaAv) | **POST** /{supi}/gba-security-information/generate-av | Generate authentication data for the UE in GBA domain


# **GenerateGBAAuthenticationVectorsAPI_generateGbaAv**
```c
// Generate authentication data for the UE in GBA domain
//
gba_authentication_info_result_t* GenerateGBAAuthenticationVectorsAPI_generateGbaAv(apiClient_t *apiClient, char * supi, gba_authentication_info_request_t * gba_authentication_info_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supi** | **char \*** | SUPI of the user | 
**gba_authentication_info_request** | **[gba_authentication_info_request_t](gba_authentication_info_request.md) \*** |  | 

### Return type

[gba_authentication_info_result_t](gba_authentication_info_result.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

