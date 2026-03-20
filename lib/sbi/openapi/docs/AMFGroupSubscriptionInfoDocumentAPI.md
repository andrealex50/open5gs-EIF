# AMFGroupSubscriptionInfoDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AMFGroupSubscriptionInfoDocumentAPI_createAmfGroupSubscriptions**](AMFGroupSubscriptionInfoDocumentAPI.md#AMFGroupSubscriptionInfoDocumentAPI_createAmfGroupSubscriptions) | **PUT** /subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId}/amf-subscriptions | Create AmfSubscriptions for a group of UEs or any UE


# **AMFGroupSubscriptionInfoDocumentAPI_createAmfGroupSubscriptions**
```c
// Create AmfSubscriptions for a group of UEs or any UE
//
list_t* AMFGroupSubscriptionInfoDocumentAPI_createAmfGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId, char * subsId, list_t * amf_subscription_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueGroupId** | **char \*** |  | 
**subsId** | **char \*** |  | 
**amf_subscription_info** | **[list_t](amf_subscription_info.md) \*** |  | 

### Return type

[list_t](amf_subscription_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

