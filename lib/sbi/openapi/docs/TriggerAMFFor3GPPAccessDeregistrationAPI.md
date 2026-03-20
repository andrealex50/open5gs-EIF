# TriggerAMFFor3GPPAccessDeregistrationAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TriggerAMFFor3GPPAccessDeregistrationAPI_deregAMF**](TriggerAMFFor3GPPAccessDeregistrationAPI.md#TriggerAMFFor3GPPAccessDeregistrationAPI_deregAMF) | **POST** /{ueId}/registrations/amf-3gpp-access/dereg-amf | trigger AMF for 3GPP access deregistration


# **TriggerAMFFor3GPPAccessDeregistrationAPI_deregAMF**
```c
// trigger AMF for 3GPP access deregistration
//
void TriggerAMFFor3GPPAccessDeregistrationAPI_deregAMF(apiClient_t *apiClient, char * ueId, amf_dereg_info_t * amf_dereg_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**amf_dereg_info** | **[amf_dereg_info_t](amf_dereg_info.md) \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

