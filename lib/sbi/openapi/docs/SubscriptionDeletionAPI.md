# SubscriptionDeletionAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscriptionDeletionAPI_unsubscribe**](SubscriptionDeletionAPI.md#SubscriptionDeletionAPI_unsubscribe) | **DELETE** /{ueId}/sdm-subscriptions/{subscriptionId} | unsubscribe from notifications


# **SubscriptionDeletionAPI_unsubscribe**
```c
// unsubscribe from notifications
//
void SubscriptionDeletionAPI_unsubscribe(apiClient_t *apiClient, char * ueId, char * subscriptionId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identity of the user | 
**subscriptionId** | **char \*** | Id of the SDM Subscription | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

