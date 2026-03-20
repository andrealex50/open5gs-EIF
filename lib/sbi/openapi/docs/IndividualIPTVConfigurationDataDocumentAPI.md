# IndividualIPTVConfigurationDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualIPTVConfigurationDataDocumentAPI_createOrReplaceIndividualIPTVConfigurationData**](IndividualIPTVConfigurationDataDocumentAPI.md#IndividualIPTVConfigurationDataDocumentAPI_createOrReplaceIndividualIPTVConfigurationData) | **PUT** /application-data/iptvConfigData/{configurationId} | Create or update an individual IPTV configuration resource
[**IndividualIPTVConfigurationDataDocumentAPI_deleteIndividualIPTVConfigurationData**](IndividualIPTVConfigurationDataDocumentAPI.md#IndividualIPTVConfigurationDataDocumentAPI_deleteIndividualIPTVConfigurationData) | **DELETE** /application-data/iptvConfigData/{configurationId} | Delete an individual IPTV configuration resource
[**IndividualIPTVConfigurationDataDocumentAPI_partialReplaceIndividualIPTVConfigurationData**](IndividualIPTVConfigurationDataDocumentAPI.md#IndividualIPTVConfigurationDataDocumentAPI_partialReplaceIndividualIPTVConfigurationData) | **PATCH** /application-data/iptvConfigData/{configurationId} | Partial update an individual IPTV configuration resource


# **IndividualIPTVConfigurationDataDocumentAPI_createOrReplaceIndividualIPTVConfigurationData**
```c
// Create or update an individual IPTV configuration resource
//
iptv_config_data_t* IndividualIPTVConfigurationDataDocumentAPI_createOrReplaceIndividualIPTVConfigurationData(apiClient_t *apiClient, char * configurationId, iptv_config_data_t * iptv_config_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**configurationId** | **char \*** | The Identifier of an Individual IPTV Configuration Data to be created or updated. It shall apply the format of Data type string.  | 
**iptv_config_data** | **[iptv_config_data_t](iptv_config_data.md) \*** |  | 

### Return type

[iptv_config_data_t](iptv_config_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualIPTVConfigurationDataDocumentAPI_deleteIndividualIPTVConfigurationData**
```c
// Delete an individual IPTV configuration resource
//
void IndividualIPTVConfigurationDataDocumentAPI_deleteIndividualIPTVConfigurationData(apiClient_t *apiClient, char * configurationId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**configurationId** | **char \*** | The Identifier of an Individual IPTV Configuration to be deleted. It shall apply the format of Data type string.  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualIPTVConfigurationDataDocumentAPI_partialReplaceIndividualIPTVConfigurationData**
```c
// Partial update an individual IPTV configuration resource
//
iptv_config_data_t* IndividualIPTVConfigurationDataDocumentAPI_partialReplaceIndividualIPTVConfigurationData(apiClient_t *apiClient, char * configurationId, iptv_config_data_patch_t * iptv_config_data_patch);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**configurationId** | **char \*** | The Identifier of an Individual IPTV Configuration Data to be updated. It shall apply the format of Data type string.  | 
**iptv_config_data_patch** | **[iptv_config_data_patch_t](iptv_config_data_patch.md) \*** |  | 

### Return type

[iptv_config_data_t](iptv_config_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/merge-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

