# SMFSelectionSubscriptionDataRetrievalAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SMFSelectionSubscriptionDataRetrievalAPI_getSmfSelData**](SMFSelectionSubscriptionDataRetrievalAPI.md#SMFSelectionSubscriptionDataRetrievalAPI_getSmfSelData) | **GET** /{supi}/smf-select-data | retrieve a UE&#39;s SMF Selection Subscription Data


# **SMFSelectionSubscriptionDataRetrievalAPI_getSmfSelData**
```c
// retrieve a UE's SMF Selection Subscription Data
//
smf_selection_subscription_data_t* SMFSelectionSubscriptionDataRetrievalAPI_getSmfSelData(apiClient_t *apiClient, char * supi, char * supported_features, plmn_id_t * plmn_id, int disaster_roaming_ind, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supi** | **char \*** | Identifier of the UE | 
**supported_features** | **char \*** | Supported Features | [optional] 
**plmn_id** | **[plmn_id_t](.md) \*** | serving PLMN ID | [optional] 
**disaster_roaming_ind** | **int** | Indication whether Disaster Roaming service is applied or not | [optional] [default to false]
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[smf_selection_subscription_data_t](smf_selection_subscription_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

