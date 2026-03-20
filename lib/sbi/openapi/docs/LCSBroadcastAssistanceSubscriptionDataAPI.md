# LCSBroadcastAssistanceSubscriptionDataAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LCSBroadcastAssistanceSubscriptionDataAPI_queryLcsBcaData**](LCSBroadcastAssistanceSubscriptionDataAPI.md#LCSBroadcastAssistanceSubscriptionDataAPI_queryLcsBcaData) | **GET** /subscription-data/{ueId}/{servingPlmnId}/provisioned-data/lcs-bca-data | Retrieves the LCS Broadcast Assistance subscription data of a UE


# **LCSBroadcastAssistanceSubscriptionDataAPI_queryLcsBcaData**
```c
// Retrieves the LCS Broadcast Assistance subscription data of a UE
//
lcs_broadcast_assistance_types_data_t* LCSBroadcastAssistanceSubscriptionDataAPI_queryLcsBcaData(apiClient_t *apiClient, char * ueId, char * servingPlmnId, char * supported_features, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**servingPlmnId** | **char \*** | PLMN ID | 
**supported_features** | **char \*** | Supported Features | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[lcs_broadcast_assistance_types_data_t](lcs_broadcast_assistance_types_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

