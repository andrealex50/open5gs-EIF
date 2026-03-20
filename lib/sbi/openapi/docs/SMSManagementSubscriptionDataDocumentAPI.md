# SMSManagementSubscriptionDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SMSManagementSubscriptionDataDocumentAPI_querySmsMngData**](SMSManagementSubscriptionDataDocumentAPI.md#SMSManagementSubscriptionDataDocumentAPI_querySmsMngData) | **GET** /subscription-data/{ueId}/{servingPlmnId}/provisioned-data/sms-mng-data | Retrieves the SMS management subscription data of a UE


# **SMSManagementSubscriptionDataDocumentAPI_querySmsMngData**
```c
// Retrieves the SMS management subscription data of a UE
//
sms_management_subscription_data_t* SMSManagementSubscriptionDataDocumentAPI_querySmsMngData(apiClient_t *apiClient, char * ueId, char * servingPlmnId, char * supported_features, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**servingPlmnId** | **char \*** | PLMN ID | 
**supported_features** | **char \*** | Supported Features | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[sms_management_subscription_data_t](sms_management_subscription_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

