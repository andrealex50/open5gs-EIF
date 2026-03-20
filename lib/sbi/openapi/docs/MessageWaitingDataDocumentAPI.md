# MessageWaitingDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MessageWaitingDataDocumentAPI_createMessageWaitingData**](MessageWaitingDataDocumentAPI.md#MessageWaitingDataDocumentAPI_createMessageWaitingData) | **PUT** /subscription-data/{ueId}/context-data/mwd | Create the Message Waiting Data of the UE
[**MessageWaitingDataDocumentAPI_deleteMessageWaitingData**](MessageWaitingDataDocumentAPI.md#MessageWaitingDataDocumentAPI_deleteMessageWaitingData) | **DELETE** /subscription-data/{ueId}/context-data/mwd | To remove the Message Waiting Data of the UE
[**MessageWaitingDataDocumentAPI_modifyMessageWaitingData**](MessageWaitingDataDocumentAPI.md#MessageWaitingDataDocumentAPI_modifyMessageWaitingData) | **PATCH** /subscription-data/{ueId}/context-data/mwd | Modify the Message Waiting Data of the UE
[**MessageWaitingDataDocumentAPI_queryMessageWaitingData**](MessageWaitingDataDocumentAPI.md#MessageWaitingDataDocumentAPI_queryMessageWaitingData) | **GET** /subscription-data/{ueId}/context-data/mwd | Retrieves the Message Waiting Data of the UE


# **MessageWaitingDataDocumentAPI_createMessageWaitingData**
```c
// Create the Message Waiting Data of the UE
//
message_waiting_data_t* MessageWaitingDataDocumentAPI_createMessageWaitingData(apiClient_t *apiClient, char * ueId, message_waiting_data_t * message_waiting_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**message_waiting_data** | **[message_waiting_data_t](message_waiting_data.md) \*** |  | 

### Return type

[message_waiting_data_t](message_waiting_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **MessageWaitingDataDocumentAPI_deleteMessageWaitingData**
```c
// To remove the Message Waiting Data of the UE
//
void MessageWaitingDataDocumentAPI_deleteMessageWaitingData(apiClient_t *apiClient, char * ueId);
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

# **MessageWaitingDataDocumentAPI_modifyMessageWaitingData**
```c
// Modify the Message Waiting Data of the UE
//
void MessageWaitingDataDocumentAPI_modifyMessageWaitingData(apiClient_t *apiClient, char * ueId, list_t * patch_item);
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

# **MessageWaitingDataDocumentAPI_queryMessageWaitingData**
```c
// Retrieves the Message Waiting Data of the UE
//
message_waiting_data_t* MessageWaitingDataDocumentAPI_queryMessageWaitingData(apiClient_t *apiClient, char * ueId, list_t * fields, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**fields** | **[list_t](char.md) \*** | attributes to be retrieved | [optional] 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[message_waiting_data_t](message_waiting_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

