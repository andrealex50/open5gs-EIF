# SMSSubscriptionDataRetrievalAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SMSSubscriptionDataRetrievalAPI_getSmsData**](SMSSubscriptionDataRetrievalAPI.md#SMSSubscriptionDataRetrievalAPI_getSmsData) | **GET** /{supi}/sms-data | retrieve a UE&#39;s SMS Subscription Data


# **SMSSubscriptionDataRetrievalAPI_getSmsData**
```c
// retrieve a UE's SMS Subscription Data
//
sms_subscription_data_t* SMSSubscriptionDataRetrievalAPI_getSmsData(apiClient_t *apiClient, char * supi, char * supported_features, plmn_id_t * plmn_id, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supi** | **char \*** | Identifier of the UE | 
**supported_features** | **char \*** | Supported Features | [optional] 
**plmn_id** | **[plmn_id_t](.md) \*** |  | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[sms_subscription_data_t](sms_subscription_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

