# LCSPrivacyDataRetrievalAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LCSPrivacyDataRetrievalAPI_getLcsPrivacyData**](LCSPrivacyDataRetrievalAPI.md#LCSPrivacyDataRetrievalAPI_getLcsPrivacyData) | **GET** /{ueId}/lcs-privacy-data | retrieve a UE&#39;s LCS Privacy Subscription Data


# **LCSPrivacyDataRetrievalAPI_getLcsPrivacyData**
```c
// retrieve a UE's LCS Privacy Subscription Data
//
lcs_privacy_data_t* LCSPrivacyDataRetrievalAPI_getLcsPrivacyData(apiClient_t *apiClient, char * ueId, char * supported_features, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**supported_features** | **char \*** | Supported Features | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[lcs_privacy_data_t](lcs_privacy_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

