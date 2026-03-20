# EventExposureSubscriptionDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EventExposureSubscriptionDocumentAPI_modifyEesubscription**](EventExposureSubscriptionDocumentAPI.md#EventExposureSubscriptionDocumentAPI_modifyEesubscription) | **PATCH** /subscription-data/{ueId}/context-data/ee-subscriptions/{subsId} | Modify an individual ee subscription of a UE
[**EventExposureSubscriptionDocumentAPI_queryeeSubscription**](EventExposureSubscriptionDocumentAPI.md#EventExposureSubscriptionDocumentAPI_queryeeSubscription) | **GET** /subscription-data/{ueId}/context-data/ee-subscriptions/{subsId} | Retrieve a eeSubscription
[**EventExposureSubscriptionDocumentAPI_removeeeSubscriptions**](EventExposureSubscriptionDocumentAPI.md#EventExposureSubscriptionDocumentAPI_removeeeSubscriptions) | **DELETE** /subscription-data/{ueId}/context-data/ee-subscriptions/{subsId} | Deletes a eeSubscription
[**EventExposureSubscriptionDocumentAPI_updateEesubscriptions**](EventExposureSubscriptionDocumentAPI.md#EventExposureSubscriptionDocumentAPI_updateEesubscriptions) | **PUT** /subscription-data/{ueId}/context-data/ee-subscriptions/{subsId} | Update an individual ee subscriptions of a UE


# **EventExposureSubscriptionDocumentAPI_modifyEesubscription**
```c
// Modify an individual ee subscription of a UE
//
patch_result_t* EventExposureSubscriptionDocumentAPI_modifyEesubscription(apiClient_t *apiClient, char * ueId, char * subsId, list_t * patch_item, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**subsId** | **char \*** |  | 
**patch_item** | **[list_t](patch_item.md) \*** |  | 
**supported_features** | **char \*** | Features required to be supported by the target NF | [optional] 

### Return type

[patch_result_t](patch_result.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EventExposureSubscriptionDocumentAPI_queryeeSubscription**
```c
// Retrieve a eeSubscription
//
object_t* EventExposureSubscriptionDocumentAPI_queryeeSubscription(apiClient_t *apiClient, char * ueId, char * subsId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**subsId** | **char \*** | Unique ID of the subscription to remove | 

### Return type

[object_t](object.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EventExposureSubscriptionDocumentAPI_removeeeSubscriptions**
```c
// Deletes a eeSubscription
//
void EventExposureSubscriptionDocumentAPI_removeeeSubscriptions(apiClient_t *apiClient, char * ueId, char * subsId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**subsId** | **char \*** | Unique ID of the subscription to remove | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EventExposureSubscriptionDocumentAPI_updateEesubscriptions**
```c
// Update an individual ee subscriptions of a UE
//
void EventExposureSubscriptionDocumentAPI_updateEesubscriptions(apiClient_t *apiClient, char * ueId, char * subsId, ee_subscription_t * ee_subscription);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**subsId** | **char \*** |  | 
**ee_subscription** | **[ee_subscription_t](ee_subscription.md) \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

