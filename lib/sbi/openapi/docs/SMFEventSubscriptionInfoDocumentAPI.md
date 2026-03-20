# SMFEventSubscriptionInfoDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SMFEventSubscriptionInfoDocumentAPI_createSMFSubscriptions**](SMFEventSubscriptionInfoDocumentAPI.md#SMFEventSubscriptionInfoDocumentAPI_createSMFSubscriptions) | **PUT** /subscription-data/{ueId}/context-data/ee-subscriptions/{subsId}/smf-subscriptions | Create SMF Subscription Info
[**SMFEventSubscriptionInfoDocumentAPI_getSmfGroupSubscriptions**](SMFEventSubscriptionInfoDocumentAPI.md#SMFEventSubscriptionInfoDocumentAPI_getSmfGroupSubscriptions) | **GET** /subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId}/smf-subscriptions | Retrieve SMF Subscription Info for a group of UEs or any UE
[**SMFEventSubscriptionInfoDocumentAPI_getSmfSubscriptionInfo**](SMFEventSubscriptionInfoDocumentAPI.md#SMFEventSubscriptionInfoDocumentAPI_getSmfSubscriptionInfo) | **GET** /subscription-data/{ueId}/context-data/ee-subscriptions/{subsId}/smf-subscriptions | Retrieve SMF Subscription Info
[**SMFEventSubscriptionInfoDocumentAPI_modifySmfGroupSubscriptions**](SMFEventSubscriptionInfoDocumentAPI.md#SMFEventSubscriptionInfoDocumentAPI_modifySmfGroupSubscriptions) | **PATCH** /subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId}/smf-subscriptions | Modify SMF Subscription Info for a group of UEs or any UE
[**SMFEventSubscriptionInfoDocumentAPI_modifySmfSubscriptionInfo**](SMFEventSubscriptionInfoDocumentAPI.md#SMFEventSubscriptionInfoDocumentAPI_modifySmfSubscriptionInfo) | **PATCH** /subscription-data/{ueId}/context-data/ee-subscriptions/{subsId}/smf-subscriptions | Modify SMF Subscription Info
[**SMFEventSubscriptionInfoDocumentAPI_removeSmfGroupSubscriptions**](SMFEventSubscriptionInfoDocumentAPI.md#SMFEventSubscriptionInfoDocumentAPI_removeSmfGroupSubscriptions) | **DELETE** /subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId}/smf-subscriptions | Delete SMF Subscription Info for a group of UEs or any UE
[**SMFEventSubscriptionInfoDocumentAPI_removeSmfSubscriptionsInfo**](SMFEventSubscriptionInfoDocumentAPI.md#SMFEventSubscriptionInfoDocumentAPI_removeSmfSubscriptionsInfo) | **DELETE** /subscription-data/{ueId}/context-data/ee-subscriptions/{subsId}/smf-subscriptions | Delete SMF Subscription Info


# **SMFEventSubscriptionInfoDocumentAPI_createSMFSubscriptions**
```c
// Create SMF Subscription Info
//
smf_subscription_info_t* SMFEventSubscriptionInfoDocumentAPI_createSMFSubscriptions(apiClient_t *apiClient, char * ueId, char * subsId, smf_subscription_info_t * smf_subscription_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**subsId** | **char \*** |  | 
**smf_subscription_info** | **[smf_subscription_info_t](smf_subscription_info.md) \*** |  | 

### Return type

[smf_subscription_info_t](smf_subscription_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SMFEventSubscriptionInfoDocumentAPI_getSmfGroupSubscriptions**
```c
// Retrieve SMF Subscription Info for a group of UEs or any UE
//
smf_subscription_info_t* SMFEventSubscriptionInfoDocumentAPI_getSmfGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId, char * subsId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueGroupId** | **char \*** |  | 
**subsId** | **char \*** |  | 

### Return type

[smf_subscription_info_t](smf_subscription_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SMFEventSubscriptionInfoDocumentAPI_getSmfSubscriptionInfo**
```c
// Retrieve SMF Subscription Info
//
smf_subscription_info_t* SMFEventSubscriptionInfoDocumentAPI_getSmfSubscriptionInfo(apiClient_t *apiClient, char * ueId, char * subsId);
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

# **SMFEventSubscriptionInfoDocumentAPI_modifySmfGroupSubscriptions**
```c
// Modify SMF Subscription Info for a group of UEs or any UE
//
patch_result_t* SMFEventSubscriptionInfoDocumentAPI_modifySmfGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId, char * subsId, list_t * patch_item, char * supported_features);
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

# **SMFEventSubscriptionInfoDocumentAPI_modifySmfSubscriptionInfo**
```c
// Modify SMF Subscription Info
//
patch_result_t* SMFEventSubscriptionInfoDocumentAPI_modifySmfSubscriptionInfo(apiClient_t *apiClient, char * ueId, char * subsId, list_t * patch_item, char * supported_features);
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

# **SMFEventSubscriptionInfoDocumentAPI_removeSmfGroupSubscriptions**
```c
// Delete SMF Subscription Info for a group of UEs or any UE
//
void SMFEventSubscriptionInfoDocumentAPI_removeSmfGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId, char * subsId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueGroupId** | **char \*** |  | 
**subsId** | **char \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SMFEventSubscriptionInfoDocumentAPI_removeSmfSubscriptionsInfo**
```c
// Delete SMF Subscription Info
//
void SMFEventSubscriptionInfoDocumentAPI_removeSmfSubscriptionsInfo(apiClient_t *apiClient, char * ueId, char * subsId);
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

