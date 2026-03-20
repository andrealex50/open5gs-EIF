# RetrievalOfMultipleDataSetsAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RetrievalOfMultipleDataSetsAPI_getDataSets**](RetrievalOfMultipleDataSetsAPI.md#RetrievalOfMultipleDataSetsAPI_getDataSets) | **GET** /{supi} | retrieve multiple data sets


# **RetrievalOfMultipleDataSetsAPI_getDataSets**
```c
// retrieve multiple data sets
//
subscription_data_sets_t* RetrievalOfMultipleDataSetsAPI_getDataSets(apiClient_t *apiClient, char * supi, set_t * dataset_names, plmn_id_nid_t * plmn_id, int disaster_roaming_ind, char * supported_features, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supi** | **char \*** | Identifier of the UE | 
**dataset_names** | **[set_t](data_set_name.md) \*** | List of dataset names | 
**plmn_id** | **[plmn_id_nid_t](.md) \*** | serving PLMN ID | [optional] 
**disaster_roaming_ind** | **int** | Indication whether Disaster Roaming service is applied or not | [optional] [default to false]
**supported_features** | **char \*** | Supported Features | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[subscription_data_sets_t](subscription_data_sets.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

