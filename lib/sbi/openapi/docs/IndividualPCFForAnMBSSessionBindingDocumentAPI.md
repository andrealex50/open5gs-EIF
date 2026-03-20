# IndividualPCFForAnMBSSessionBindingDocumentAPI

All URIs are relative to *https://example.com/nbsf-management/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualPCFForAnMBSSessionBindingDocumentAPI_deleteIndPCFMbsBinding**](IndividualPCFForAnMBSSessionBindingDocumentAPI.md#IndividualPCFForAnMBSSessionBindingDocumentAPI_deleteIndPCFMbsBinding) | **DELETE** /pcf-mbs-bindings/{bindingId} | Request the deletion of an existing Individual PCF for an MBS Session Binding.
[**IndividualPCFForAnMBSSessionBindingDocumentAPI_modifyIndPCFMbsBinding**](IndividualPCFForAnMBSSessionBindingDocumentAPI.md#IndividualPCFForAnMBSSessionBindingDocumentAPI_modifyIndPCFMbsBinding) | **PATCH** /pcf-mbs-bindings/{bindingId} | Request the modification of an existing Individual PCF for an MBS Session Binding resource.


# **IndividualPCFForAnMBSSessionBindingDocumentAPI_deleteIndPCFMbsBinding**
```c
// Request the deletion of an existing Individual PCF for an MBS Session Binding.
//
void IndividualPCFForAnMBSSessionBindingDocumentAPI_deleteIndPCFMbsBinding(apiClient_t *apiClient, char * bindingId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**bindingId** | **char \*** | Represents the identifier of the Individual PCF for an MBS Session Binding resource.  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualPCFForAnMBSSessionBindingDocumentAPI_modifyIndPCFMbsBinding**
```c
// Request the modification of an existing Individual PCF for an MBS Session Binding resource.
//
pcf_mbs_binding_t* IndividualPCFForAnMBSSessionBindingDocumentAPI_modifyIndPCFMbsBinding(apiClient_t *apiClient, char * bindingId, pcf_mbs_binding_patch_t * pcf_mbs_binding_patch);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**bindingId** | **char \*** | Represents the identifier of the Individual PCF for an MBS Session Binding resource.  | 
**pcf_mbs_binding_patch** | **[pcf_mbs_binding_patch_t](pcf_mbs_binding_patch.md) \*** | Parameters to request the modification of the PCF for an MBS Session Binding. | 

### Return type

[pcf_mbs_binding_t](pcf_mbs_binding.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/merge-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

