# BdtPolicyDataStoreAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BdtPolicyDataStoreAPI_readBdtPolicyData**](BdtPolicyDataStoreAPI.md#BdtPolicyDataStoreAPI_readBdtPolicyData) | **GET** /application-data/bdtPolicyData | Retrieve applied BDT Policy Data


# **BdtPolicyDataStoreAPI_readBdtPolicyData**
```c
// Retrieve applied BDT Policy Data
//
list_t* BdtPolicyDataStoreAPI_readBdtPolicyData(apiClient_t *apiClient, list_t * bdt_policy_ids, list_t * internal_group_ids, list_t * supis);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**bdt_policy_ids** | **[list_t](char.md) \*** | Each element identifies a service. | [optional] 
**internal_group_ids** | **[list_t](char.md) \*** | Each element identifies a group of users. | [optional] 
**supis** | **[list_t](char.md) \*** | Each element identifies the user. | [optional] 

### Return type

[list_t](bdt_policy_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

