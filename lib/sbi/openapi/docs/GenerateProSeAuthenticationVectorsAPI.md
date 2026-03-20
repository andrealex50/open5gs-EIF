# GenerateProSeAuthenticationVectorsAPI

All URIs are relative to *https://example.com/nudm-ueau/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GenerateProSeAuthenticationVectorsAPI_generateProseAV**](GenerateProSeAuthenticationVectorsAPI.md#GenerateProSeAuthenticationVectorsAPI_generateProseAV) | **POST** /{supiOrSuci}/prose-security-information/generate-av | Generate authentication data for ProSe


# **GenerateProSeAuthenticationVectorsAPI_generateProseAV**
```c
// Generate authentication data for ProSe
//
pro_se_authentication_info_result_t* GenerateProSeAuthenticationVectorsAPI_generateProseAV(apiClient_t *apiClient, char * supiOrSuci, pro_se_authentication_info_request_t * pro_se_authentication_info_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supiOrSuci** | **char \*** | SUPI or SUCI of the user | 
**pro_se_authentication_info_request** | **[pro_se_authentication_info_request_t](pro_se_authentication_info_request.md) \*** |  | 

### Return type

[pro_se_authentication_info_result_t](pro_se_authentication_info_result.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

