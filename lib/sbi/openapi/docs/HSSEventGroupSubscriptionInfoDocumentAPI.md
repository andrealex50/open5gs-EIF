# HSSEventGroupSubscriptionInfoDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**HSSEventGroupSubscriptionInfoDocumentAPI_createHssGroupSubscriptions**](HSSEventGroupSubscriptionInfoDocumentAPI.md#HSSEventGroupSubscriptionInfoDocumentAPI_createHssGroupSubscriptions) | **PUT** /subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId}/hss-subscriptions | Create HSS Subscription Info for a group of UEs


# **HSSEventGroupSubscriptionInfoDocumentAPI_createHssGroupSubscriptions**
```c
// Create HSS Subscription Info for a group of UEs
//
hss_subscription_info_t* HSSEventGroupSubscriptionInfoDocumentAPI_createHssGroupSubscriptions(apiClient_t *apiClient, char * externalGroupId, char * subsId, hss_subscription_info_t * hss_subscription_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**externalGroupId** | **char \*** |  | 
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

