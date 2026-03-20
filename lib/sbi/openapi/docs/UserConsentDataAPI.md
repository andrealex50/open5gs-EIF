# UserConsentDataAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UserConsentDataAPI_queryUserConsentData**](UserConsentDataAPI.md#UserConsentDataAPI_queryUserConsentData) | **GET** /subscription-data/{ueId}/uc-data | Retrieves the subscribed User Consent Data of a UE


# **UserConsentDataAPI_queryUserConsentData**
```c
// Retrieves the subscribed User Consent Data of a UE
//
uc_subscription_data_t* UserConsentDataAPI_queryUserConsentData(apiClient_t *apiClient, char * ueId, char * supported_features, uc_purpose_e ucPurpose, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**supported_features** | **char \*** | Supported Features | [optional] 
**ucPurpose** | **uc_purpose_e** | User consent purpose | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[uc_subscription_data_t](uc_subscription_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

