# AccessAndMobilitySubscriptionDataRetrievalAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AccessAndMobilitySubscriptionDataRetrievalAPI_getAmData**](AccessAndMobilitySubscriptionDataRetrievalAPI.md#AccessAndMobilitySubscriptionDataRetrievalAPI_getAmData) | **GET** /{supi}/am-data | retrieve a UE&#39;s Access and Mobility Subscription Data


# **AccessAndMobilitySubscriptionDataRetrievalAPI_getAmData**
```c
// retrieve a UE's Access and Mobility Subscription Data
//
access_and_mobility_subscription_data_t* AccessAndMobilitySubscriptionDataRetrievalAPI_getAmData(apiClient_t *apiClient, char * supi, char * supported_features, plmn_id_nid_t * plmn_id, list_t * adjacent_plmns, int disaster_roaming_ind, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supi** | **char \*** | Identifier of the UE | 
**supported_features** | **char \*** | Supported Features | [optional] 
**plmn_id** | **[plmn_id_nid_t](.md) \*** | Serving PLMN ID or SNPN ID | [optional] 
**adjacent_plmns** | **[list_t](plmn_id.md) \*** | List of PLMNs adjacent to the UE&#39;s serving PLMN | [optional] 
**disaster_roaming_ind** | **int** | Indication whether Disaster Roaming service is applied or not | [optional] [default to false]
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[access_and_mobility_subscription_data_t](access_and_mobility_subscription_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

