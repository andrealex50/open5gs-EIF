# TriggerSORInfoUpdateAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TriggerSORInfoUpdateAPI_updateSORInfo**](TriggerSORInfoUpdateAPI.md#TriggerSORInfoUpdateAPI_updateSORInfo) | **POST** /{supi}/am-data/update-sor | Nudm_Sdm custom operation to trigger SOR info update


# **TriggerSORInfoUpdateAPI_updateSORInfo**
```c
// Nudm_Sdm custom operation to trigger SOR info update
//
sor_info_t* TriggerSORInfoUpdateAPI_updateSORInfo(apiClient_t *apiClient, char * supi, sor_update_info_t * sor_update_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supi** | **char \*** | Identifier of the UE | 
**sor_update_info** | **[sor_update_info_t](sor_update_info.md) \*** |  | [optional] 

### Return type

[sor_info_t](sor_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

