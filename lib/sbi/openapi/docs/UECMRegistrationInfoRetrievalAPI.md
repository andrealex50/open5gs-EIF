# UECMRegistrationInfoRetrievalAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UECMRegistrationInfoRetrievalAPI_getRegistrations**](UECMRegistrationInfoRetrievalAPI.md#UECMRegistrationInfoRetrievalAPI_getRegistrations) | **GET** /{ueId}/registrations | retrieve UE registration data sets


# **UECMRegistrationInfoRetrievalAPI_getRegistrations**
```c
// retrieve UE registration data sets
//
registration_data_sets_t* UECMRegistrationInfoRetrievalAPI_getRegistrations(apiClient_t *apiClient, char * ueId, set_t * registration_dataset_names, char * supported_features, snssai_t * single_nssai, char * dnn);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**registration_dataset_names** | **[set_t](registration_data_set_name.md) \*** | List of UECM registration dataset names | 
**supported_features** | **char \*** |  | [optional] 
**single_nssai** | **[snssai_t](.md) \*** |  | [optional] 
**dnn** | **char \*** |  | [optional] 

### Return type

[registration_data_sets_t](registration_data_sets.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

