# V2XSubscriptionDataRetrievalAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**V2XSubscriptionDataRetrievalAPI_getV2xData**](V2XSubscriptionDataRetrievalAPI.md#V2XSubscriptionDataRetrievalAPI_getV2xData) | **GET** /{supi}/v2x-data | retrieve a UE&#39;s V2X Subscription Data


# **V2XSubscriptionDataRetrievalAPI_getV2xData**
```c
// retrieve a UE's V2X Subscription Data
//
v2x_subscription_data_t* V2XSubscriptionDataRetrievalAPI_getV2xData(apiClient_t *apiClient, char * supi, char * supported_features, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supi** | **char \*** | Identifier of the UE | 
**supported_features** | **char \*** | Supported Features | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[v2x_subscription_data_t](v2x_subscription_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

