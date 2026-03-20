# SubscriptionsCollectionCollectionAPI

All URIs are relative to *https://example.com/namf-comm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscriptionsCollectionCollectionAPI_aMFStatusChangeSubscribe**](SubscriptionsCollectionCollectionAPI.md#SubscriptionsCollectionCollectionAPI_aMFStatusChangeSubscribe) | **POST** /subscriptions | Namf_Communication AMF Status Change Subscribe service Operation


# **SubscriptionsCollectionCollectionAPI_aMFStatusChangeSubscribe**
```c
// Namf_Communication AMF Status Change Subscribe service Operation
//
namf_subscription_data_t* SubscriptionsCollectionCollectionAPI_aMFStatusChangeSubscribe(apiClient_t *apiClient, namf_subscription_data_t * namf_subscription_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**namf_subscription_data** | **[namf_subscription_data_t](namf_subscription_data.md) \*** |  | 

### Return type

[namf_subscription_data_t](namf_subscription_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

