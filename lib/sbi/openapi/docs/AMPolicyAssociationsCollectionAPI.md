# AMPolicyAssociationsCollectionAPI

All URIs are relative to *https://example.com/npcf-am-policy-control/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AMPolicyAssociationsCollectionAPI_createIndividualAMPolicyAssociation**](AMPolicyAssociationsCollectionAPI.md#AMPolicyAssociationsCollectionAPI_createIndividualAMPolicyAssociation) | **POST** /policies | Create individual AM policy association.


# **AMPolicyAssociationsCollectionAPI_createIndividualAMPolicyAssociation**
```c
// Create individual AM policy association.
//
policy_association_t* AMPolicyAssociationsCollectionAPI_createIndividualAMPolicyAssociation(apiClient_t *apiClient, policy_association_request_t * policy_association_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**policy_association_request** | **[policy_association_request_t](policy_association_request.md) \*** |  | 

### Return type

[policy_association_t](policy_association.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

