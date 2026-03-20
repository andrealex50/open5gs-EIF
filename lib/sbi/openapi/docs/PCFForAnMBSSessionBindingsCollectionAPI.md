# PCFForAnMBSSessionBindingsCollectionAPI

All URIs are relative to *https://example.com/nbsf-management/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PCFForAnMBSSessionBindingsCollectionAPI_createPCFMbsBinding**](PCFForAnMBSSessionBindingsCollectionAPI.md#PCFForAnMBSSessionBindingsCollectionAPI_createPCFMbsBinding) | **POST** /pcf-mbs-bindings | Create a new Individual PCF for an MBS Session binding.
[**PCFForAnMBSSessionBindingsCollectionAPI_getPCFMbsBinding**](PCFForAnMBSSessionBindingsCollectionAPI.md#PCFForAnMBSSessionBindingsCollectionAPI_getPCFMbsBinding) | **GET** /pcf-mbs-bindings | Retrieve an existing PCF for an MBS Session binding.


# **PCFForAnMBSSessionBindingsCollectionAPI_createPCFMbsBinding**
```c
// Create a new Individual PCF for an MBS Session binding.
//
pcf_mbs_binding_t* PCFForAnMBSSessionBindingsCollectionAPI_createPCFMbsBinding(apiClient_t *apiClient, pcf_mbs_binding_t * pcf_mbs_binding);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pcf_mbs_binding** | **[pcf_mbs_binding_t](pcf_mbs_binding.md) \*** |  | 

### Return type

[pcf_mbs_binding_t](pcf_mbs_binding.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PCFForAnMBSSessionBindingsCollectionAPI_getPCFMbsBinding**
```c
// Retrieve an existing PCF for an MBS Session binding.
//
list_t* PCFForAnMBSSessionBindingsCollectionAPI_getPCFMbsBinding(apiClient_t *apiClient, mbs_session_id_t * mbs_session_id, char * supp_feat);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**mbs_session_id** | **[mbs_session_id_t](.md) \*** | Contains the identifier of the MBS Session to which the requested MBS Session binding is related.  | 
**supp_feat** | **char \*** | Contains the list of features supported by the NF service consumer and used to filter irrelevant responses related to unsupported features.  | [optional] 

### Return type

[list_t](pcf_mbs_binding.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

