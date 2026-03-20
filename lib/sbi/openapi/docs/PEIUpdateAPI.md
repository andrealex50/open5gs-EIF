# PEIUpdateAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PEIUpdateAPI_peiUpdate**](PEIUpdateAPI.md#PEIUpdateAPI_peiUpdate) | **POST** /{ueId}/registrations/amf-3gpp-access/pei-update | Updates the PEI in the 3GPP access registration context


# **PEIUpdateAPI_peiUpdate**
```c
// Updates the PEI in the 3GPP access registration context
//
void PEIUpdateAPI_peiUpdate(apiClient_t *apiClient, char * ueId, pei_update_info_t * pei_update_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**pei_update_info** | **[pei_update_info_t](pei_update_info.md) \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

