# SubscriptionIDDocumentAPI

All URIs are relative to *https://example.com/nnrf-nfm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscriptionIDDocumentAPI_removeSubscription**](SubscriptionIDDocumentAPI.md#SubscriptionIDDocumentAPI_removeSubscription) | **DELETE** /subscriptions/{subscriptionID} | Deletes a subscription
[**SubscriptionIDDocumentAPI_updateSubscription**](SubscriptionIDDocumentAPI.md#SubscriptionIDDocumentAPI_updateSubscription) | **PATCH** /subscriptions/{subscriptionID} | Updates a subscription


# **SubscriptionIDDocumentAPI_removeSubscription**
```c
// Deletes a subscription
//
void SubscriptionIDDocumentAPI_removeSubscription(apiClient_t *apiClient, char * subscriptionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subscriptionID** | **char \*** | Unique ID of the subscription to remove | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SubscriptionIDDocumentAPI_updateSubscription**
```c
// Updates a subscription
//
subscription_data_t* SubscriptionIDDocumentAPI_updateSubscription(apiClient_t *apiClient, char * subscriptionID, list_t * patch_item, char * Content_Encoding, char * Accept_Encoding);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subscriptionID** | **char \*** | Unique ID of the subscription to update | 
**patch_item** | **[list_t](patch_item.md) \*** |  | 
**Content_Encoding** | **char \*** | Content-Encoding, described in IETF RFC 7231 | [optional] 
**Accept_Encoding** | **char \*** | Accept-Encoding, described in IETF RFC 7231 | [optional] 

### Return type

[subscription_data_t](subscription_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

