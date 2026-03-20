# RetrieveTheRoamingInformationOfThe5GCEPCDomainsDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RetrieveTheRoamingInformationOfThe5GCEPCDomainsDocumentAPI_queryPeiInformation**](RetrieveTheRoamingInformationOfThe5GCEPCDomainsDocumentAPI.md#RetrieveTheRoamingInformationOfThe5GCEPCDomainsDocumentAPI_queryPeiInformation) | **GET** /subscription-data/{ueId}/context-data/pei-info | Retrieves the PEI Information of the 5GC/EPC domains


# **RetrieveTheRoamingInformationOfThe5GCEPCDomainsDocumentAPI_queryPeiInformation**
```c
// Retrieves the PEI Information of the 5GC/EPC domains
//
pei_update_info_t* RetrieveTheRoamingInformationOfThe5GCEPCDomainsDocumentAPI_queryPeiInformation(apiClient_t *apiClient, char * ueId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 

### Return type

[pei_update_info_t](pei_update_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

