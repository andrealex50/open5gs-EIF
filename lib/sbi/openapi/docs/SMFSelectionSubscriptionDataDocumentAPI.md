# SMFSelectionSubscriptionDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SMFSelectionSubscriptionDataDocumentAPI_querySmfSelectData**](SMFSelectionSubscriptionDataDocumentAPI.md#SMFSelectionSubscriptionDataDocumentAPI_querySmfSelectData) | **GET** /subscription-data/{ueId}/{servingPlmnId}/provisioned-data/smf-selection-subscription-data | Retrieves the SMF selection subscription data of a UE


# **SMFSelectionSubscriptionDataDocumentAPI_querySmfSelectData**
```c
// Retrieves the SMF selection subscription data of a UE
//
smf_selection_subscription_data_t* SMFSelectionSubscriptionDataDocumentAPI_querySmfSelectData(apiClient_t *apiClient, char * ueId, char * servingPlmnId, list_t * fields, char * supported_features, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**servingPlmnId** | **char \*** | PLMN ID | 
**fields** | **[list_t](char.md) \*** | attributes to be retrieved | [optional] 
**supported_features** | **char \*** | Supported Features | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[smf_selection_subscription_data_t](smf_selection_subscription_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

