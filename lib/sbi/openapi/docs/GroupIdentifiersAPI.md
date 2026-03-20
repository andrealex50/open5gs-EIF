# GroupIdentifiersAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GroupIdentifiersAPI_getGroupIdentifiers**](GroupIdentifiersAPI.md#GroupIdentifiersAPI_getGroupIdentifiers) | **GET** /group-data/group-identifiers | Mapping of Group Identifiers


# **GroupIdentifiersAPI_getGroupIdentifiers**
```c
// Mapping of Group Identifiers
//
group_identifiers_t* GroupIdentifiersAPI_getGroupIdentifiers(apiClient_t *apiClient, char * ext_group_id, char * int_group_id, int ue_id_ind, char * supported_features, char * af_id, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ext_group_id** | **char \*** | External Group Identifier | [optional] 
**int_group_id** | **char \*** | Internal Group Identifier | [optional] 
**ue_id_ind** | **int** | Indication whether UE identifiers are required or not | [optional] [default to false]
**supported_features** | **char \*** | Supported Features | [optional] 
**af_id** | **char \*** | AF identifier | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[group_identifiers_t](group_identifiers.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

