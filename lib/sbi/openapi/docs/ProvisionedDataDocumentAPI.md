# ProvisionedDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ProvisionedDataDocumentAPI_queryProvisionedData**](ProvisionedDataDocumentAPI.md#ProvisionedDataDocumentAPI_queryProvisionedData) | **GET** /subscription-data/{ueId}/{servingPlmnId}/provisioned-data | Retrieve multiple provisioned data sets of a UE


# **ProvisionedDataDocumentAPI_queryProvisionedData**
```c
// Retrieve multiple provisioned data sets of a UE
//
provisioned_data_sets_t* ProvisionedDataDocumentAPI_queryProvisionedData(apiClient_t *apiClient, char * ueId, char * servingPlmnId, set_t * dataset_names);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**servingPlmnId** | **char \*** | PLMN ID | 
**dataset_names** | **[set_t](data_set_name.md) \*** | List of dataset names | [optional] 

### Return type

[provisioned_data_sets_t](provisioned_data_sets.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

