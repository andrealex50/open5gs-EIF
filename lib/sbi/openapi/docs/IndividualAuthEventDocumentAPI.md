# IndividualAuthEventDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualAuthEventDocumentAPI_deleteIndividualAuthenticationStatus**](IndividualAuthEventDocumentAPI.md#IndividualAuthEventDocumentAPI_deleteIndividualAuthenticationStatus) | **DELETE** /subscription-data/{ueId}/authentication-data/authentication-status/{servingNetworkName} | To remove the Individual Authentication Status of a UE
[**IndividualAuthEventDocumentAPI_queryIndividualAuthenticationStatus**](IndividualAuthEventDocumentAPI.md#IndividualAuthEventDocumentAPI_queryIndividualAuthenticationStatus) | **GET** /subscription-data/{ueId}/authentication-data/authentication-status/{servingNetworkName} | Retrieves the Individual Authentication Status of a UE


# **IndividualAuthEventDocumentAPI_deleteIndividualAuthenticationStatus**
```c
// To remove the Individual Authentication Status of a UE
//
void IndividualAuthEventDocumentAPI_deleteIndividualAuthenticationStatus(apiClient_t *apiClient, char * ueId, char * servingNetworkName);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**servingNetworkName** | **char \*** | Serving Network Name | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualAuthEventDocumentAPI_queryIndividualAuthenticationStatus**
```c
// Retrieves the Individual Authentication Status of a UE
//
auth_event_t* IndividualAuthEventDocumentAPI_queryIndividualAuthenticationStatus(apiClient_t *apiClient, char * ueId, char * servingNetworkName, list_t * fields, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**servingNetworkName** | **char \*** | Serving Network Name | 
**fields** | **[list_t](char.md) \*** | attributes to be retrieved | [optional] 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[auth_event_t](auth_event.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

