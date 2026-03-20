# ExposureDataSubscriptionsCollectionAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ExposureDataSubscriptionsCollectionAPI_createIndividualExposureDataSubscription**](ExposureDataSubscriptionsCollectionAPI.md#ExposureDataSubscriptionsCollectionAPI_createIndividualExposureDataSubscription) | **POST** /exposure-data/subs-to-notify | Create a subscription to receive notification of exposure data changes


# **ExposureDataSubscriptionsCollectionAPI_createIndividualExposureDataSubscription**
```c
// Create a subscription to receive notification of exposure data changes
//
exposure_data_subscription_t* ExposureDataSubscriptionsCollectionAPI_createIndividualExposureDataSubscription(apiClient_t *apiClient, exposure_data_subscription_t * exposure_data_subscription);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**exposure_data_subscription** | **[exposure_data_subscription_t](exposure_data_subscription.md) \*** |  | 

### Return type

[exposure_data_subscription_t](exposure_data_subscription.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

