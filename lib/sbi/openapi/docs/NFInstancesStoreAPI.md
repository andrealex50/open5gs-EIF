# NFInstancesStoreAPI

All URIs are relative to *https://example.com/nnrf-nfm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**NFInstancesStoreAPI_getNFInstances**](NFInstancesStoreAPI.md#NFInstancesStoreAPI_getNFInstances) | **GET** /nf-instances | Retrieves a collection of NF Instances
[**NFInstancesStoreAPI_optionsNFInstances**](NFInstancesStoreAPI.md#NFInstancesStoreAPI_optionsNFInstances) | **OPTIONS** /nf-instances | Discover communication options supported by NRF for NF Instances


# **NFInstancesStoreAPI_getNFInstances**
```c
// Retrieves a collection of NF Instances
//
uri_list_t* NFInstancesStoreAPI_getNFInstances(apiClient_t *apiClient, nf_type_e nf_type, int limit, int page_number, int page_size);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**nf_type** | **nf_type_e** | Type of NF | [optional] 
**limit** | **int** | How many items to return at one time | [optional] 
**page_number** | **int** | Page number where the response shall start | [optional] 
**page_size** | **int** | Maximum number of items in each returned page | [optional] 

### Return type

[uri_list_t](uri_list.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/3gppHal+json, application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **NFInstancesStoreAPI_optionsNFInstances**
```c
// Discover communication options supported by NRF for NF Instances
//
options_response_t* NFInstancesStoreAPI_optionsNFInstances(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[options_response_t](options_response.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

