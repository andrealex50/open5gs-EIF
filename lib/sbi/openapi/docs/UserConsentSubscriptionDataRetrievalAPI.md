# UserConsentSubscriptionDataRetrievalAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UserConsentSubscriptionDataRetrievalAPI_getUcData**](UserConsentSubscriptionDataRetrievalAPI.md#UserConsentSubscriptionDataRetrievalAPI_getUcData) | **GET** /{supi}/uc-data | retrieve a UE&#39;s User Consent Subscription Data


# **UserConsentSubscriptionDataRetrievalAPI_getUcData**
```c
// retrieve a UE's User Consent Subscription Data
//
uc_subscription_data_t* UserConsentSubscriptionDataRetrievalAPI_getUcData(apiClient_t *apiClient, char * supi, char * supported_features, uc_purpose_e uc_purpose, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supi** | **char \*** | Identifier of the UE | 
**supported_features** | **char \*** | Supported Features | [optional] 
**uc_purpose** | **uc_purpose_e** | User consent purpose | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[uc_subscription_data_t](uc_subscription_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

