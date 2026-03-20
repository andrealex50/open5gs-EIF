# GenerateAuthDataAPI

All URIs are relative to *https://example.com/nudm-ueau/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GenerateAuthDataAPI_generateAuthData**](GenerateAuthDataAPI.md#GenerateAuthDataAPI_generateAuthData) | **POST** /{supiOrSuci}/security-information/generate-auth-data | Generate authentication data for the UE


# **GenerateAuthDataAPI_generateAuthData**
```c
// Generate authentication data for the UE
//
authentication_info_result_t* GenerateAuthDataAPI_generateAuthData(apiClient_t *apiClient, char * supiOrSuci, authentication_info_request_t * authentication_info_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supiOrSuci** | **char \*** | SUPI or SUCI of the user | 
**authentication_info_request** | **[authentication_info_request_t](authentication_info_request.md) \*** |  | 

### Return type

[authentication_info_result_t](authentication_info_result.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

