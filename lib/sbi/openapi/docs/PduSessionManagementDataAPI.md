# PduSessionManagementDataAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PduSessionManagementDataAPI_createOrReplaceSessionManagementData**](PduSessionManagementDataAPI.md#PduSessionManagementDataAPI_createOrReplaceSessionManagementData) | **PUT** /exposure-data/{ueId}/session-management-data/{pduSessionId} | Creates and updates the session management data for a UE and for an individual PDU session
[**PduSessionManagementDataAPI_deleteSessionManagementData**](PduSessionManagementDataAPI.md#PduSessionManagementDataAPI_deleteSessionManagementData) | **DELETE** /exposure-data/{ueId}/session-management-data/{pduSessionId} | Deletes the session management data for a UE and for an individual PDU session
[**PduSessionManagementDataAPI_querySessionManagementData**](PduSessionManagementDataAPI.md#PduSessionManagementDataAPI_querySessionManagementData) | **GET** /exposure-data/{ueId}/session-management-data/{pduSessionId} | Retrieves the session management data for a UE and for an individual PDU session


# **PduSessionManagementDataAPI_createOrReplaceSessionManagementData**
```c
// Creates and updates the session management data for a UE and for an individual PDU session
//
pdu_session_management_data_t* PduSessionManagementDataAPI_createOrReplaceSessionManagementData(apiClient_t *apiClient, char * ueId, int pduSessionId, pdu_session_management_data_t * pdu_session_management_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**pduSessionId** | **int** | PDU session id | 
**pdu_session_management_data** | **[pdu_session_management_data_t](pdu_session_management_data.md) \*** |  | 

### Return type

[pdu_session_management_data_t](pdu_session_management_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PduSessionManagementDataAPI_deleteSessionManagementData**
```c
// Deletes the session management data for a UE and for an individual PDU session
//
void PduSessionManagementDataAPI_deleteSessionManagementData(apiClient_t *apiClient, char * ueId, int pduSessionId);
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
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **PduSessionManagementDataAPI_querySessionManagementData**
```c
// Retrieves the session management data for a UE and for an individual PDU session
//
pdu_session_management_data_t* PduSessionManagementDataAPI_querySessionManagementData(apiClient_t *apiClient, char * ueId, int pduSessionId, char * ipv4_addr, char * ipv6_prefix, char * dnn, list_t * fields, char * supp_feat);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**pduSessionId** | **int** | PDU session id | 
**ipv4_addr** | **char \*** | IPv4 Address of the UE | [optional] 
**ipv6_prefix** | **char \*** | IPv6 Address Prefix of the UE | [optional] 
**dnn** | **char \*** | DNN of the UE | [optional] 
**fields** | **[list_t](char.md) \*** | attributes to be retrieved | [optional] 
**supp_feat** | **char \*** | Supported Features | [optional] 

### Return type

[pdu_session_management_data_t](pdu_session_management_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

