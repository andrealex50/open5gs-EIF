# IPSMGWRegistrationDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IPSMGWRegistrationDocumentAPI_createIpSmGwContext**](IPSMGWRegistrationDocumentAPI.md#IPSMGWRegistrationDocumentAPI_createIpSmGwContext) | **PUT** /subscription-data/{ueId}/context-data/ip-sm-gw | Create the IP-SM-GW context data of a UE
[**IPSMGWRegistrationDocumentAPI_deleteIpSmGwContext**](IPSMGWRegistrationDocumentAPI.md#IPSMGWRegistrationDocumentAPI_deleteIpSmGwContext) | **DELETE** /subscription-data/{ueId}/context-data/ip-sm-gw | To remove the IP-SM-GW context data of a UE
[**IPSMGWRegistrationDocumentAPI_modifyIpSmGwContext**](IPSMGWRegistrationDocumentAPI.md#IPSMGWRegistrationDocumentAPI_modifyIpSmGwContext) | **PATCH** /subscription-data/{ueId}/context-data/ip-sm-gw | Modify the IP-SM-GW context data of a UE
[**IPSMGWRegistrationDocumentAPI_queryIpSmGwContext**](IPSMGWRegistrationDocumentAPI.md#IPSMGWRegistrationDocumentAPI_queryIpSmGwContext) | **GET** /subscription-data/{ueId}/context-data/ip-sm-gw | Retrieves the IP-SM-GW context data of a UE


# **IPSMGWRegistrationDocumentAPI_createIpSmGwContext**
```c
// Create the IP-SM-GW context data of a UE
//
void IPSMGWRegistrationDocumentAPI_createIpSmGwContext(apiClient_t *apiClient, char * ueId, ip_sm_gw_registration_t * ip_sm_gw_registration);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**ip_sm_gw_registration** | **[ip_sm_gw_registration_t](ip_sm_gw_registration.md) \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IPSMGWRegistrationDocumentAPI_deleteIpSmGwContext**
```c
// To remove the IP-SM-GW context data of a UE
//
void IPSMGWRegistrationDocumentAPI_deleteIpSmGwContext(apiClient_t *apiClient, char * ueId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IPSMGWRegistrationDocumentAPI_modifyIpSmGwContext**
```c
// Modify the IP-SM-GW context data of a UE
//
void IPSMGWRegistrationDocumentAPI_modifyIpSmGwContext(apiClient_t *apiClient, char * ueId, list_t * patch_item);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**patch_item** | **[list_t](patch_item.md) \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json-patch+json
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IPSMGWRegistrationDocumentAPI_queryIpSmGwContext**
```c
// Retrieves the IP-SM-GW context data of a UE
//
ip_sm_gw_registration_t* IPSMGWRegistrationDocumentAPI_queryIpSmGwContext(apiClient_t *apiClient, char * ueId, list_t * fields, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**fields** | **[list_t](char.md) \*** | attributes to be retrieved | [optional] 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[ip_sm_gw_registration_t](ip_sm_gw_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

