# SubsToNotifyCollectionAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubsToNotifyCollectionAPI_querySubsToNotify**](SubsToNotifyCollectionAPI.md#SubsToNotifyCollectionAPI_querySubsToNotify) | **GET** /subscription-data/subs-to-notify | Retrieves the list of subscriptions
[**SubsToNotifyCollectionAPI_removeMultipleSubscriptionDataSubscriptions**](SubsToNotifyCollectionAPI.md#SubsToNotifyCollectionAPI_removeMultipleSubscriptionDataSubscriptions) | **DELETE** /subscription-data/subs-to-notify | Deletes subscriptions identified by a given ue-id parameter
[**SubsToNotifyCollectionAPI_subscriptionDataSubscriptions**](SubsToNotifyCollectionAPI.md#SubsToNotifyCollectionAPI_subscriptionDataSubscriptions) | **POST** /subscription-data/subs-to-notify | Subscription data subscriptions


# **SubsToNotifyCollectionAPI_querySubsToNotify**
```c
// Retrieves the list of subscriptions
//
list_t* SubsToNotifyCollectionAPI_querySubsToNotify(apiClient_t *apiClient, char * ue_id, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ue_id** | **char \*** | UE id | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[list_t](subscription_data_subscriptions.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SubsToNotifyCollectionAPI_removeMultipleSubscriptionDataSubscriptions**
```c
// Deletes subscriptions identified by a given ue-id parameter
//
void SubsToNotifyCollectionAPI_removeMultipleSubscriptionDataSubscriptions(apiClient_t *apiClient, char * ue_id, char * nf_instance_id, int delete_all_nfs, int implicit_unsubscribe_indication);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ue_id** | **char \*** | UE ID | 
**nf_instance_id** | **char \*** | NF Instance ID | [optional] 
**delete_all_nfs** | **int** | Flag to delete subscriptions from all NFs | [optional] 
**implicit_unsubscribe_indication** | **int** | Implicit Unsubscribe Indication | [optional] 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SubsToNotifyCollectionAPI_subscriptionDataSubscriptions**
```c
// Subscription data subscriptions
//
subscription_data_subscriptions_t* SubsToNotifyCollectionAPI_subscriptionDataSubscriptions(apiClient_t *apiClient, subscription_data_subscriptions_t * subscription_data_subscriptions);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subscription_data_subscriptions** | **[subscription_data_subscriptions_t](subscription_data_subscriptions.md) \*** |  | 

### Return type

[subscription_data_subscriptions_t](subscription_data_subscriptions.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

