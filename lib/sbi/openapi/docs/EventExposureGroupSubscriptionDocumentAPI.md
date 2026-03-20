# EventExposureGroupSubscriptionDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EventExposureGroupSubscriptionDocumentAPI_modifyEeGroupSubscription**](EventExposureGroupSubscriptionDocumentAPI.md#EventExposureGroupSubscriptionDocumentAPI_modifyEeGroupSubscription) | **PATCH** /subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId} | Modify an individual ee subscription for a group of a UEs
[**EventExposureGroupSubscriptionDocumentAPI_queryEeGroupSubscription**](EventExposureGroupSubscriptionDocumentAPI.md#EventExposureGroupSubscriptionDocumentAPI_queryEeGroupSubscription) | **GET** /subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId} | Retrieve a individual eeSubscription for a group of UEs or any UE
[**EventExposureGroupSubscriptionDocumentAPI_removeEeGroupSubscriptions**](EventExposureGroupSubscriptionDocumentAPI.md#EventExposureGroupSubscriptionDocumentAPI_removeEeGroupSubscriptions) | **DELETE** /subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId} | Deletes a eeSubscription for a group of UEs or any UE
[**EventExposureGroupSubscriptionDocumentAPI_updateEeGroupSubscriptions**](EventExposureGroupSubscriptionDocumentAPI.md#EventExposureGroupSubscriptionDocumentAPI_updateEeGroupSubscriptions) | **PUT** /subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId} | Update an individual ee subscription of a group of UEs or any UE


# **EventExposureGroupSubscriptionDocumentAPI_modifyEeGroupSubscription**
```c
// Modify an individual ee subscription for a group of a UEs
//
patch_result_t* EventExposureGroupSubscriptionDocumentAPI_modifyEeGroupSubscription(apiClient_t *apiClient, char * ueGroupId, char * subsId, list_t * patch_item, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueGroupId** | **char \*** |  | 
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

# **EventExposureGroupSubscriptionDocumentAPI_queryEeGroupSubscription**
```c
// Retrieve a individual eeSubscription for a group of UEs or any UE
//
object_t* EventExposureGroupSubscriptionDocumentAPI_queryEeGroupSubscription(apiClient_t *apiClient, char * ueGroupId, char * subsId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueGroupId** | **char \*** |  | 
**subsId** | **char \*** | Unique ID of the subscription to remove | 

### Return type

[object_t](object.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EventExposureGroupSubscriptionDocumentAPI_removeEeGroupSubscriptions**
```c
// Deletes a eeSubscription for a group of UEs or any UE
//
void EventExposureGroupSubscriptionDocumentAPI_removeEeGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId, char * subsId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueGroupId** | **char \*** |  | 
**subsId** | **char \*** | Unique ID of the subscription to remove | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EventExposureGroupSubscriptionDocumentAPI_updateEeGroupSubscriptions**
```c
// Update an individual ee subscription of a group of UEs or any UE
//
void EventExposureGroupSubscriptionDocumentAPI_updateEeGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId, char * subsId, ee_subscription_t * ee_subscription);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueGroupId** | **char \*** |  | 
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

