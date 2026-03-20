# LCSMobileOriginatedSubscriptionDataAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LCSMobileOriginatedSubscriptionDataAPI_queryLcsMoData**](LCSMobileOriginatedSubscriptionDataAPI.md#LCSMobileOriginatedSubscriptionDataAPI_queryLcsMoData) | **GET** /subscription-data/{ueId}/lcs-mo-data | Retrieves the LCS Mobile Originated subscription data of a UE


# **LCSMobileOriginatedSubscriptionDataAPI_queryLcsMoData**
```c
// Retrieves the LCS Mobile Originated subscription data of a UE
//
lcs_mo_data_t* LCSMobileOriginatedSubscriptionDataAPI_queryLcsMoData(apiClient_t *apiClient, char * ueId, list_t * fields, char * supported_features, char * If_None_Match, char * If_Modified_Since);
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

[lcs_mo_data_t](lcs_mo_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

