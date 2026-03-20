# AuthenticationSubscriptionDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AuthenticationSubscriptionDocumentAPI_modifyAuthenticationSubscription**](AuthenticationSubscriptionDocumentAPI.md#AuthenticationSubscriptionDocumentAPI_modifyAuthenticationSubscription) | **PATCH** /subscription-data/{ueId}/authentication-data/authentication-subscription | modify the authentication subscription data of a UE


# **AuthenticationSubscriptionDocumentAPI_modifyAuthenticationSubscription**
```c
// modify the authentication subscription data of a UE
//
patch_result_t* AuthenticationSubscriptionDocumentAPI_modifyAuthenticationSubscription(apiClient_t *apiClient, char * ueId, list_t * patch_item, char * supported_features);
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
 - **Accept**: application/problem+json, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

