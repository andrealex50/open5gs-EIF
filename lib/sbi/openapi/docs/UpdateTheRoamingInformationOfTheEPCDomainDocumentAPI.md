# UpdateTheRoamingInformationOfTheEPCDomainDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UpdateTheRoamingInformationOfTheEPCDomainDocumentAPI_updateRoamingInformation**](UpdateTheRoamingInformationOfTheEPCDomainDocumentAPI.md#UpdateTheRoamingInformationOfTheEPCDomainDocumentAPI_updateRoamingInformation) | **PUT** /subscription-data/{ueId}/context-data/roaming-information | Update the Roaming Information of the EPC domain


# **UpdateTheRoamingInformationOfTheEPCDomainDocumentAPI_updateRoamingInformation**
```c
// Update the Roaming Information of the EPC domain
//
roaming_info_update_t* UpdateTheRoamingInformationOfTheEPCDomainDocumentAPI_updateRoamingInformation(apiClient_t *apiClient, char * ueId, roaming_info_update_t * roaming_info_update);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**roaming_info_update** | **[roaming_info_update_t](roaming_info_update.md) \*** |  | 

### Return type

[roaming_info_update_t](roaming_info_update.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

