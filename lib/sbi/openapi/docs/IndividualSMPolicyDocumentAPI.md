# IndividualSMPolicyDocumentAPI

All URIs are relative to *https://example.com/npcf-smpolicycontrol/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualSMPolicyDocumentAPI_deleteSMPolicy**](IndividualSMPolicyDocumentAPI.md#IndividualSMPolicyDocumentAPI_deleteSMPolicy) | **POST** /sm-policies/{smPolicyId}/delete | Delete an existing Individual SM Policy
[**IndividualSMPolicyDocumentAPI_getSMPolicy**](IndividualSMPolicyDocumentAPI.md#IndividualSMPolicyDocumentAPI_getSMPolicy) | **GET** /sm-policies/{smPolicyId} | Read an Individual SM Policy
[**IndividualSMPolicyDocumentAPI_updateSMPolicy**](IndividualSMPolicyDocumentAPI.md#IndividualSMPolicyDocumentAPI_updateSMPolicy) | **POST** /sm-policies/{smPolicyId}/update | Update an existing Individual SM Policy


# **IndividualSMPolicyDocumentAPI_deleteSMPolicy**
```c
// Delete an existing Individual SM Policy
//
void IndividualSMPolicyDocumentAPI_deleteSMPolicy(apiClient_t *apiClient, char * smPolicyId, sm_policy_delete_data_t * sm_policy_delete_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**smPolicyId** | **char \*** | Identifier of a policy association | 
**sm_policy_delete_data** | **[sm_policy_delete_data_t](sm_policy_delete_data.md) \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualSMPolicyDocumentAPI_getSMPolicy**
```c
// Read an Individual SM Policy
//
sm_policy_control_t* IndividualSMPolicyDocumentAPI_getSMPolicy(apiClient_t *apiClient, char * smPolicyId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**smPolicyId** | **char \*** | Identifier of a policy association | 

### Return type

[sm_policy_control_t](sm_policy_control.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualSMPolicyDocumentAPI_updateSMPolicy**
```c
// Update an existing Individual SM Policy
//
sm_policy_decision_t* IndividualSMPolicyDocumentAPI_updateSMPolicy(apiClient_t *apiClient, char * smPolicyId, sm_policy_update_context_data_t * sm_policy_update_context_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**smPolicyId** | **char \*** | Identifier of a policy association | 
**sm_policy_update_context_data** | **[sm_policy_update_context_data_t](sm_policy_update_context_data.md) \*** |  | 

### Return type

[sm_policy_decision_t](sm_policy_decision.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

