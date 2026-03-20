# IndividualInfluenceDataSubscriptionDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualInfluenceDataSubscriptionDocumentAPI_deleteIndividualInfluenceDataSubscription**](IndividualInfluenceDataSubscriptionDocumentAPI.md#IndividualInfluenceDataSubscriptionDocumentAPI_deleteIndividualInfluenceDataSubscription) | **DELETE** /application-data/influenceData/subs-to-notify/{subscriptionId} | Delete an individual Influence Data Subscription resource
[**IndividualInfluenceDataSubscriptionDocumentAPI_readIndividualInfluenceDataSubscription**](IndividualInfluenceDataSubscriptionDocumentAPI.md#IndividualInfluenceDataSubscriptionDocumentAPI_readIndividualInfluenceDataSubscription) | **GET** /application-data/influenceData/subs-to-notify/{subscriptionId} | Get an existing individual Influence Data Subscription resource
[**IndividualInfluenceDataSubscriptionDocumentAPI_replaceIndividualInfluenceDataSubscription**](IndividualInfluenceDataSubscriptionDocumentAPI.md#IndividualInfluenceDataSubscriptionDocumentAPI_replaceIndividualInfluenceDataSubscription) | **PUT** /application-data/influenceData/subs-to-notify/{subscriptionId} | Modify an existing individual Influence Data Subscription resource


# **IndividualInfluenceDataSubscriptionDocumentAPI_deleteIndividualInfluenceDataSubscription**
```c
// Delete an individual Influence Data Subscription resource
//
void IndividualInfluenceDataSubscriptionDocumentAPI_deleteIndividualInfluenceDataSubscription(apiClient_t *apiClient, char * subscriptionId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subscriptionId** | **char \*** | String identifying a subscription to the Individual Influence Data Subscription  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualInfluenceDataSubscriptionDocumentAPI_readIndividualInfluenceDataSubscription**
```c
// Get an existing individual Influence Data Subscription resource
//
traffic_influ_sub_t* IndividualInfluenceDataSubscriptionDocumentAPI_readIndividualInfluenceDataSubscription(apiClient_t *apiClient, char * subscriptionId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subscriptionId** | **char \*** | String identifying a subscription to the Individual Influence Data Subscription  | 

### Return type

[traffic_influ_sub_t](traffic_influ_sub.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualInfluenceDataSubscriptionDocumentAPI_replaceIndividualInfluenceDataSubscription**
```c
// Modify an existing individual Influence Data Subscription resource
//
traffic_influ_sub_t* IndividualInfluenceDataSubscriptionDocumentAPI_replaceIndividualInfluenceDataSubscription(apiClient_t *apiClient, char * subscriptionId, traffic_influ_sub_t * traffic_influ_sub);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subscriptionId** | **char \*** | String identifying a subscription to the Individual Influence Data Subscription  | 
**traffic_influ_sub** | **[traffic_influ_sub_t](traffic_influ_sub.md) \*** |  | 

### Return type

[traffic_influ_sub_t](traffic_influ_sub.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

