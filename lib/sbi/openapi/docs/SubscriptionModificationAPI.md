# SubscriptionModificationAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubscriptionModificationAPI_modify**](SubscriptionModificationAPI.md#SubscriptionModificationAPI_modify) | **PATCH** /{ueId}/sdm-subscriptions/{subscriptionId} | modify the subscription
[**SubscriptionModificationAPI_modifySharedDataSubs**](SubscriptionModificationAPI.md#SubscriptionModificationAPI_modifySharedDataSubs) | **PATCH** /shared-data-subscriptions/{subscriptionId} | modify the subscription


# **SubscriptionModificationAPI_modify**
```c
// modify the subscription
//
modify_200_response_t* SubscriptionModificationAPI_modify(apiClient_t *apiClient, char * ueId, char * subscriptionId, sdm_subs_modification_t * sdm_subs_modification, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identity of the user | 
**subscriptionId** | **char \*** | Id of the SDM Subscription | 
**sdm_subs_modification** | **[sdm_subs_modification_t](sdm_subs_modification.md) \*** |  | 
**supported_features** | **char \*** | Features required to be supported by the target NF | [optional] 

### Return type

[modify_200_response_t](modify_200_response.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/merge-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SubscriptionModificationAPI_modifySharedDataSubs**
```c
// modify the subscription
//
modify_200_response_t* SubscriptionModificationAPI_modifySharedDataSubs(apiClient_t *apiClient, char * subscriptionId, sdm_subs_modification_t * sdm_subs_modification, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subscriptionId** | **char \*** | Id of the SDM Subscription | 
**sdm_subs_modification** | **[sdm_subs_modification_t](sdm_subs_modification.md) \*** |  | 
**supported_features** | **char \*** | Features required to be supported by the target NF | [optional] 

### Return type

[modify_200_response_t](modify_200_response.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/merge-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

