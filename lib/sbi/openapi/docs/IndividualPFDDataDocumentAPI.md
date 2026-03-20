# IndividualPFDDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualPFDDataDocumentAPI_createOrReplaceIndividualPFDData**](IndividualPFDDataDocumentAPI.md#IndividualPFDDataDocumentAPI_createOrReplaceIndividualPFDData) | **PUT** /application-data/pfds/{appId} | Create or update the corresponding PFDs for the specified application identifier
[**IndividualPFDDataDocumentAPI_deleteIndividualPFDData**](IndividualPFDDataDocumentAPI.md#IndividualPFDDataDocumentAPI_deleteIndividualPFDData) | **DELETE** /application-data/pfds/{appId} | Delete the corresponding PFDs of the specified application identifier
[**IndividualPFDDataDocumentAPI_readIndividualPFDData**](IndividualPFDDataDocumentAPI.md#IndividualPFDDataDocumentAPI_readIndividualPFDData) | **GET** /application-data/pfds/{appId} | Retrieve the corresponding PFDs of the specified application identifier


# **IndividualPFDDataDocumentAPI_createOrReplaceIndividualPFDData**
```c
// Create or update the corresponding PFDs for the specified application identifier
//
pfd_data_for_app_ext_t* IndividualPFDDataDocumentAPI_createOrReplaceIndividualPFDData(apiClient_t *apiClient, char * appId, pfd_data_for_app_ext_t * pfd_data_for_app_ext);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**appId** | **char \*** | Indicate the application identifier for the request pfd(s). It shall apply the format of Data type ApplicationId.  | 
**pfd_data_for_app_ext** | **[pfd_data_for_app_ext_t](pfd_data_for_app_ext.md) \*** |  | 

### Return type

[pfd_data_for_app_ext_t](pfd_data_for_app_ext.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualPFDDataDocumentAPI_deleteIndividualPFDData**
```c
// Delete the corresponding PFDs of the specified application identifier
//
void IndividualPFDDataDocumentAPI_deleteIndividualPFDData(apiClient_t *apiClient, char * appId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**appId** | **char \*** | Indicate the application identifier for the request pfd(s). It shall apply the format of Data type ApplicationId.  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualPFDDataDocumentAPI_readIndividualPFDData**
```c
// Retrieve the corresponding PFDs of the specified application identifier
//
pfd_data_for_app_ext_t* IndividualPFDDataDocumentAPI_readIndividualPFDData(apiClient_t *apiClient, char * appId, char * supp_feat);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**appId** | **char \*** | Indicate the application identifier for the request pfd(s). It shall apply the format of Data type ApplicationId.  | 
**supp_feat** | **char \*** | Supported Features | [optional] 

### Return type

[pfd_data_for_app_ext_t](pfd_data_for_app_ext.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

