# SubscriptionsCollectionAPI

All URIs are relative to *https://example.com/nnrf-nfm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscriptionsCollectionAPI_createSubscription**](SubscriptionsCollectionAPI.md#SubscriptionsCollectionAPI_createSubscription) | **POST** /subscriptions | Create a new subscription


# **SubscriptionsCollectionAPI_createSubscription**
```c
// Create a new subscription
//
subscription_data_t* SubscriptionsCollectionAPI_createSubscription(apiClient_t *apiClient, subscription_data_t * subscription_data, char * Content_Encoding, char * Accept_Encoding);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subscription_data** | **[subscription_data_t](subscription_data.md) \*** |  | 
**Content_Encoding** | **char \*** | Content-Encoding, described in IETF RFC 7231 | [optional] 
**Accept_Encoding** | **char \*** | Accept-Encoding, described in IETF RFC 7231 | [optional] 

### Return type

[subscription_data_t](subscription_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

