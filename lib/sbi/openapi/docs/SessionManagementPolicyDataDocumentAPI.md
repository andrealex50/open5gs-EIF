# SessionManagementPolicyDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SessionManagementPolicyDataDocumentAPI_readSessionManagementPolicyData**](SessionManagementPolicyDataDocumentAPI.md#SessionManagementPolicyDataDocumentAPI_readSessionManagementPolicyData) | **GET** /policy-data/ues/{ueId}/sm-data | Retrieves the session management policy data for a subscriber
[**SessionManagementPolicyDataDocumentAPI_updateSessionManagementPolicyData**](SessionManagementPolicyDataDocumentAPI.md#SessionManagementPolicyDataDocumentAPI_updateSessionManagementPolicyData) | **PATCH** /policy-data/ues/{ueId}/sm-data | Modify the session management policy data for a subscriber


# **SessionManagementPolicyDataDocumentAPI_readSessionManagementPolicyData**
```c
// Retrieves the session management policy data for a subscriber
//
sm_policy_data_t* SessionManagementPolicyDataDocumentAPI_readSessionManagementPolicyData(apiClient_t *apiClient, char * ueId, snssai_t * snssai, char * dnn, list_t * fields, char * supp_feat);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**snssai** | **[snssai_t](.md) \*** |  | [optional] 
**dnn** | **char \*** |  | [optional] 
**fields** | **[list_t](char.md) \*** | attributes to be retrieved | [optional] 
**supp_feat** | **char \*** | Supported Features | [optional] 

### Return type

[sm_policy_data_t](sm_policy_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SessionManagementPolicyDataDocumentAPI_updateSessionManagementPolicyData**
```c
// Modify the session management policy data for a subscriber
//
sm_policy_data_t* SessionManagementPolicyDataDocumentAPI_updateSessionManagementPolicyData(apiClient_t *apiClient, char * ueId, sm_policy_data_patch_t * sm_policy_data_patch);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**sm_policy_data_patch** | **[sm_policy_data_patch_t](sm_policy_data_patch.md) \*** |  | 

### Return type

[sm_policy_data_t](sm_policy_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/merge-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

