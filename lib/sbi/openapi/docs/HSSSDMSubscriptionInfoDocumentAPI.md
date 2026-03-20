# HSSSDMSubscriptionInfoDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**HSSSDMSubscriptionInfoDocumentAPI_createHSSSDMSubscriptions**](HSSSDMSubscriptionInfoDocumentAPI.md#HSSSDMSubscriptionInfoDocumentAPI_createHSSSDMSubscriptions) | **PUT** /subscription-data/{ueId}/context-data/sdm-subscriptions/{subsId}/hss-sdm-subscriptions | Create HSS SDM Subscription Info
[**HSSSDMSubscriptionInfoDocumentAPI_getHssSDMSubscriptionInfo**](HSSSDMSubscriptionInfoDocumentAPI.md#HSSSDMSubscriptionInfoDocumentAPI_getHssSDMSubscriptionInfo) | **GET** /subscription-data/{ueId}/context-data/sdm-subscriptions/{subsId}/hss-sdm-subscriptions | Retrieve HSS SDM Subscription Info
[**HSSSDMSubscriptionInfoDocumentAPI_modifyHssSDMSubscriptionInfo**](HSSSDMSubscriptionInfoDocumentAPI.md#HSSSDMSubscriptionInfoDocumentAPI_modifyHssSDMSubscriptionInfo) | **PATCH** /subscription-data/{ueId}/context-data/sdm-subscriptions/{subsId}/hss-sdm-subscriptions | Modify HSS SDM Subscription Info
[**HSSSDMSubscriptionInfoDocumentAPI_removeHssSDMSubscriptionsInfo**](HSSSDMSubscriptionInfoDocumentAPI.md#HSSSDMSubscriptionInfoDocumentAPI_removeHssSDMSubscriptionsInfo) | **DELETE** /subscription-data/{ueId}/context-data/sdm-subscriptions/{subsId}/hss-sdm-subscriptions | Delete HSS SDM Subscription Info


# **HSSSDMSubscriptionInfoDocumentAPI_createHSSSDMSubscriptions**
```c
// Create HSS SDM Subscription Info
//
void HSSSDMSubscriptionInfoDocumentAPI_createHSSSDMSubscriptions(apiClient_t *apiClient, char * ueId, char * subsId, hss_subscription_info_t * hss_subscription_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**subsId** | **char \*** |  | 
**hss_subscription_info** | **[hss_subscription_info_t](hss_subscription_info.md) \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **HSSSDMSubscriptionInfoDocumentAPI_getHssSDMSubscriptionInfo**
```c
// Retrieve HSS SDM Subscription Info
//
smf_subscription_info_t* HSSSDMSubscriptionInfoDocumentAPI_getHssSDMSubscriptionInfo(apiClient_t *apiClient, char * ueId, char * subsId);
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

# **HSSSDMSubscriptionInfoDocumentAPI_modifyHssSDMSubscriptionInfo**
```c
// Modify HSS SDM Subscription Info
//
patch_result_t* HSSSDMSubscriptionInfoDocumentAPI_modifyHssSDMSubscriptionInfo(apiClient_t *apiClient, char * ueId, char * subsId, list_t * patch_item, char * supported_features);
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

# **HSSSDMSubscriptionInfoDocumentAPI_removeHssSDMSubscriptionsInfo**
```c
// Delete HSS SDM Subscription Info
//
void HSSSDMSubscriptionInfoDocumentAPI_removeHssSDMSubscriptionsInfo(apiClient_t *apiClient, char * ueId, char * subsId);
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

