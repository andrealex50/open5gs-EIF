# LCSBroadcastAssistanceDataTypesRetrievalAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**LCSBroadcastAssistanceDataTypesRetrievalAPI_getLcsBcaData**](LCSBroadcastAssistanceDataTypesRetrievalAPI.md#LCSBroadcastAssistanceDataTypesRetrievalAPI_getLcsBcaData) | **GET** /{supi}/lcs-bca-data | retrieve a UE&#39;s LCS Broadcast Assistance Data Types Subscription Data


# **LCSBroadcastAssistanceDataTypesRetrievalAPI_getLcsBcaData**
```c
// retrieve a UE's LCS Broadcast Assistance Data Types Subscription Data
//
lcs_broadcast_assistance_types_data_t* LCSBroadcastAssistanceDataTypesRetrievalAPI_getLcsBcaData(apiClient_t *apiClient, char * supi, char * supported_features, plmn_id_t * plmn_id, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supi** | **char \*** | Identifier of the UE | 
**supported_features** | **char \*** | Supported Features | [optional] 
**plmn_id** | **[plmn_id_t](.md) \*** |  | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[lcs_broadcast_assistance_types_data_t](lcs_broadcast_assistance_types_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

