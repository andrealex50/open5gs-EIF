# PCSCFRestorationIndicationAPI

All URIs are relative to *https://example.com/npcf-policyauthorization/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PCSCFRestorationIndicationAPI_pcscfRestoration**](PCSCFRestorationIndicationAPI.md#PCSCFRestorationIndicationAPI_pcscfRestoration) | **POST** /app-sessions/pcscf-restoration | Indicates P-CSCF restoration and does not create an Individual Application Session Context


# **PCSCFRestorationIndicationAPI_pcscfRestoration**
```c
// Indicates P-CSCF restoration and does not create an Individual Application Session Context
//
void PCSCFRestorationIndicationAPI_pcscfRestoration(apiClient_t *apiClient, pcscf_restoration_request_data_t * pcscf_restoration_request_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pcscf_restoration_request_data** | **[pcscf_restoration_request_data_t](pcscf_restoration_request_data.md) \*** | PCSCF Restoration Indication. | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

