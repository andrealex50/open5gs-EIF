# V2XSubscriptionDataAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**V2XSubscriptionDataAPI_queryV2xData**](V2XSubscriptionDataAPI.md#V2XSubscriptionDataAPI_queryV2xData) | **GET** /subscription-data/{ueId}/v2x-data | Retrieves the subscribed V2X Data of a UE


# **V2XSubscriptionDataAPI_queryV2xData**
```c
// Retrieves the subscribed V2X Data of a UE
//
v2x_subscription_data_t* V2XSubscriptionDataAPI_queryV2xData(apiClient_t *apiClient, char * ueId, char * supported_features, char * If_None_Match, char * If_Modified_Since);
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

[v2x_subscription_data_t](v2x_subscription_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

