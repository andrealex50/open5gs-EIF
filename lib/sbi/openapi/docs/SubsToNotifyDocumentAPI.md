# SubsToNotifyDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubsToNotifyDocumentAPI_modifysubscriptionDataSubscription**](SubsToNotifyDocumentAPI.md#SubsToNotifyDocumentAPI_modifysubscriptionDataSubscription) | **PATCH** /subscription-data/subs-to-notify/{subsId} | Modify an individual subscriptionDataSubscription
[**SubsToNotifyDocumentAPI_querySubscriptionDataSubscriptions**](SubsToNotifyDocumentAPI.md#SubsToNotifyDocumentAPI_querySubscriptionDataSubscriptions) | **GET** /subscription-data/subs-to-notify/{subsId} | Retrieves a individual subscriptionDataSubscription identified by subsId
[**SubsToNotifyDocumentAPI_removesubscriptionDataSubscriptions**](SubsToNotifyDocumentAPI.md#SubsToNotifyDocumentAPI_removesubscriptionDataSubscriptions) | **DELETE** /subscription-data/subs-to-notify/{subsId} | Deletes a subscriptionDataSubscriptions


# **SubsToNotifyDocumentAPI_modifysubscriptionDataSubscription**
```c
// Modify an individual subscriptionDataSubscription
//
modifysubscription_data_subscription_200_response_t* SubsToNotifyDocumentAPI_modifysubscriptionDataSubscription(apiClient_t *apiClient, char * subsId, list_t * patch_item, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subsId** | **char \*** |  | 
**patch_item** | **[list_t](patch_item.md) \*** |  | 
**supported_features** | **char \*** | Features required to be supported by the target NF | [optional] 

### Return type

[modifysubscription_data_subscription_200_response_t](modifysubscription_data_subscription_200_response.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SubsToNotifyDocumentAPI_querySubscriptionDataSubscriptions**
```c
// Retrieves a individual subscriptionDataSubscription identified by subsId
//
object_t* SubsToNotifyDocumentAPI_querySubscriptionDataSubscriptions(apiClient_t *apiClient, char * subsId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subsId** | **char \*** | Unique ID of the subscription to retrieve | 

### Return type

[object_t](object.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SubsToNotifyDocumentAPI_removesubscriptionDataSubscriptions**
```c
// Deletes a subscriptionDataSubscriptions
//
void SubsToNotifyDocumentAPI_removesubscriptionDataSubscriptions(apiClient_t *apiClient, char * subsId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subsId** | **char \*** | Unique ID of the subscription to remove | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

