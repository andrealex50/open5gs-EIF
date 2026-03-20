# SMFEventGroupSubscriptionInfoDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SMFEventGroupSubscriptionInfoDocumentAPI_createSmfGroupSubscriptions**](SMFEventGroupSubscriptionInfoDocumentAPI.md#SMFEventGroupSubscriptionInfoDocumentAPI_createSmfGroupSubscriptions) | **PUT** /subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId}/smf-subscriptions | Create SMF Subscription Info for a group of UEs or any YE


# **SMFEventGroupSubscriptionInfoDocumentAPI_createSmfGroupSubscriptions**
```c
// Create SMF Subscription Info for a group of UEs or any YE
//
smf_subscription_info_t* SMFEventGroupSubscriptionInfoDocumentAPI_createSmfGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId, char * subsId, smf_subscription_info_t * smf_subscription_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueGroupId** | **char \*** |  | 
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

