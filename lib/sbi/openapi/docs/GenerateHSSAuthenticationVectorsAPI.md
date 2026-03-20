# GenerateHSSAuthenticationVectorsAPI

All URIs are relative to *https://example.com/nudm-ueau/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GenerateHSSAuthenticationVectorsAPI_generateAv**](GenerateHSSAuthenticationVectorsAPI.md#GenerateHSSAuthenticationVectorsAPI_generateAv) | **POST** /{supi}/hss-security-information/{hssAuthType}/generate-av | Generate authentication data for the UE in EPS or IMS domain


# **GenerateHSSAuthenticationVectorsAPI_generateAv**
```c
// Generate authentication data for the UE in EPS or IMS domain
//
hss_authentication_info_result_t* GenerateHSSAuthenticationVectorsAPI_generateAv(apiClient_t *apiClient, char * supi, hss_auth_type_in_uri_e hssAuthType, hss_authentication_info_request_t * hss_authentication_info_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supi** | **char \*** | SUPI of the user | 
**hssAuthType** | **hss_auth_type_in_uri_e** | Type of AV requested by HSS | 
**hss_authentication_info_request** | **[hss_authentication_info_request_t](hss_authentication_info_request.md) \*** |  | 

### Return type

[hss_authentication_info_result_t](hss_authentication_info_result.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

