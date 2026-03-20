# IndividualAppliedBDTPolicyDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualAppliedBDTPolicyDataDocumentAPI_createIndividualAppliedBdtPolicyData**](IndividualAppliedBDTPolicyDataDocumentAPI.md#IndividualAppliedBDTPolicyDataDocumentAPI_createIndividualAppliedBdtPolicyData) | **PUT** /application-data/bdtPolicyData/{bdtPolicyId} | Create an individual applied BDT Policy Data resource
[**IndividualAppliedBDTPolicyDataDocumentAPI_deleteIndividualAppliedBdtPolicyData**](IndividualAppliedBDTPolicyDataDocumentAPI.md#IndividualAppliedBDTPolicyDataDocumentAPI_deleteIndividualAppliedBdtPolicyData) | **DELETE** /application-data/bdtPolicyData/{bdtPolicyId} | Delete an individual Applied BDT Policy Data resource
[**IndividualAppliedBDTPolicyDataDocumentAPI_updateIndividualAppliedBdtPolicyData**](IndividualAppliedBDTPolicyDataDocumentAPI.md#IndividualAppliedBDTPolicyDataDocumentAPI_updateIndividualAppliedBdtPolicyData) | **PATCH** /application-data/bdtPolicyData/{bdtPolicyId} | Modify part of the properties of an individual Applied BDT Policy Data resource


# **IndividualAppliedBDTPolicyDataDocumentAPI_createIndividualAppliedBdtPolicyData**
```c
// Create an individual applied BDT Policy Data resource
//
bdt_policy_data_t* IndividualAppliedBDTPolicyDataDocumentAPI_createIndividualAppliedBdtPolicyData(apiClient_t *apiClient, char * bdtPolicyId, bdt_policy_data_t * bdt_policy_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**bdtPolicyId** | **char \*** | The Identifier of an Individual Applied BDT Policy Data to be created or updated. It shall apply the format of Data type string.  | 
**bdt_policy_data** | **[bdt_policy_data_t](bdt_policy_data.md) \*** |  | 

### Return type

[bdt_policy_data_t](bdt_policy_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualAppliedBDTPolicyDataDocumentAPI_deleteIndividualAppliedBdtPolicyData**
```c
// Delete an individual Applied BDT Policy Data resource
//
void IndividualAppliedBDTPolicyDataDocumentAPI_deleteIndividualAppliedBdtPolicyData(apiClient_t *apiClient, char * bdtPolicyId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**bdtPolicyId** | **char \*** | The Identifier of an Individual Applied BDT Policy Data to be deleted. It shall apply the format of Data type string.  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualAppliedBDTPolicyDataDocumentAPI_updateIndividualAppliedBdtPolicyData**
```c
// Modify part of the properties of an individual Applied BDT Policy Data resource
//
bdt_policy_data_t* IndividualAppliedBDTPolicyDataDocumentAPI_updateIndividualAppliedBdtPolicyData(apiClient_t *apiClient, char * bdtPolicyId, bdt_policy_data_patch_t * bdt_policy_data_patch);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**bdtPolicyId** | **char \*** | The Identifier of an Individual Applied BDT Policy Data to be updated. It shall apply the format of Data type string.  | 
**bdt_policy_data_patch** | **[bdt_policy_data_patch_t](bdt_policy_data_patch.md) \*** |  | 

### Return type

[bdt_policy_data_t](bdt_policy_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/merge-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

