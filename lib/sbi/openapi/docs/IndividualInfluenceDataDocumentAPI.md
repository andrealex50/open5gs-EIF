# IndividualInfluenceDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualInfluenceDataDocumentAPI_createOrReplaceIndividualInfluenceData**](IndividualInfluenceDataDocumentAPI.md#IndividualInfluenceDataDocumentAPI_createOrReplaceIndividualInfluenceData) | **PUT** /application-data/influenceData/{influenceId} | Create or update an individual Influence Data resource
[**IndividualInfluenceDataDocumentAPI_deleteIndividualInfluenceData**](IndividualInfluenceDataDocumentAPI.md#IndividualInfluenceDataDocumentAPI_deleteIndividualInfluenceData) | **DELETE** /application-data/influenceData/{influenceId} | Delete an individual Influence Data resource
[**IndividualInfluenceDataDocumentAPI_updateIndividualInfluenceData**](IndividualInfluenceDataDocumentAPI.md#IndividualInfluenceDataDocumentAPI_updateIndividualInfluenceData) | **PATCH** /application-data/influenceData/{influenceId} | Modify part of the properties of an individual Influence Data resource


# **IndividualInfluenceDataDocumentAPI_createOrReplaceIndividualInfluenceData**
```c
// Create or update an individual Influence Data resource
//
traffic_influ_data_t* IndividualInfluenceDataDocumentAPI_createOrReplaceIndividualInfluenceData(apiClient_t *apiClient, char * influenceId, traffic_influ_data_t * traffic_influ_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**influenceId** | **char \*** | The Identifier of an Individual Influence Data to be created or updated. It shall apply the format of Data type string.  | 
**traffic_influ_data** | **[traffic_influ_data_t](traffic_influ_data.md) \*** |  | 

### Return type

[traffic_influ_data_t](traffic_influ_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualInfluenceDataDocumentAPI_deleteIndividualInfluenceData**
```c
// Delete an individual Influence Data resource
//
void IndividualInfluenceDataDocumentAPI_deleteIndividualInfluenceData(apiClient_t *apiClient, char * influenceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**influenceId** | **char \*** | The Identifier of an Individual Influence Data to be deleted. It shall apply the format of Data type string.  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualInfluenceDataDocumentAPI_updateIndividualInfluenceData**
```c
// Modify part of the properties of an individual Influence Data resource
//
traffic_influ_data_t* IndividualInfluenceDataDocumentAPI_updateIndividualInfluenceData(apiClient_t *apiClient, char * influenceId, traffic_influ_data_patch_t * traffic_influ_data_patch);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**influenceId** | **char \*** | The Identifier of an Individual Influence Data to be updated. It shall apply the format of Data type string.  | 
**traffic_influ_data_patch** | **[traffic_influ_data_patch_t](traffic_influ_data_patch.md) \*** |  | 

### Return type

[traffic_influ_data_t](traffic_influ_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/merge-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

