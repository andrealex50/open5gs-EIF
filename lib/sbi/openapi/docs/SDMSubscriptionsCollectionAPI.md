# SDMSubscriptionsCollectionAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SDMSubscriptionsCollectionAPI_createSdmSubscriptions**](SDMSubscriptionsCollectionAPI.md#SDMSubscriptionsCollectionAPI_createSdmSubscriptions) | **POST** /subscription-data/{ueId}/context-data/sdm-subscriptions | Create individual sdm subscription
[**SDMSubscriptionsCollectionAPI_querysdmsubscriptions**](SDMSubscriptionsCollectionAPI.md#SDMSubscriptionsCollectionAPI_querysdmsubscriptions) | **GET** /subscription-data/{ueId}/context-data/sdm-subscriptions | Retrieves the sdm subscriptions of a UE


# **SDMSubscriptionsCollectionAPI_createSdmSubscriptions**
```c
// Create individual sdm subscription
//
sdm_subscription_t* SDMSubscriptionsCollectionAPI_createSdmSubscriptions(apiClient_t *apiClient, char * ueId, sdm_subscription_t * sdm_subscription);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE ID | 
**sdm_subscription** | **[sdm_subscription_t](sdm_subscription.md) \*** |  | 

### Return type

[sdm_subscription_t](sdm_subscription.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SDMSubscriptionsCollectionAPI_querysdmsubscriptions**
```c
// Retrieves the sdm subscriptions of a UE
//
list_t* SDMSubscriptionsCollectionAPI_querysdmsubscriptions(apiClient_t *apiClient, char * ueId, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[list_t](sdm_subscription.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

