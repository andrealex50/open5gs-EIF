# IndividualPCFForAUEBindingDocumentAPI

All URIs are relative to *https://example.com/nbsf-management/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualPCFForAUEBindingDocumentAPI_deleteIndPCFforUEBinding**](IndividualPCFForAUEBindingDocumentAPI.md#IndividualPCFForAUEBindingDocumentAPI_deleteIndPCFforUEBinding) | **DELETE** /pcf-ue-bindings/{bindingId} | Delete an existing Individual PCF for a UE Binding information
[**IndividualPCFForAUEBindingDocumentAPI_updateIndPCFforUEBinding**](IndividualPCFForAUEBindingDocumentAPI.md#IndividualPCFForAUEBindingDocumentAPI_updateIndPCFforUEBinding) | **PATCH** /pcf-ue-bindings/{bindingId} | Update an existing Individual PCF for a UE Binding information


# **IndividualPCFForAUEBindingDocumentAPI_deleteIndPCFforUEBinding**
```c
// Delete an existing Individual PCF for a UE Binding information
//
void IndividualPCFForAUEBindingDocumentAPI_deleteIndPCFforUEBinding(apiClient_t *apiClient, char * bindingId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**bindingId** | **char \*** | Represents the individual PCF for a UE Binding. | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualPCFForAUEBindingDocumentAPI_updateIndPCFforUEBinding**
```c
// Update an existing Individual PCF for a UE Binding information
//
pcf_for_ue_binding_t* IndividualPCFForAUEBindingDocumentAPI_updateIndPCFforUEBinding(apiClient_t *apiClient, char * bindingId, pcf_for_ue_binding_patch_t * pcf_for_ue_binding_patch);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**bindingId** | **char \*** | Represents the individual PCF for a UE Binding. | 
**pcf_for_ue_binding_patch** | **[pcf_for_ue_binding_patch_t](pcf_for_ue_binding_patch.md) \*** | Parameters to update the existing PCF for a UE binding. | 

### Return type

[pcf_for_ue_binding_t](pcf_for_ue_binding.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/merge-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

