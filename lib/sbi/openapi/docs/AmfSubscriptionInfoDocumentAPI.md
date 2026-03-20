# AmfSubscriptionInfoDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AmfSubscriptionInfoDocumentAPI_modifyAmfGroupSubscriptions**](AmfSubscriptionInfoDocumentAPI.md#AmfSubscriptionInfoDocumentAPI_modifyAmfGroupSubscriptions) | **PATCH** /subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId}/amf-subscriptions | modify the AMF Subscription Info
[**AmfSubscriptionInfoDocumentAPI_modifyAmfSubscriptionInfo**](AmfSubscriptionInfoDocumentAPI.md#AmfSubscriptionInfoDocumentAPI_modifyAmfSubscriptionInfo) | **PATCH** /subscription-data/{ueId}/context-data/ee-subscriptions/{subsId}/amf-subscriptions | modify the AMF Subscription Info


# **AmfSubscriptionInfoDocumentAPI_modifyAmfGroupSubscriptions**
```c
// modify the AMF Subscription Info
//
patch_result_t* AmfSubscriptionInfoDocumentAPI_modifyAmfGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId, char * subsId, list_t * patch_item, char * supported_features);
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

# **AmfSubscriptionInfoDocumentAPI_modifyAmfSubscriptionInfo**
```c
// modify the AMF Subscription Info
//
patch_result_t* AmfSubscriptionInfoDocumentAPI_modifyAmfSubscriptionInfo(apiClient_t *apiClient, char * ueId, char * subsId, list_t * patch_item, char * supported_features);
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

