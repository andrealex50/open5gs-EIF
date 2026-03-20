# SMPoliciesCollectionAPI

All URIs are relative to *https://example.com/npcf-smpolicycontrol/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SMPoliciesCollectionAPI_createSMPolicy**](SMPoliciesCollectionAPI.md#SMPoliciesCollectionAPI_createSMPolicy) | **POST** /sm-policies | Create a new Individual SM Policy


# **SMPoliciesCollectionAPI_createSMPolicy**
```c
// Create a new Individual SM Policy
//
sm_policy_decision_t* SMPoliciesCollectionAPI_createSMPolicy(apiClient_t *apiClient, sm_policy_context_data_t * sm_policy_context_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sm_policy_context_data** | **[sm_policy_context_data_t](sm_policy_context_data.md) \*** |  | 

### Return type

[sm_policy_decision_t](sm_policy_decision.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

