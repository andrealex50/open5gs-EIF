# IndividualPCFBindingDocumentAPI

All URIs are relative to *https://example.com/nbsf-management/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualPCFBindingDocumentAPI_deleteIndPCFBinding**](IndividualPCFBindingDocumentAPI.md#IndividualPCFBindingDocumentAPI_deleteIndPCFBinding) | **DELETE** /pcfBindings/{bindingId} | Delete an existing Individual PCF for a PDU Session Binding information


# **IndividualPCFBindingDocumentAPI_deleteIndPCFBinding**
```c
// Delete an existing Individual PCF for a PDU Session Binding information
//
void IndividualPCFBindingDocumentAPI_deleteIndPCFBinding(apiClient_t *apiClient, char * bindingId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**bindingId** | **char \*** | Represents the individual PCF for a PDU Session Binding. | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

