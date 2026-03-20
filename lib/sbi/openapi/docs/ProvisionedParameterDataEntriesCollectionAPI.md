# ProvisionedParameterDataEntriesCollectionAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ProvisionedParameterDataEntriesCollectionAPI_getMultiplePPDataEntries**](ProvisionedParameterDataEntriesCollectionAPI.md#ProvisionedParameterDataEntriesCollectionAPI_getMultiplePPDataEntries) | **GET** /subscription-data/{ueId}/pp-data-store | get a list of Parameter Provisioning Data Entries


# **ProvisionedParameterDataEntriesCollectionAPI_getMultiplePPDataEntries**
```c
// get a list of Parameter Provisioning Data Entries
//
pp_data_entry_list_t* ProvisionedParameterDataEntriesCollectionAPI_getMultiplePPDataEntries(apiClient_t *apiClient, get_multiple_pp_data_entries_ue_id_parameter_t * ueId, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **[get_multiple_pp_data_entries_ue_id_parameter_t](.md) \*** | Identifier of the UE | 
**supported_features** | **char \*** | Features required to be supported by the target NF | [optional] 

### Return type

[pp_data_entry_list_t](pp_data_entry_list.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

