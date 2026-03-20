# RoamingInformationUpdateAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**RoamingInformationUpdateAPI_updateRoamingInformation**](RoamingInformationUpdateAPI.md#RoamingInformationUpdateAPI_updateRoamingInformation) | **POST** /{ueId}/registrations/amf-3gpp-access/roaming-info-update | Update the Roaming Information


# **RoamingInformationUpdateAPI_updateRoamingInformation**
```c
// Update the Roaming Information
//
roaming_info_update_t* RoamingInformationUpdateAPI_updateRoamingInformation(apiClient_t *apiClient, char * ueId, roaming_info_update_t * roaming_info_update);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**roaming_info_update** | **[roaming_info_update_t](roaming_info_update.md) \*** |  | 

### Return type

[roaming_info_update_t](roaming_info_update.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

