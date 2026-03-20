# SubscriptionDeletionForSharedDataAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscriptionDeletionForSharedDataAPI_unsubscribeForSharedData**](SubscriptionDeletionForSharedDataAPI.md#SubscriptionDeletionForSharedDataAPI_unsubscribeForSharedData) | **DELETE** /shared-data-subscriptions/{subscriptionId} | unsubscribe from notifications for shared data


# **SubscriptionDeletionForSharedDataAPI_unsubscribeForSharedData**
```c
// unsubscribe from notifications for shared data
//
void SubscriptionDeletionForSharedDataAPI_unsubscribeForSharedData(apiClient_t *apiClient, char * subscriptionId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subscriptionId** | **char \*** | Id of the Shared data Subscription | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

