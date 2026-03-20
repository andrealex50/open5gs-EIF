# NFInstanceIDDocumentAPI

All URIs are relative to *https://example.com/nnrf-nfm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**NFInstanceIDDocumentAPI_deregisterNFInstance**](NFInstanceIDDocumentAPI.md#NFInstanceIDDocumentAPI_deregisterNFInstance) | **DELETE** /nf-instances/{nfInstanceID} | Deregisters a given NF Instance
[**NFInstanceIDDocumentAPI_getNFInstance**](NFInstanceIDDocumentAPI.md#NFInstanceIDDocumentAPI_getNFInstance) | **GET** /nf-instances/{nfInstanceID} | Read the profile of a given NF Instance
[**NFInstanceIDDocumentAPI_registerNFInstance**](NFInstanceIDDocumentAPI.md#NFInstanceIDDocumentAPI_registerNFInstance) | **PUT** /nf-instances/{nfInstanceID} | Register a new NF Instance
[**NFInstanceIDDocumentAPI_updateNFInstance**](NFInstanceIDDocumentAPI.md#NFInstanceIDDocumentAPI_updateNFInstance) | **PATCH** /nf-instances/{nfInstanceID} | Update NF Instance profile


# **NFInstanceIDDocumentAPI_deregisterNFInstance**
```c
// Deregisters a given NF Instance
//
void NFInstanceIDDocumentAPI_deregisterNFInstance(apiClient_t *apiClient, char * nfInstanceID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**nfInstanceID** | **char \*** | Unique ID of the NF Instance to deregister | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **NFInstanceIDDocumentAPI_getNFInstance**
```c
// Read the profile of a given NF Instance
//
nf_profile_t* NFInstanceIDDocumentAPI_getNFInstance(apiClient_t *apiClient, char * nfInstanceID, char * requester_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**nfInstanceID** | **char \*** | Unique ID of the NF Instance | 
**requester_features** | **char \*** | Features supported by the NF Service Consumer | [optional] 

### Return type

[nf_profile_t](nf_profile.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **NFInstanceIDDocumentAPI_registerNFInstance**
```c
// Register a new NF Instance
//
nf_profile_t* NFInstanceIDDocumentAPI_registerNFInstance(apiClient_t *apiClient, char * nfInstanceID, nf_profile_t * nf_profile, char * Content_Encoding, char * Accept_Encoding);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**nfInstanceID** | **char \*** | Unique ID of the NF Instance to register | 
**nf_profile** | **[nf_profile_t](nf_profile.md) \*** |  | 
**Content_Encoding** | **char \*** | Content-Encoding, described in IETF RFC 7231 | [optional] 
**Accept_Encoding** | **char \*** | Accept-Encoding, described in IETF RFC 7231 | [optional] 

### Return type

[nf_profile_t](nf_profile.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **NFInstanceIDDocumentAPI_updateNFInstance**
```c
// Update NF Instance profile
//
nf_profile_t* NFInstanceIDDocumentAPI_updateNFInstance(apiClient_t *apiClient, char * nfInstanceID, list_t * patch_item, char * Content_Encoding, char * Accept_Encoding, char * If_Match);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**nfInstanceID** | **char \*** | Unique ID of the NF Instance to update | 
**patch_item** | **[list_t](patch_item.md) \*** |  | 
**Content_Encoding** | **char \*** | Content-Encoding, described in IETF RFC 7231 | [optional] 
**Accept_Encoding** | **char \*** | Accept-Encoding, described in IETF RFC 7231 | [optional] 
**If_Match** | **char \*** | Validator for conditional requests, as described in IETF RFC 7232, 3.2 | [optional] 

### Return type

[nf_profile_t](nf_profile.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

