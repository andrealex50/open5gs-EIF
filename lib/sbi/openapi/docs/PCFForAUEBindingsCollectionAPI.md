# PCFForAUEBindingsCollectionAPI

All URIs are relative to *https://example.com/nbsf-management/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PCFForAUEBindingsCollectionAPI_createPCFforUEBinding**](PCFForAUEBindingsCollectionAPI.md#PCFForAUEBindingsCollectionAPI_createPCFforUEBinding) | **POST** /pcf-ue-bindings | Create a new Individual PCF for a UE binding information
[**PCFForAUEBindingsCollectionAPI_getPCFForUeBindings**](PCFForAUEBindingsCollectionAPI.md#PCFForAUEBindingsCollectionAPI_getPCFForUeBindings) | **GET** /pcf-ue-bindings | Read PCF for a UE Bindings information


# **PCFForAUEBindingsCollectionAPI_createPCFforUEBinding**
```c
// Create a new Individual PCF for a UE binding information
//
pcf_for_ue_binding_t* PCFForAUEBindingsCollectionAPI_createPCFforUEBinding(apiClient_t *apiClient, pcf_for_ue_binding_t * pcf_for_ue_binding);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pcf_for_ue_binding** | **[pcf_for_ue_binding_t](pcf_for_ue_binding.md) \*** |  | 

### Return type

[pcf_for_ue_binding_t](pcf_for_ue_binding.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PCFForAUEBindingsCollectionAPI_getPCFForUeBindings**
```c
// Read PCF for a UE Bindings information
//
list_t* PCFForAUEBindingsCollectionAPI_getPCFForUeBindings(apiClient_t *apiClient, char * supi, char * gpsi, char * supp_feat);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supi** | **char \*** | Subscription Permanent Identifier. | [optional] 
**gpsi** | **char \*** | Generic Public Subscription Identifier | [optional] 
**supp_feat** | **char \*** | To filter irrelevant responses related to unsupported features. | [optional] 

### Return type

[list_t](pcf_for_ue_binding.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

