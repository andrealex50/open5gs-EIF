# IndividualPCFForAPDUSessionBindingDocumentAPI

All URIs are relative to *https://example.com/nbsf-management/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualPCFForAPDUSessionBindingDocumentAPI_updateIndPCFBinding**](IndividualPCFForAPDUSessionBindingDocumentAPI.md#IndividualPCFForAPDUSessionBindingDocumentAPI_updateIndPCFBinding) | **PATCH** /pcfBindings/{bindingId} | Update an existing Individual PCF for a PDU Session Binding information


# **IndividualPCFForAPDUSessionBindingDocumentAPI_updateIndPCFBinding**
```c
// Update an existing Individual PCF for a PDU Session Binding information
//
pcf_binding_t* IndividualPCFForAPDUSessionBindingDocumentAPI_updateIndPCFBinding(apiClient_t *apiClient, char * bindingId, pcf_binding_patch_t * pcf_binding_patch);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**bindingId** | **char \*** | Represents the individual PCF for a PDU Session Binding. | 
**pcf_binding_patch** | **[pcf_binding_patch_t](pcf_binding_patch.md) \*** | Parameters to update the existing PCF for a PDU Session binding. | 

### Return type

[pcf_binding_t](pcf_binding.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/merge-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

