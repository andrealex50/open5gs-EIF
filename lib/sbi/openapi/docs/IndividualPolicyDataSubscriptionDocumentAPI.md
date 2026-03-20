# IndividualPolicyDataSubscriptionDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualPolicyDataSubscriptionDocumentAPI_deleteIndividualPolicyDataSubscription**](IndividualPolicyDataSubscriptionDocumentAPI.md#IndividualPolicyDataSubscriptionDocumentAPI_deleteIndividualPolicyDataSubscription) | **DELETE** /policy-data/subs-to-notify/{subsId} | Delete the individual Policy Data subscription
[**IndividualPolicyDataSubscriptionDocumentAPI_replaceIndividualPolicyDataSubscription**](IndividualPolicyDataSubscriptionDocumentAPI.md#IndividualPolicyDataSubscriptionDocumentAPI_replaceIndividualPolicyDataSubscription) | **PUT** /policy-data/subs-to-notify/{subsId} | Modify a subscription to receive notification of policy data changes


# **IndividualPolicyDataSubscriptionDocumentAPI_deleteIndividualPolicyDataSubscription**
```c
// Delete the individual Policy Data subscription
//
void IndividualPolicyDataSubscriptionDocumentAPI_deleteIndividualPolicyDataSubscription(apiClient_t *apiClient, char * subsId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subsId** | **char \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualPolicyDataSubscriptionDocumentAPI_replaceIndividualPolicyDataSubscription**
```c
// Modify a subscription to receive notification of policy data changes
//
policy_data_subscription_t* IndividualPolicyDataSubscriptionDocumentAPI_replaceIndividualPolicyDataSubscription(apiClient_t *apiClient, char * subsId, policy_data_subscription_t * policy_data_subscription);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subsId** | **char \*** |  | 
**policy_data_subscription** | **[policy_data_subscription_t](policy_data_subscription.md) \*** |  | 

### Return type

[policy_data_subscription_t](policy_data_subscription.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

