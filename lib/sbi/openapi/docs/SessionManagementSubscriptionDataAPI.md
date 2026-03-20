# SessionManagementSubscriptionDataAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SessionManagementSubscriptionDataAPI_querySmData**](SessionManagementSubscriptionDataAPI.md#SessionManagementSubscriptionDataAPI_querySmData) | **GET** /subscription-data/{ueId}/{servingPlmnId}/provisioned-data/sm-data | Retrieves the Session Management subscription data of a UE


# **SessionManagementSubscriptionDataAPI_querySmData**
```c
// Retrieves the Session Management subscription data of a UE
//
sm_subs_data_t* SessionManagementSubscriptionDataAPI_querySmData(apiClient_t *apiClient, char * ueId, char * servingPlmnId, snssai_t * single_nssai, char * dnn, list_t * fields, char * supported_features, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**servingPlmnId** | **char \*** | PLMN ID | 
**single_nssai** | **[snssai_t](.md) \*** | single NSSAI | [optional] 
**dnn** | **char \*** | DNN | [optional] 
**fields** | **[list_t](char.md) \*** | attributes to be retrieved | [optional] 
**supported_features** | **char \*** | Supported Features | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[sm_subs_data_t](sm_subs_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

