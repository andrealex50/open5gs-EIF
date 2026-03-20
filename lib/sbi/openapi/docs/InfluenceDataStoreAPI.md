# InfluenceDataStoreAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**InfluenceDataStoreAPI_readInfluenceData**](InfluenceDataStoreAPI.md#InfluenceDataStoreAPI_readInfluenceData) | **GET** /application-data/influenceData | Retrieve Traffic Influence Data


# **InfluenceDataStoreAPI_readInfluenceData**
```c
// Retrieve Traffic Influence Data
//
list_t* InfluenceDataStoreAPI_readInfluenceData(apiClient_t *apiClient, list_t * influence_Ids, list_t * dnns, list_t * snssais, list_t * internal_Group_Ids, list_t * supis, char * supp_feat);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**influence_Ids** | **[list_t](char.md) \*** | Each element identifies a service. | [optional] 
**dnns** | **[list_t](char.md) \*** | Each element identifies a DNN. | [optional] 
**snssais** | **[list_t](snssai.md) \*** | Each element identifies a slice. | [optional] 
**internal_Group_Ids** | **[list_t](char.md) \*** | Each element identifies a group of users. | [optional] 
**supis** | **[list_t](char.md) \*** | Each element identifies the user. | [optional] 
**supp_feat** | **char \*** | Supported Features | [optional] 

### Return type

[list_t](traffic_influ_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

