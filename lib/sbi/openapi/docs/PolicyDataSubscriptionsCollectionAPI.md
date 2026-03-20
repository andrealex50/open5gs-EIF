# PolicyDataSubscriptionsCollectionAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PolicyDataSubscriptionsCollectionAPI_createIndividualPolicyDataSubscription**](PolicyDataSubscriptionsCollectionAPI.md#PolicyDataSubscriptionsCollectionAPI_createIndividualPolicyDataSubscription) | **POST** /policy-data/subs-to-notify | Create a subscription to receive notification of policy data changes


# **PolicyDataSubscriptionsCollectionAPI_createIndividualPolicyDataSubscription**
```c
// Create a subscription to receive notification of policy data changes
//
policy_data_subscription_t* PolicyDataSubscriptionsCollectionAPI_createIndividualPolicyDataSubscription(apiClient_t *apiClient, policy_data_subscription_t * policy_data_subscription);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**policy_data_subscription** | **[policy_data_subscription_t](policy_data_subscription.md) \*** |  | 

### Return type

[policy_data_subscription_t](policy_data_subscription.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

