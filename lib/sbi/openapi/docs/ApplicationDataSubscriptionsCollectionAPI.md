# ApplicationDataSubscriptionsCollectionAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ApplicationDataSubscriptionsCollectionAPI_createIndividualApplicationDataSubscription**](ApplicationDataSubscriptionsCollectionAPI.md#ApplicationDataSubscriptionsCollectionAPI_createIndividualApplicationDataSubscription) | **POST** /application-data/subs-to-notify | Create a subscription to receive notification of application data changes
[**ApplicationDataSubscriptionsCollectionAPI_readApplicationDataChangeSubscriptions**](ApplicationDataSubscriptionsCollectionAPI.md#ApplicationDataSubscriptionsCollectionAPI_readApplicationDataChangeSubscriptions) | **GET** /application-data/subs-to-notify | Read Application Data change Subscriptions


# **ApplicationDataSubscriptionsCollectionAPI_createIndividualApplicationDataSubscription**
```c
// Create a subscription to receive notification of application data changes
//
application_data_subs_t* ApplicationDataSubscriptionsCollectionAPI_createIndividualApplicationDataSubscription(apiClient_t *apiClient, application_data_subs_t * application_data_subs);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**application_data_subs** | **[application_data_subs_t](application_data_subs.md) \*** |  | 

### Return type

[application_data_subs_t](application_data_subs.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ApplicationDataSubscriptionsCollectionAPI_readApplicationDataChangeSubscriptions**
```c
// Read Application Data change Subscriptions
//
list_t* ApplicationDataSubscriptionsCollectionAPI_readApplicationDataChangeSubscriptions(apiClient_t *apiClient, data_filter_t * data_filter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**data_filter** | **[data_filter_t](.md) \*** | The data filter for the query. | [optional] 

### Return type

[list_t](application_data_subs.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

