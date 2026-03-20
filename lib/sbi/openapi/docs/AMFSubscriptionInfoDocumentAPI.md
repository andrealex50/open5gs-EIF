# AMFSubscriptionInfoDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AMFSubscriptionInfoDocumentAPI_createAMFSubscriptions**](AMFSubscriptionInfoDocumentAPI.md#AMFSubscriptionInfoDocumentAPI_createAMFSubscriptions) | **PUT** /subscription-data/{ueId}/context-data/ee-subscriptions/{subsId}/amf-subscriptions | Create AmfSubscriptions for an individual ee subscriptions of a UE


# **AMFSubscriptionInfoDocumentAPI_createAMFSubscriptions**
```c
// Create AmfSubscriptions for an individual ee subscriptions of a UE
//
list_t* AMFSubscriptionInfoDocumentAPI_createAMFSubscriptions(apiClient_t *apiClient, char * ueId, char * subsId, list_t * amf_subscription_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
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

