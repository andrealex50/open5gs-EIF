# IndividualExposureDataSubscriptionDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualExposureDataSubscriptionDocumentAPI_deleteIndividualExposureDataSubscription**](IndividualExposureDataSubscriptionDocumentAPI.md#IndividualExposureDataSubscriptionDocumentAPI_deleteIndividualExposureDataSubscription) | **DELETE** /exposure-data/subs-to-notify/{subId} | Deletes the individual Exposure Data subscription
[**IndividualExposureDataSubscriptionDocumentAPI_replaceIndividualExposureDataSubscription**](IndividualExposureDataSubscriptionDocumentAPI.md#IndividualExposureDataSubscriptionDocumentAPI_replaceIndividualExposureDataSubscription) | **PUT** /exposure-data/subs-to-notify/{subId} | updates a subscription to receive notifications of exposure data changes


# **IndividualExposureDataSubscriptionDocumentAPI_deleteIndividualExposureDataSubscription**
```c
// Deletes the individual Exposure Data subscription
//
void IndividualExposureDataSubscriptionDocumentAPI_deleteIndividualExposureDataSubscription(apiClient_t *apiClient, char * subId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subId** | **char \*** | Subscription id | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualExposureDataSubscriptionDocumentAPI_replaceIndividualExposureDataSubscription**
```c
// updates a subscription to receive notifications of exposure data changes
//
exposure_data_subscription_t* IndividualExposureDataSubscriptionDocumentAPI_replaceIndividualExposureDataSubscription(apiClient_t *apiClient, char * subId, exposure_data_subscription_t * exposure_data_subscription);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subId** | **char \*** | Subscription id | 
**exposure_data_subscription** | **[exposure_data_subscription_t](exposure_data_subscription.md) \*** |  | 

### Return type

[exposure_data_subscription_t](exposure_data_subscription.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

