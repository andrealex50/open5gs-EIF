# EventExposureSubscriptionsCollectionAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EventExposureSubscriptionsCollectionAPI_createEeSubscriptions**](EventExposureSubscriptionsCollectionAPI.md#EventExposureSubscriptionsCollectionAPI_createEeSubscriptions) | **POST** /subscription-data/{ueId}/context-data/ee-subscriptions | Create individual EE subscription
[**EventExposureSubscriptionsCollectionAPI_queryeesubscriptions**](EventExposureSubscriptionsCollectionAPI.md#EventExposureSubscriptionsCollectionAPI_queryeesubscriptions) | **GET** /subscription-data/{ueId}/context-data/ee-subscriptions | Retrieves the ee subscriptions of a UE


# **EventExposureSubscriptionsCollectionAPI_createEeSubscriptions**
```c
// Create individual EE subscription
//
ee_subscription_t* EventExposureSubscriptionsCollectionAPI_createEeSubscriptions(apiClient_t *apiClient, char * ueId, ee_subscription_t * ee_subscription);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE ID | 
**ee_subscription** | **[ee_subscription_t](ee_subscription.md) \*** |  | 

### Return type

[ee_subscription_t](ee_subscription.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EventExposureSubscriptionsCollectionAPI_queryeesubscriptions**
```c
// Retrieves the ee subscriptions of a UE
//
list_t* EventExposureSubscriptionsCollectionAPI_queryeesubscriptions(apiClient_t *apiClient, char * ueId, char * supported_features, list_t * event_types, list_t * nf_identifiers);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**supported_features** | **char \*** | Supported Features | [optional] 
**event_types** | **[list_t](event_type.md) \*** | Event Types | [optional] 
**nf_identifiers** | **[list_t](nf_identifier.md) \*** | NF Identifiers | [optional] 

### Return type

[list_t](ee_subscription_ext.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

