# Class5MBSSubscriptionDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Class5MBSSubscriptionDataDocumentAPI_query5mbsData**](Class5MBSSubscriptionDataDocumentAPI.md#Class5MBSSubscriptionDataDocumentAPI_query5mbsData) | **GET** /subscription-data/{ueId}/5mbs-data | Retrieves the 5mbs subscription data of a UE


# **Class5MBSSubscriptionDataDocumentAPI_query5mbsData**
```c
// Retrieves the 5mbs subscription data of a UE
//
mbs_subscription_data_1_t* Class5MBSSubscriptionDataDocumentAPI_query5mbsData(apiClient_t *apiClient, char * ueId, char * supported_features, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**supported_features** | **char \*** | Supported Features | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[mbs_subscription_data_1_t](mbs_subscription_data_1.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

