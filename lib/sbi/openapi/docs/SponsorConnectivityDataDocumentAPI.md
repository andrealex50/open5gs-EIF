# SponsorConnectivityDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SponsorConnectivityDataDocumentAPI_readSponsorConnectivityData**](SponsorConnectivityDataDocumentAPI.md#SponsorConnectivityDataDocumentAPI_readSponsorConnectivityData) | **GET** /policy-data/sponsor-connectivity-data/{sponsorId} | Retrieves the sponsored connectivity information for a given sponsorId


# **SponsorConnectivityDataDocumentAPI_readSponsorConnectivityData**
```c
// Retrieves the sponsored connectivity information for a given sponsorId
//
sponsor_connectivity_data_t* SponsorConnectivityDataDocumentAPI_readSponsorConnectivityData(apiClient_t *apiClient, char * sponsorId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sponsorId** | **char \*** |  | 

### Return type

[sponsor_connectivity_data_t](sponsor_connectivity_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

