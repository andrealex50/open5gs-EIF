# QueryAMFSubscriptionInfoDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**QueryAMFSubscriptionInfoDocumentAPI_getAmfGroupSubscriptions**](QueryAMFSubscriptionInfoDocumentAPI.md#QueryAMFSubscriptionInfoDocumentAPI_getAmfGroupSubscriptions) | **GET** /subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId}/amf-subscriptions | Retrieve AMF subscription Info for a group of UEs or any UE
[**QueryAMFSubscriptionInfoDocumentAPI_getAmfSubscriptionInfo**](QueryAMFSubscriptionInfoDocumentAPI.md#QueryAMFSubscriptionInfoDocumentAPI_getAmfSubscriptionInfo) | **GET** /subscription-data/{ueId}/context-data/ee-subscriptions/{subsId}/amf-subscriptions | Retrieve AMF subscription Info


# **QueryAMFSubscriptionInfoDocumentAPI_getAmfGroupSubscriptions**
```c
// Retrieve AMF subscription Info for a group of UEs or any UE
//
list_t* QueryAMFSubscriptionInfoDocumentAPI_getAmfGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId, char * subsId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueGroupId** | **char \*** |  | 
**subsId** | **char \*** |  | 

### Return type

[list_t](amf_subscription_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **QueryAMFSubscriptionInfoDocumentAPI_getAmfSubscriptionInfo**
```c
// Retrieve AMF subscription Info
//
list_t* QueryAMFSubscriptionInfoDocumentAPI_getAmfSubscriptionInfo(apiClient_t *apiClient, char * ueId, char * subsId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**subsId** | **char \*** |  | 

### Return type

[list_t](amf_subscription_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

