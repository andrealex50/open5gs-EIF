# PolicyDataForIndividualUeDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PolicyDataForIndividualUeDocumentAPI_readPolicyData**](PolicyDataForIndividualUeDocumentAPI.md#PolicyDataForIndividualUeDocumentAPI_readPolicyData) | **GET** /policy-data/ues/{ueId} | Retrieve the policy data for a subscriber


# **PolicyDataForIndividualUeDocumentAPI_readPolicyData**
```c
// Retrieve the policy data for a subscriber
//
policy_data_for_individual_ue_t* PolicyDataForIndividualUeDocumentAPI_readPolicyData(apiClient_t *apiClient, char * ueId, char * supp_feat, list_t * data_subset_names);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**supp_feat** | **char \*** | Supported Features | [optional] 
**data_subset_names** | **[list_t](policy_data_subset.md) \*** | List of policy data subset names | [optional] 

### Return type

[policy_data_for_individual_ue_t](policy_data_for_individual_ue.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

