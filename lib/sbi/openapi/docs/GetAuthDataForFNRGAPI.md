# GetAuthDataForFNRGAPI

All URIs are relative to *https://example.com/nudm-ueau/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GetAuthDataForFNRGAPI_getRgAuthData**](GetAuthDataForFNRGAPI.md#GetAuthDataForFNRGAPI_getRgAuthData) | **GET** /{supiOrSuci}/security-information-rg | Get authentication data for the FN-RG


# **GetAuthDataForFNRGAPI_getRgAuthData**
```c
// Get authentication data for the FN-RG
//
rg_auth_ctx_t* GetAuthDataForFNRGAPI_getRgAuthData(apiClient_t *apiClient, char * supiOrSuci, int authenticated_ind, char * supported_features, plmn_id_t * plmn_id, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supiOrSuci** | **char \*** | SUPI or SUCI of the user | 
**authenticated_ind** | **int** | Authenticated indication | 
**supported_features** | **char \*** | Supported Features | [optional] 
**plmn_id** | **[plmn_id_t](.md) \*** | serving PLMN ID | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[rg_auth_ctx_t](rg_auth_ctx.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

