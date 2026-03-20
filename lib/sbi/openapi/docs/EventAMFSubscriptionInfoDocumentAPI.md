# EventAMFSubscriptionInfoDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EventAMFSubscriptionInfoDocumentAPI_removeAmfGroupSubscriptions**](EventAMFSubscriptionInfoDocumentAPI.md#EventAMFSubscriptionInfoDocumentAPI_removeAmfGroupSubscriptions) | **DELETE** /subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId}/amf-subscriptions | Deletes AMF Subscription Info for an eeSubscription for a group of UEs or any UE
[**EventAMFSubscriptionInfoDocumentAPI_removeAmfSubscriptionsInfo**](EventAMFSubscriptionInfoDocumentAPI.md#EventAMFSubscriptionInfoDocumentAPI_removeAmfSubscriptionsInfo) | **DELETE** /subscription-data/{ueId}/context-data/ee-subscriptions/{subsId}/amf-subscriptions | Deletes AMF Subscription Info for an eeSubscription


# **EventAMFSubscriptionInfoDocumentAPI_removeAmfGroupSubscriptions**
```c
// Deletes AMF Subscription Info for an eeSubscription for a group of UEs or any UE
//
void EventAMFSubscriptionInfoDocumentAPI_removeAmfGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId, char * subsId);
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

# **EventAMFSubscriptionInfoDocumentAPI_removeAmfSubscriptionsInfo**
```c
// Deletes AMF Subscription Info for an eeSubscription
//
void EventAMFSubscriptionInfoDocumentAPI_removeAmfSubscriptionsInfo(apiClient_t *apiClient, char * ueId, char * subsId);
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

