# UsageMonitoringInformationDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UsageMonitoringInformationDocumentAPI_createUsageMonitoringResource**](UsageMonitoringInformationDocumentAPI.md#UsageMonitoringInformationDocumentAPI_createUsageMonitoringResource) | **PUT** /policy-data/ues/{ueId}/sm-data/{usageMonId} | Create a usage monitoring resource
[**UsageMonitoringInformationDocumentAPI_deleteUsageMonitoringInformation**](UsageMonitoringInformationDocumentAPI.md#UsageMonitoringInformationDocumentAPI_deleteUsageMonitoringInformation) | **DELETE** /policy-data/ues/{ueId}/sm-data/{usageMonId} | Delete a usage monitoring resource
[**UsageMonitoringInformationDocumentAPI_readUsageMonitoringInformation**](UsageMonitoringInformationDocumentAPI.md#UsageMonitoringInformationDocumentAPI_readUsageMonitoringInformation) | **GET** /policy-data/ues/{ueId}/sm-data/{usageMonId} | Retrieve a usage monitoring resource


# **UsageMonitoringInformationDocumentAPI_createUsageMonitoringResource**
```c
// Create a usage monitoring resource
//
usage_mon_data_t* UsageMonitoringInformationDocumentAPI_createUsageMonitoringResource(apiClient_t *apiClient, char * ueId, char * usageMonId, usage_mon_data_t * usage_mon_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**usageMonId** | **char \*** |  | 
**usage_mon_data** | **[usage_mon_data_t](usage_mon_data.md) \*** |  | 

### Return type

[usage_mon_data_t](usage_mon_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsageMonitoringInformationDocumentAPI_deleteUsageMonitoringInformation**
```c
// Delete a usage monitoring resource
//
void UsageMonitoringInformationDocumentAPI_deleteUsageMonitoringInformation(apiClient_t *apiClient, char * ueId, char * usageMonId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**usageMonId** | **char \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UsageMonitoringInformationDocumentAPI_readUsageMonitoringInformation**
```c
// Retrieve a usage monitoring resource
//
usage_mon_data_t* UsageMonitoringInformationDocumentAPI_readUsageMonitoringInformation(apiClient_t *apiClient, char * ueId, char * usageMonId, char * supp_feat);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**usageMonId** | **char \*** |  | 
**supp_feat** | **char \*** | Supported Features | [optional] 

### Return type

[usage_mon_data_t](usage_mon_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

