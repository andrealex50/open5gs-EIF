# UpdateThePEIInformationOfThe5GCEPCDomainsDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UpdateThePEIInformationOfThe5GCEPCDomainsDocumentAPI_createOrUpdatePeiInformation**](UpdateThePEIInformationOfThe5GCEPCDomainsDocumentAPI.md#UpdateThePEIInformationOfThe5GCEPCDomainsDocumentAPI_createOrUpdatePeiInformation) | **PUT** /subscription-data/{ueId}/context-data/pei-info | Update the PEI Information of the 5GC/EPC domains


# **UpdateThePEIInformationOfThe5GCEPCDomainsDocumentAPI_createOrUpdatePeiInformation**
```c
// Update the PEI Information of the 5GC/EPC domains
//
pei_update_info_t* UpdateThePEIInformationOfThe5GCEPCDomainsDocumentAPI_createOrUpdatePeiInformation(apiClient_t *apiClient, char * ueId, pei_update_info_t * pei_update_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**pei_update_info** | **[pei_update_info_t](pei_update_info.md) \*** |  | 

### Return type

[pei_update_info_t](pei_update_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

