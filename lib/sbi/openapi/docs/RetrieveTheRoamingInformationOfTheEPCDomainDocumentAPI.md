# RetrieveTheRoamingInformationOfTheEPCDomainDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RetrieveTheRoamingInformationOfTheEPCDomainDocumentAPI_queryRoamingInformation**](RetrieveTheRoamingInformationOfTheEPCDomainDocumentAPI.md#RetrieveTheRoamingInformationOfTheEPCDomainDocumentAPI_queryRoamingInformation) | **GET** /subscription-data/{ueId}/context-data/roaming-information | Retrieves the Roaming Information of the EPC domain


# **RetrieveTheRoamingInformationOfTheEPCDomainDocumentAPI_queryRoamingInformation**
```c
// Retrieves the Roaming Information of the EPC domain
//
roaming_info_update_t* RetrieveTheRoamingInformationOfTheEPCDomainDocumentAPI_queryRoamingInformation(apiClient_t *apiClient, char * ueId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 

### Return type

[roaming_info_update_t](roaming_info_update.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

