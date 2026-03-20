# IndividualServiceParameterDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualServiceParameterDataDocumentAPI_createOrReplaceServiceParameterData**](IndividualServiceParameterDataDocumentAPI.md#IndividualServiceParameterDataDocumentAPI_createOrReplaceServiceParameterData) | **PUT** /application-data/serviceParamData/{serviceParamId} | Create or update an individual Service Parameter Data resource
[**IndividualServiceParameterDataDocumentAPI_deleteIndividualServiceParameterData**](IndividualServiceParameterDataDocumentAPI.md#IndividualServiceParameterDataDocumentAPI_deleteIndividualServiceParameterData) | **DELETE** /application-data/serviceParamData/{serviceParamId} | Delete an individual Service Parameter Data resource
[**IndividualServiceParameterDataDocumentAPI_updateIndividualServiceParameterData**](IndividualServiceParameterDataDocumentAPI.md#IndividualServiceParameterDataDocumentAPI_updateIndividualServiceParameterData) | **PATCH** /application-data/serviceParamData/{serviceParamId} | Modify part of the properties of an individual Service Parameter Data resource


# **IndividualServiceParameterDataDocumentAPI_createOrReplaceServiceParameterData**
```c
// Create or update an individual Service Parameter Data resource
//
service_parameter_data_t* IndividualServiceParameterDataDocumentAPI_createOrReplaceServiceParameterData(apiClient_t *apiClient, char * serviceParamId, service_parameter_data_t * service_parameter_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**serviceParamId** | **char \*** | The Identifier of an Individual Service Parameter Data to be created or updated. It shall apply the format of Data type string.  | 
**service_parameter_data** | **[service_parameter_data_t](service_parameter_data.md) \*** |  | 

### Return type

[service_parameter_data_t](service_parameter_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualServiceParameterDataDocumentAPI_deleteIndividualServiceParameterData**
```c
// Delete an individual Service Parameter Data resource
//
void IndividualServiceParameterDataDocumentAPI_deleteIndividualServiceParameterData(apiClient_t *apiClient, char * serviceParamId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**serviceParamId** | **char \*** | The Identifier of an Individual Service Parameter Data to be deleted. It shall apply the format of Data type string.  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualServiceParameterDataDocumentAPI_updateIndividualServiceParameterData**
```c
// Modify part of the properties of an individual Service Parameter Data resource
//
service_parameter_data_t* IndividualServiceParameterDataDocumentAPI_updateIndividualServiceParameterData(apiClient_t *apiClient, char * serviceParamId, service_parameter_data_patch_t * service_parameter_data_patch);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**serviceParamId** | **char \*** | The Identifier of an Individual Service Parameter Data to be updated. It shall apply the format of Data type string.  | 
**service_parameter_data_patch** | **[service_parameter_data_patch_t](service_parameter_data_patch.md) \*** |  | 

### Return type

[service_parameter_data_t](service_parameter_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/merge-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

