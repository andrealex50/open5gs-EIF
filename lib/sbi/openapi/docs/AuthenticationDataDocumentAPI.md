# AuthenticationDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AuthenticationDataDocumentAPI_queryAuthSubsData**](AuthenticationDataDocumentAPI.md#AuthenticationDataDocumentAPI_queryAuthSubsData) | **GET** /subscription-data/{ueId}/authentication-data/authentication-subscription | Retrieves the authentication subscription data of a UE


# **AuthenticationDataDocumentAPI_queryAuthSubsData**
```c
// Retrieves the authentication subscription data of a UE
//
authentication_subscription_t* AuthenticationDataDocumentAPI_queryAuthSubsData(apiClient_t *apiClient, char * ueId, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[authentication_subscription_t](authentication_subscription.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

