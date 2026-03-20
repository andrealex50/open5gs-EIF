# AccessAndMobilityDataAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**AccessAndMobilityDataAPI_createOrReplaceAccessAndMobilityData**](AccessAndMobilityDataAPI.md#AccessAndMobilityDataAPI_createOrReplaceAccessAndMobilityData) | **PUT** /exposure-data/{ueId}/access-and-mobility-data | Creates and updates the access and mobility exposure data for a UE
[**AccessAndMobilityDataAPI_deleteAccessAndMobilityData**](AccessAndMobilityDataAPI.md#AccessAndMobilityDataAPI_deleteAccessAndMobilityData) | **DELETE** /exposure-data/{ueId}/access-and-mobility-data | Deletes the access and mobility exposure data for a UE
[**AccessAndMobilityDataAPI_queryAccessAndMobilityData**](AccessAndMobilityDataAPI.md#AccessAndMobilityDataAPI_queryAccessAndMobilityData) | **GET** /exposure-data/{ueId}/access-and-mobility-data | Retrieves the access and mobility exposure data for a UE
[**AccessAndMobilityDataAPI_updateAccessAndMobilityData**](AccessAndMobilityDataAPI.md#AccessAndMobilityDataAPI_updateAccessAndMobilityData) | **PATCH** /exposure-data/{ueId}/access-and-mobility-data | Updates the access and mobility exposure data for a UE


# **AccessAndMobilityDataAPI_createOrReplaceAccessAndMobilityData**
```c
// Creates and updates the access and mobility exposure data for a UE
//
access_and_mobility_data_t* AccessAndMobilityDataAPI_createOrReplaceAccessAndMobilityData(apiClient_t *apiClient, char * ueId, access_and_mobility_data_t * access_and_mobility_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**access_and_mobility_data** | **[access_and_mobility_data_t](access_and_mobility_data.md) \*** |  | 

### Return type

[access_and_mobility_data_t](access_and_mobility_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccessAndMobilityDataAPI_deleteAccessAndMobilityData**
```c
// Deletes the access and mobility exposure data for a UE
//
void AccessAndMobilityDataAPI_deleteAccessAndMobilityData(apiClient_t *apiClient, char * ueId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccessAndMobilityDataAPI_queryAccessAndMobilityData**
```c
// Retrieves the access and mobility exposure data for a UE
//
access_and_mobility_data_t* AccessAndMobilityDataAPI_queryAccessAndMobilityData(apiClient_t *apiClient, char * ueId, char * supp_feat);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**supp_feat** | **char \*** | Supported Features | [optional] 

### Return type

[access_and_mobility_data_t](access_and_mobility_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **AccessAndMobilityDataAPI_updateAccessAndMobilityData**
```c
// Updates the access and mobility exposure data for a UE
//
void AccessAndMobilityDataAPI_updateAccessAndMobilityData(apiClient_t *apiClient, char * ueId, access_and_mobility_data_t * access_and_mobility_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**access_and_mobility_data** | **[access_and_mobility_data_t](access_and_mobility_data.md) \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/merge-patch+json
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

