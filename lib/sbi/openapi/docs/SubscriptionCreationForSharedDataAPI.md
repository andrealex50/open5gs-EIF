# SubscriptionCreationForSharedDataAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscriptionCreationForSharedDataAPI_subscribeToSharedData**](SubscriptionCreationForSharedDataAPI.md#SubscriptionCreationForSharedDataAPI_subscribeToSharedData) | **POST** /shared-data-subscriptions | subscribe to notifications for shared data


# **SubscriptionCreationForSharedDataAPI_subscribeToSharedData**
```c
// subscribe to notifications for shared data
//
sdm_subscription_t* SubscriptionCreationForSharedDataAPI_subscribeToSharedData(apiClient_t *apiClient, sdm_subscription_t * sdm_subscription);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sdm_subscription** | **[sdm_subscription_t](sdm_subscription.md) \*** |  | 

### Return type

[sdm_subscription_t](sdm_subscription.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

