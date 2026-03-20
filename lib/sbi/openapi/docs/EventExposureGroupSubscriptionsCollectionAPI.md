# EventExposureGroupSubscriptionsCollectionAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EventExposureGroupSubscriptionsCollectionAPI_createEeGroupSubscriptions**](EventExposureGroupSubscriptionsCollectionAPI.md#EventExposureGroupSubscriptionsCollectionAPI_createEeGroupSubscriptions) | **POST** /subscription-data/group-data/{ueGroupId}/ee-subscriptions | Create individual EE subscription for a group of UEs or any UE
[**EventExposureGroupSubscriptionsCollectionAPI_queryEeGroupSubscriptions**](EventExposureGroupSubscriptionsCollectionAPI.md#EventExposureGroupSubscriptionsCollectionAPI_queryEeGroupSubscriptions) | **GET** /subscription-data/group-data/{ueGroupId}/ee-subscriptions | Retrieves the ee subscriptions of a group of UEs or any UE


# **EventExposureGroupSubscriptionsCollectionAPI_createEeGroupSubscriptions**
```c
// Create individual EE subscription for a group of UEs or any UE
//
ee_subscription_t* EventExposureGroupSubscriptionsCollectionAPI_createEeGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId, ee_subscription_t * ee_subscription);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueGroupId** | **char \*** | Group of UEs or any UE | 
**ee_subscription** | **[ee_subscription_t](ee_subscription.md) \*** |  | 

### Return type

[ee_subscription_t](ee_subscription.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EventExposureGroupSubscriptionsCollectionAPI_queryEeGroupSubscriptions**
```c
// Retrieves the ee subscriptions of a group of UEs or any UE
//
list_t* EventExposureGroupSubscriptionsCollectionAPI_queryEeGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueGroupId** | **char \*** | Group of UEs or any UE | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[list_t](ee_subscription.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

