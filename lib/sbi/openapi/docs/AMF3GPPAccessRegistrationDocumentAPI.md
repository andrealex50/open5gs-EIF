# AMF3GPPAccessRegistrationDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AMF3GPPAccessRegistrationDocumentAPI_amfContext3gpp**](AMF3GPPAccessRegistrationDocumentAPI.md#AMF3GPPAccessRegistrationDocumentAPI_amfContext3gpp) | **PATCH** /subscription-data/{ueId}/context-data/amf-3gpp-access | To modify the AMF context data of a UE using 3gpp access in the UDR
[**AMF3GPPAccessRegistrationDocumentAPI_createAmfContext3gpp**](AMF3GPPAccessRegistrationDocumentAPI.md#AMF3GPPAccessRegistrationDocumentAPI_createAmfContext3gpp) | **PUT** /subscription-data/{ueId}/context-data/amf-3gpp-access | To store the AMF context data of a UE using 3gpp access in the UDR
[**AMF3GPPAccessRegistrationDocumentAPI_queryAmfContext3gpp**](AMF3GPPAccessRegistrationDocumentAPI.md#AMF3GPPAccessRegistrationDocumentAPI_queryAmfContext3gpp) | **GET** /subscription-data/{ueId}/context-data/amf-3gpp-access | Retrieves the AMF context data of a UE using 3gpp access


# **AMF3GPPAccessRegistrationDocumentAPI_amfContext3gpp**
```c
// To modify the AMF context data of a UE using 3gpp access in the UDR
//
patch_result_t* AMF3GPPAccessRegistrationDocumentAPI_amfContext3gpp(apiClient_t *apiClient, char * ueId, list_t * patch_item, char * supported_features);
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

# **AMF3GPPAccessRegistrationDocumentAPI_createAmfContext3gpp**
```c
// To store the AMF context data of a UE using 3gpp access in the UDR
//
amf3_gpp_access_registration_t* AMF3GPPAccessRegistrationDocumentAPI_createAmfContext3gpp(apiClient_t *apiClient, char * ueId, amf3_gpp_access_registration_t * amf3_gpp_access_registration);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**amf3_gpp_access_registration** | **[amf3_gpp_access_registration_t](amf3_gpp_access_registration.md) \*** |  | 

### Return type

[amf3_gpp_access_registration_t](amf3_gpp_access_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AMF3GPPAccessRegistrationDocumentAPI_queryAmfContext3gpp**
```c
// Retrieves the AMF context data of a UE using 3gpp access
//
amf3_gpp_access_registration_t* AMF3GPPAccessRegistrationDocumentAPI_queryAmfContext3gpp(apiClient_t *apiClient, char * ueId, list_t * fields, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**fields** | **[list_t](char.md) \*** | attributes to be retrieved | [optional] 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[amf3_gpp_access_registration_t](amf3_gpp_access_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

