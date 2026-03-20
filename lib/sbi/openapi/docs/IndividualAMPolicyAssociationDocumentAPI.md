# IndividualAMPolicyAssociationDocumentAPI

All URIs are relative to *https://example.com/npcf-am-policy-control/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualAMPolicyAssociationDocumentAPI_deleteIndividualAMPolicyAssociation**](IndividualAMPolicyAssociationDocumentAPI.md#IndividualAMPolicyAssociationDocumentAPI_deleteIndividualAMPolicyAssociation) | **DELETE** /policies/{polAssoId} | Delete individual AM policy association.
[**IndividualAMPolicyAssociationDocumentAPI_readIndividualAMPolicyAssociation**](IndividualAMPolicyAssociationDocumentAPI.md#IndividualAMPolicyAssociationDocumentAPI_readIndividualAMPolicyAssociation) | **GET** /policies/{polAssoId} | Read individual AM policy association.
[**IndividualAMPolicyAssociationDocumentAPI_reportObservedEventTriggersForIndividualAMPolicyAssociation**](IndividualAMPolicyAssociationDocumentAPI.md#IndividualAMPolicyAssociationDocumentAPI_reportObservedEventTriggersForIndividualAMPolicyAssociation) | **POST** /policies/{polAssoId}/update | Report observed event triggers and obtain updated policies for an individual AM policy association. 


# **IndividualAMPolicyAssociationDocumentAPI_deleteIndividualAMPolicyAssociation**
```c
// Delete individual AM policy association.
//
void IndividualAMPolicyAssociationDocumentAPI_deleteIndividualAMPolicyAssociation(apiClient_t *apiClient, char * polAssoId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**polAssoId** | **char \*** | Identifier of a policy association | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualAMPolicyAssociationDocumentAPI_readIndividualAMPolicyAssociation**
```c
// Read individual AM policy association.
//
policy_association_t* IndividualAMPolicyAssociationDocumentAPI_readIndividualAMPolicyAssociation(apiClient_t *apiClient, char * polAssoId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**polAssoId** | **char \*** | Identifier of a policy association | 

### Return type

[policy_association_t](policy_association.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualAMPolicyAssociationDocumentAPI_reportObservedEventTriggersForIndividualAMPolicyAssociation**
```c
// Report observed event triggers and obtain updated policies for an individual AM policy association. 
//
policy_update_t* IndividualAMPolicyAssociationDocumentAPI_reportObservedEventTriggersForIndividualAMPolicyAssociation(apiClient_t *apiClient, char * polAssoId, policy_association_update_request_t * policy_association_update_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**polAssoId** | **char \*** | Identifier of a policy association | 
**policy_association_update_request** | **[policy_association_update_request_t](policy_association_update_request.md) \*** |  | 

### Return type

[policy_update_t](policy_update.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

