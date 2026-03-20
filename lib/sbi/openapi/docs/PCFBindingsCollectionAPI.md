# PCFBindingsCollectionAPI

All URIs are relative to *https://example.com/nbsf-management/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PCFBindingsCollectionAPI_createPCFBinding**](PCFBindingsCollectionAPI.md#PCFBindingsCollectionAPI_createPCFBinding) | **POST** /pcfBindings | Create a new Individual PCF for a PDU Session binding information
[**PCFBindingsCollectionAPI_getPCFBindings**](PCFBindingsCollectionAPI.md#PCFBindingsCollectionAPI_getPCFBindings) | **GET** /pcfBindings | Read PCF for a PDU Session Bindings information


# **PCFBindingsCollectionAPI_createPCFBinding**
```c
// Create a new Individual PCF for a PDU Session binding information
//
pcf_binding_t* PCFBindingsCollectionAPI_createPCFBinding(apiClient_t *apiClient, pcf_binding_t * pcf_binding);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pcf_binding** | **[pcf_binding_t](pcf_binding.md) \*** |  | 

### Return type

[pcf_binding_t](pcf_binding.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PCFBindingsCollectionAPI_getPCFBindings**
```c
// Read PCF for a PDU Session Bindings information
//
pcf_binding_t* PCFBindingsCollectionAPI_getPCFBindings(apiClient_t *apiClient, char * ipv4Addr, char * ipv6Prefix, char * macAddr48, char * dnn, char * supi, char * gpsi, snssai_t * snssai, char * ipDomain, char * supp_feat);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ipv4Addr** | **char \*** | The IPv4 Address of the served UE. | [optional] 
**ipv6Prefix** | **char \*** | The IPv6 Address of the served UE. The NF service consumer shall append &#39;/128&#39; to the  IPv6 address in the attribute value. E.g. &#39;2001:db8:85a3::8a2e:370:7334/128&#39;.  | [optional] 
**macAddr48** | **char \*** | The MAC Address of the served UE. | [optional] 
**dnn** | **char \*** | DNN. | [optional] 
**supi** | **char \*** | Subscription Permanent Identifier. | [optional] 
**gpsi** | **char \*** | Generic Public Subscription Identifier | [optional] 
**snssai** | **[snssai_t](.md) \*** | The identification of slice. | [optional] 
**ipDomain** | **char \*** | The IPv4 address domain identifier. | [optional] 
**supp_feat** | **char \*** | To filter irrelevant responses related to unsupported features. | [optional] 

### Return type

[pcf_binding_t](pcf_binding.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

