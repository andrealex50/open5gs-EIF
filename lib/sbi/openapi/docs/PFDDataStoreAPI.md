# PFDDataStoreAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PFDDataStoreAPI_readPFDData**](PFDDataStoreAPI.md#PFDDataStoreAPI_readPFDData) | **GET** /application-data/pfds | Retrieve PFDs for application identifier(s)


# **PFDDataStoreAPI_readPFDData**
```c
// Retrieve PFDs for application identifier(s)
//
list_t* PFDDataStoreAPI_readPFDData(apiClient_t *apiClient, list_t * appId, char * supp_feat);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**appId** | **[list_t](char.md) \*** | Contains the information of the application identifier(s) for the querying PFD Data resource. If none appId is included in the URI, it applies to all application identifier(s) for the querying PFD Data resource.  | [optional] 
**supp_feat** | **char \*** | Supported Features | [optional] 

### Return type

[list_t](pfd_data_for_app_ext.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

