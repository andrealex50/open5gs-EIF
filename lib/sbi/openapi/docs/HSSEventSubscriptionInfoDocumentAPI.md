# HSSEventSubscriptionInfoDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**HSSEventSubscriptionInfoDocumentAPI_createHSSSubscriptions**](HSSEventSubscriptionInfoDocumentAPI.md#HSSEventSubscriptionInfoDocumentAPI_createHSSSubscriptions) | **PUT** /subscription-data/{ueId}/context-data/ee-subscriptions/{subsId}/hss-subscriptions | Create HSS Subscription Info
[**HSSEventSubscriptionInfoDocumentAPI_getHssGroupSubscriptions**](HSSEventSubscriptionInfoDocumentAPI.md#HSSEventSubscriptionInfoDocumentAPI_getHssGroupSubscriptions) | **GET** /subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId}/hss-subscriptions | Retrieve HSS Subscription Info
[**HSSEventSubscriptionInfoDocumentAPI_getHssSubscriptionInfo**](HSSEventSubscriptionInfoDocumentAPI.md#HSSEventSubscriptionInfoDocumentAPI_getHssSubscriptionInfo) | **GET** /subscription-data/{ueId}/context-data/ee-subscriptions/{subsId}/hss-subscriptions | Retrieve HSS Subscription Info
[**HSSEventSubscriptionInfoDocumentAPI_modifyHssGroupSubscriptions**](HSSEventSubscriptionInfoDocumentAPI.md#HSSEventSubscriptionInfoDocumentAPI_modifyHssGroupSubscriptions) | **PATCH** /subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId}/hss-subscriptions | Modify HSS Subscription Info
[**HSSEventSubscriptionInfoDocumentAPI_modifyHssSubscriptionInfo**](HSSEventSubscriptionInfoDocumentAPI.md#HSSEventSubscriptionInfoDocumentAPI_modifyHssSubscriptionInfo) | **PATCH** /subscription-data/{ueId}/context-data/ee-subscriptions/{subsId}/hss-subscriptions | Modify HSS Subscription Info
[**HSSEventSubscriptionInfoDocumentAPI_removeHssGroupSubscriptions**](HSSEventSubscriptionInfoDocumentAPI.md#HSSEventSubscriptionInfoDocumentAPI_removeHssGroupSubscriptions) | **DELETE** /subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId}/hss-subscriptions | Delete HSS Subscription Info
[**HSSEventSubscriptionInfoDocumentAPI_removeHssSubscriptionsInfo**](HSSEventSubscriptionInfoDocumentAPI.md#HSSEventSubscriptionInfoDocumentAPI_removeHssSubscriptionsInfo) | **DELETE** /subscription-data/{ueId}/context-data/ee-subscriptions/{subsId}/hss-subscriptions | Delete HSS Subscription Info


# **HSSEventSubscriptionInfoDocumentAPI_createHSSSubscriptions**
```c
// Create HSS Subscription Info
//
hss_subscription_info_t* HSSEventSubscriptionInfoDocumentAPI_createHSSSubscriptions(apiClient_t *apiClient, char * ueId, char * subsId, hss_subscription_info_t * hss_subscription_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**subsId** | **char \*** |  | 
**hss_subscription_info** | **[hss_subscription_info_t](hss_subscription_info.md) \*** |  | 

### Return type

[hss_subscription_info_t](hss_subscription_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **HSSEventSubscriptionInfoDocumentAPI_getHssGroupSubscriptions**
```c
// Retrieve HSS Subscription Info
//
hss_subscription_info_t* HSSEventSubscriptionInfoDocumentAPI_getHssGroupSubscriptions(apiClient_t *apiClient, char * externalGroupId, char * subsId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**externalGroupId** | **char \*** |  | 
**subsId** | **char \*** |  | 

### Return type

[hss_subscription_info_t](hss_subscription_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **HSSEventSubscriptionInfoDocumentAPI_getHssSubscriptionInfo**
```c
// Retrieve HSS Subscription Info
//
smf_subscription_info_t* HSSEventSubscriptionInfoDocumentAPI_getHssSubscriptionInfo(apiClient_t *apiClient, char * ueId, char * subsId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**subsId** | **char \*** |  | 

### Return type

[smf_subscription_info_t](smf_subscription_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **HSSEventSubscriptionInfoDocumentAPI_modifyHssGroupSubscriptions**
```c
// Modify HSS Subscription Info
//
patch_result_t* HSSEventSubscriptionInfoDocumentAPI_modifyHssGroupSubscriptions(apiClient_t *apiClient, char * externalGroupId, char * subsId, list_t * patch_item, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**externalGroupId** | **char \*** |  | 
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

# **HSSEventSubscriptionInfoDocumentAPI_modifyHssSubscriptionInfo**
```c
// Modify HSS Subscription Info
//
patch_result_t* HSSEventSubscriptionInfoDocumentAPI_modifyHssSubscriptionInfo(apiClient_t *apiClient, char * ueId, char * subsId, list_t * patch_item, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
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

# **HSSEventSubscriptionInfoDocumentAPI_removeHssGroupSubscriptions**
```c
// Delete HSS Subscription Info
//
void HSSEventSubscriptionInfoDocumentAPI_removeHssGroupSubscriptions(apiClient_t *apiClient, char * externalGroupId, char * subsId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**externalGroupId** | **char \*** |  | 
**subsId** | **char \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **HSSEventSubscriptionInfoDocumentAPI_removeHssSubscriptionsInfo**
```c
// Delete HSS Subscription Info
//
void HSSEventSubscriptionInfoDocumentAPI_removeHssSubscriptionsInfo(apiClient_t *apiClient, char * ueId, char * subsId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**subsId** | **char \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

