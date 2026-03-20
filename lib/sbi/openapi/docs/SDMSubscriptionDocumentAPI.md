# SDMSubscriptionDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SDMSubscriptionDocumentAPI_modifysdmSubscription**](SDMSubscriptionDocumentAPI.md#SDMSubscriptionDocumentAPI_modifysdmSubscription) | **PATCH** /subscription-data/{ueId}/context-data/sdm-subscriptions/{subsId} | Modify an individual sdm subscription
[**SDMSubscriptionDocumentAPI_querysdmSubscription**](SDMSubscriptionDocumentAPI.md#SDMSubscriptionDocumentAPI_querysdmSubscription) | **GET** /subscription-data/{ueId}/context-data/sdm-subscriptions/{subsId} | Retrieves a individual sdmSubscription identified by subsId
[**SDMSubscriptionDocumentAPI_removesdmSubscriptions**](SDMSubscriptionDocumentAPI.md#SDMSubscriptionDocumentAPI_removesdmSubscriptions) | **DELETE** /subscription-data/{ueId}/context-data/sdm-subscriptions/{subsId} | Deletes a sdmsubscriptions
[**SDMSubscriptionDocumentAPI_updatesdmsubscriptions**](SDMSubscriptionDocumentAPI.md#SDMSubscriptionDocumentAPI_updatesdmsubscriptions) | **PUT** /subscription-data/{ueId}/context-data/sdm-subscriptions/{subsId} | Update an individual sdm subscriptions of a UE


# **SDMSubscriptionDocumentAPI_modifysdmSubscription**
```c
// Modify an individual sdm subscription
//
patch_result_t* SDMSubscriptionDocumentAPI_modifysdmSubscription(apiClient_t *apiClient, char * ueId, char * subsId, list_t * patch_item, char * supported_features);
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

# **SDMSubscriptionDocumentAPI_querysdmSubscription**
```c
// Retrieves a individual sdmSubscription identified by subsId
//
object_t* SDMSubscriptionDocumentAPI_querysdmSubscription(apiClient_t *apiClient, char * ueId, char * subsId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**subsId** | **char \*** | Unique ID of the subscription to retrieve | 

### Return type

[object_t](object.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SDMSubscriptionDocumentAPI_removesdmSubscriptions**
```c
// Deletes a sdmsubscriptions
//
void SDMSubscriptionDocumentAPI_removesdmSubscriptions(apiClient_t *apiClient, char * ueId, char * subsId);
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
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SDMSubscriptionDocumentAPI_updatesdmsubscriptions**
```c
// Update an individual sdm subscriptions of a UE
//
void SDMSubscriptionDocumentAPI_updatesdmsubscriptions(apiClient_t *apiClient, char * ueId, char * subsId, sdm_subscription_t * sdm_subscription);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**subsId** | **char \*** |  | 
**sdm_subscription** | **[sdm_subscription_t](sdm_subscription.md) \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

