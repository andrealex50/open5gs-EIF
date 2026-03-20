# BdtDataStoreAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**BdtDataStoreAPI_readBdtData**](BdtDataStoreAPI.md#BdtDataStoreAPI_readBdtData) | **GET** /policy-data/bdt-data | Retrieves the BDT data collection


# **BdtDataStoreAPI_readBdtData**
```c
// Retrieves the BDT data collection
//
list_t* BdtDataStoreAPI_readBdtData(apiClient_t *apiClient, list_t * bdt_ref_ids, char * supp_feat);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**bdt_ref_ids** | **[list_t](char.md) \*** | List of the BDT reference identifiers. | [optional] 
**supp_feat** | **char \*** | Supported Features | [optional] 

### Return type

[list_t](bdt_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

