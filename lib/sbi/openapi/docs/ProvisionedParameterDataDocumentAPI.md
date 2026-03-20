# ProvisionedParameterDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ProvisionedParameterDataDocumentAPI_modifyPpData**](ProvisionedParameterDataDocumentAPI.md#ProvisionedParameterDataDocumentAPI_modifyPpData) | **PATCH** /subscription-data/{ueId}/pp-data | modify the provisioned parameter data


# **ProvisionedParameterDataDocumentAPI_modifyPpData**
```c
// modify the provisioned parameter data
//
patch_result_t* ProvisionedParameterDataDocumentAPI_modifyPpData(apiClient_t *apiClient, char * ueId, list_t * patch_item, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | pp data for a UE | 
**patch_item** | **[list_t](patch_item.md) \*** |  | 
**supported_features** | **char \*** | Features required to be supported by the target NF | [optional] 

### Return type

[patch_result_t](patch_result.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

