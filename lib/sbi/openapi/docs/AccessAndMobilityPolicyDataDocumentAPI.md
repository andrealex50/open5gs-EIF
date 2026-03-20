# AccessAndMobilityPolicyDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AccessAndMobilityPolicyDataDocumentAPI_readAccessAndMobilityPolicyData**](AccessAndMobilityPolicyDataDocumentAPI.md#AccessAndMobilityPolicyDataDocumentAPI_readAccessAndMobilityPolicyData) | **GET** /policy-data/ues/{ueId}/am-data | Retrieves the access and mobility policy data for a subscriber


# **AccessAndMobilityPolicyDataDocumentAPI_readAccessAndMobilityPolicyData**
```c
// Retrieves the access and mobility policy data for a subscriber
//
am_policy_data_t* AccessAndMobilityPolicyDataDocumentAPI_readAccessAndMobilityPolicyData(apiClient_t *apiClient, char * ueId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 

### Return type

[am_policy_data_t](am_policy_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

