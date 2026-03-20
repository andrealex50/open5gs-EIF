# TriggerPCSCFRestorationAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TriggerPCSCFRestorationAPI_triggerPCSCFRestoration**](TriggerPCSCFRestorationAPI.md#TriggerPCSCFRestorationAPI_triggerPCSCFRestoration) | **POST** /restore-pcscf | Trigger the Restoration of the P-CSCF


# **TriggerPCSCFRestorationAPI_triggerPCSCFRestoration**
```c
// Trigger the Restoration of the P-CSCF
//
void TriggerPCSCFRestorationAPI_triggerPCSCFRestoration(apiClient_t *apiClient, trigger_request_t * trigger_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**trigger_request** | **[trigger_request_t](trigger_request.md) \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

