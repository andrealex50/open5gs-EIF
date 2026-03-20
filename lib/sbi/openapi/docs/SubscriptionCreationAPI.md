# SubscriptionCreationAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscriptionCreationAPI_subscribe**](SubscriptionCreationAPI.md#SubscriptionCreationAPI_subscribe) | **POST** /{ueId}/sdm-subscriptions | subscribe to notifications


# **SubscriptionCreationAPI_subscribe**
```c
// subscribe to notifications
//
sdm_subscription_t* SubscriptionCreationAPI_subscribe(apiClient_t *apiClient, char * ueId, sdm_subscription_t * sdm_subscription);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identity of the user | 
**sdm_subscription** | **[sdm_subscription_t](sdm_subscription.md) \*** |  | 

### Return type

[sdm_subscription_t](sdm_subscription.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

