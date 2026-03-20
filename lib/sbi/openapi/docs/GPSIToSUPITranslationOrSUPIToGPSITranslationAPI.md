# GPSIToSUPITranslationOrSUPIToGPSITranslationAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GPSIToSUPITranslationOrSUPIToGPSITranslationAPI_getSupiOrGpsi**](GPSIToSUPITranslationOrSUPIToGPSITranslationAPI.md#GPSIToSUPITranslationOrSUPIToGPSITranslationAPI_getSupiOrGpsi) | **GET** /{ueId}/id-translation-result | retrieve a UE&#39;s SUPI or GPSI


# **GPSIToSUPITranslationOrSUPIToGPSITranslationAPI_getSupiOrGpsi**
```c
// retrieve a UE's SUPI or GPSI
//
id_translation_result_t* GPSIToSUPITranslationOrSUPIToGPSITranslationAPI_getSupiOrGpsi(apiClient_t *apiClient, char * ueId, char * supported_features, char * af_id, app_port_id_t * app_port_id, char * af_service_id, char * mtc_provider_info, gpsi_type_e requested_gpsi_type, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**supported_features** | **char \*** | Supported Features | [optional] 
**af_id** | **char \*** | AF identifier | [optional] 
**app_port_id** | **[app_port_id_t](.md) \*** | Application port identifier | [optional] 
**af_service_id** | **char \*** | AF Service Identifier | [optional] 
**mtc_provider_info** | **char \*** | MTC Provider Information | [optional] 
**requested_gpsi_type** | **gpsi_type_e** | Requested GPSI Type | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[id_translation_result_t](id_translation_result.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

