# SMFRegistrationDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SMFRegistrationDocumentAPI_createOrUpdateSmfRegistration**](SMFRegistrationDocumentAPI.md#SMFRegistrationDocumentAPI_createOrUpdateSmfRegistration) | **PUT** /subscription-data/{ueId}/context-data/smf-registrations/{pduSessionId} | To create an individual SMF context data of a UE in the UDR
[**SMFRegistrationDocumentAPI_deleteSmfRegistration**](SMFRegistrationDocumentAPI.md#SMFRegistrationDocumentAPI_deleteSmfRegistration) | **DELETE** /subscription-data/{ueId}/context-data/smf-registrations/{pduSessionId} | To remove an individual SMF context data of a UE the UDR
[**SMFRegistrationDocumentAPI_querySmfRegistration**](SMFRegistrationDocumentAPI.md#SMFRegistrationDocumentAPI_querySmfRegistration) | **GET** /subscription-data/{ueId}/context-data/smf-registrations/{pduSessionId} | Retrieves the individual SMF registration of a UE
[**SMFRegistrationDocumentAPI_updateSmfContext**](SMFRegistrationDocumentAPI.md#SMFRegistrationDocumentAPI_updateSmfContext) | **PATCH** /subscription-data/{ueId}/context-data/smf-registrations/{pduSessionId} | To modify the SMF context data of a UE in the UDR


# **SMFRegistrationDocumentAPI_createOrUpdateSmfRegistration**
```c
// To create an individual SMF context data of a UE in the UDR
//
smf_registration_t* SMFRegistrationDocumentAPI_createOrUpdateSmfRegistration(apiClient_t *apiClient, char * ueId, int pduSessionId, smf_registration_t * smf_registration);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**pduSessionId** | **int** | PDU session id | 
**smf_registration** | **[smf_registration_t](smf_registration.md) \*** |  | 

### Return type

[smf_registration_t](smf_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SMFRegistrationDocumentAPI_deleteSmfRegistration**
```c
// To remove an individual SMF context data of a UE the UDR
//
void SMFRegistrationDocumentAPI_deleteSmfRegistration(apiClient_t *apiClient, char * ueId, int pduSessionId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**pduSessionId** | **int** | PDU session id | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SMFRegistrationDocumentAPI_querySmfRegistration**
```c
// Retrieves the individual SMF registration of a UE
//
smf_registration_t* SMFRegistrationDocumentAPI_querySmfRegistration(apiClient_t *apiClient, char * ueId, int pduSessionId, list_t * fields, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**pduSessionId** | **int** | PDU session id | 
**fields** | **[list_t](char.md) \*** | attributes to be retrieved | [optional] 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[smf_registration_t](smf_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SMFRegistrationDocumentAPI_updateSmfContext**
```c
// To modify the SMF context data of a UE in the UDR
//
patch_result_t* SMFRegistrationDocumentAPI_updateSmfContext(apiClient_t *apiClient, char * ueId, int pduSessionId, list_t * patch_item, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**pduSessionId** | **int** | PDU session id | 
**patch_item** | **[list_t](patch_item.md) \*** |  | 
**supported_features** | **char \*** | Features required to be supported by the target NF | [optional] 

### Return type

[patch_result_t](patch_result.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

