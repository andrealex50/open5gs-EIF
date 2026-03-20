# IndividualBdtDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualBdtDataDocumentAPI_createIndividualBdtData**](IndividualBdtDataDocumentAPI.md#IndividualBdtDataDocumentAPI_createIndividualBdtData) | **PUT** /policy-data/bdt-data/{bdtReferenceId} | Creates an BDT data resource associated with an BDT reference Id
[**IndividualBdtDataDocumentAPI_deleteIndividualBdtData**](IndividualBdtDataDocumentAPI.md#IndividualBdtDataDocumentAPI_deleteIndividualBdtData) | **DELETE** /policy-data/bdt-data/{bdtReferenceId} | Deletes an BDT data resource associated with an BDT reference Id
[**IndividualBdtDataDocumentAPI_readIndividualBdtData**](IndividualBdtDataDocumentAPI.md#IndividualBdtDataDocumentAPI_readIndividualBdtData) | **GET** /policy-data/bdt-data/{bdtReferenceId} | Retrieves the BDT data information associated with a BDT reference Id
[**IndividualBdtDataDocumentAPI_updateIndividualBdtData**](IndividualBdtDataDocumentAPI.md#IndividualBdtDataDocumentAPI_updateIndividualBdtData) | **PATCH** /policy-data/bdt-data/{bdtReferenceId} | Modifies an BDT data resource associated with an BDT reference Id


# **IndividualBdtDataDocumentAPI_createIndividualBdtData**
```c
// Creates an BDT data resource associated with an BDT reference Id
//
bdt_data_t* IndividualBdtDataDocumentAPI_createIndividualBdtData(apiClient_t *apiClient, char * bdtReferenceId, bdt_data_t * bdt_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**bdtReferenceId** | **char \*** |  | 
**bdt_data** | **[bdt_data_t](bdt_data.md) \*** |  | 

### Return type

[bdt_data_t](bdt_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualBdtDataDocumentAPI_deleteIndividualBdtData**
```c
// Deletes an BDT data resource associated with an BDT reference Id
//
void IndividualBdtDataDocumentAPI_deleteIndividualBdtData(apiClient_t *apiClient, char * bdtReferenceId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**bdtReferenceId** | **char \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualBdtDataDocumentAPI_readIndividualBdtData**
```c
// Retrieves the BDT data information associated with a BDT reference Id
//
bdt_data_t* IndividualBdtDataDocumentAPI_readIndividualBdtData(apiClient_t *apiClient, char * bdtReferenceId, char * supp_feat);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**bdtReferenceId** | **char \*** |  | 
**supp_feat** | **char \*** | Supported Features | [optional] 

### Return type

[bdt_data_t](bdt_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualBdtDataDocumentAPI_updateIndividualBdtData**
```c
// Modifies an BDT data resource associated with an BDT reference Id
//
bdt_data_t* IndividualBdtDataDocumentAPI_updateIndividualBdtData(apiClient_t *apiClient, char * bdtReferenceId, bdt_data_patch_t * bdt_data_patch);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**bdtReferenceId** | **char \*** |  | 
**bdt_data_patch** | **[bdt_data_patch_t](bdt_data_patch.md) \*** |  | 

### Return type

[bdt_data_t](bdt_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/merge-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

