# InfluenceDataSubscriptionsCollectionAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**InfluenceDataSubscriptionsCollectionAPI_createIndividualInfluenceDataSubscription**](InfluenceDataSubscriptionsCollectionAPI.md#InfluenceDataSubscriptionsCollectionAPI_createIndividualInfluenceDataSubscription) | **POST** /application-data/influenceData/subs-to-notify | Create a new Individual Influence Data Subscription resource
[**InfluenceDataSubscriptionsCollectionAPI_readInfluenceDataSubscriptions**](InfluenceDataSubscriptionsCollectionAPI.md#InfluenceDataSubscriptionsCollectionAPI_readInfluenceDataSubscriptions) | **GET** /application-data/influenceData/subs-to-notify | Read Influence Data Subscriptions


# **InfluenceDataSubscriptionsCollectionAPI_createIndividualInfluenceDataSubscription**
```c
// Create a new Individual Influence Data Subscription resource
//
traffic_influ_sub_t* InfluenceDataSubscriptionsCollectionAPI_createIndividualInfluenceDataSubscription(apiClient_t *apiClient, traffic_influ_sub_t * traffic_influ_sub);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**traffic_influ_sub** | **[traffic_influ_sub_t](traffic_influ_sub.md) \*** |  | 

### Return type

[traffic_influ_sub_t](traffic_influ_sub.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **InfluenceDataSubscriptionsCollectionAPI_readInfluenceDataSubscriptions**
```c
// Read Influence Data Subscriptions
//
list_t* InfluenceDataSubscriptionsCollectionAPI_readInfluenceDataSubscriptions(apiClient_t *apiClient, char * dnn, snssai_t * snssai, char * internal_Group_Id, char * supi);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**dnn** | **char \*** | Identifies a DNN. | [optional] 
**snssai** | **[snssai_t](.md) \*** | Identifies a slice. | [optional] 
**internal_Group_Id** | **char \*** | Identifies a group of users. | [optional] 
**supi** | **char \*** | Identifies a user. | [optional] 

### Return type

[list_t](traffic_influ_sub.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

