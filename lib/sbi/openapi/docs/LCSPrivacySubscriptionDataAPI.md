# LCSPrivacySubscriptionDataAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LCSPrivacySubscriptionDataAPI_queryLcsPrivacyData**](LCSPrivacySubscriptionDataAPI.md#LCSPrivacySubscriptionDataAPI_queryLcsPrivacyData) | **GET** /subscription-data/{ueId}/lcs-privacy-data | Retrieves the LCS Privacy subscription data of a UE


# **LCSPrivacySubscriptionDataAPI_queryLcsPrivacyData**
```c
// Retrieves the LCS Privacy subscription data of a UE
//
lcs_privacy_data_t* LCSPrivacySubscriptionDataAPI_queryLcsPrivacyData(apiClient_t *apiClient, char * ueId, list_t * fields, char * supported_features, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**fields** | **[list_t](char.md) \*** | attributes to be retrieved | [optional] 
**supported_features** | **char \*** | Supported Features | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[lcs_privacy_data_t](lcs_privacy_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

