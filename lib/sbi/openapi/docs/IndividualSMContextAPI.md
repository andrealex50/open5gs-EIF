# IndividualSMContextAPI

All URIs are relative to *https://example.com/nsmf-pdusession/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualSMContextAPI_releaseSmContext**](IndividualSMContextAPI.md#IndividualSMContextAPI_releaseSmContext) | **POST** /sm-contexts/{smContextRef}/release | Release SM Context
[**IndividualSMContextAPI_retrieveSmContext**](IndividualSMContextAPI.md#IndividualSMContextAPI_retrieveSmContext) | **POST** /sm-contexts/{smContextRef}/retrieve | Retrieve SM Context
[**IndividualSMContextAPI_sendMoData**](IndividualSMContextAPI.md#IndividualSMContextAPI_sendMoData) | **POST** /sm-contexts/{smContextRef}/send-mo-data | Send MO Data
[**IndividualSMContextAPI_updateSmContext**](IndividualSMContextAPI.md#IndividualSMContextAPI_updateSmContext) | **POST** /sm-contexts/{smContextRef}/modify | Update SM Context


# **IndividualSMContextAPI_releaseSmContext**
```c
// Release SM Context
//
sm_context_released_data_t* IndividualSMContextAPI_releaseSmContext(apiClient_t *apiClient, char * smContextRef, sm_context_release_data_t * sm_context_release_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**smContextRef** | **char \*** | SM context reference | 
**sm_context_release_data** | **[sm_context_release_data_t](sm_context_release_data.md) \*** | representation of the data to be sent to the SMF when releasing the SM context | [optional] 

### Return type

[sm_context_released_data_t](sm_context_released_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json, multipart/related
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualSMContextAPI_retrieveSmContext**
```c
// Retrieve SM Context
//
sm_context_retrieved_data_t* IndividualSMContextAPI_retrieveSmContext(apiClient_t *apiClient, char * smContextRef, sm_context_retrieve_data_t * sm_context_retrieve_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**smContextRef** | **char \*** | SM context reference | 
**sm_context_retrieve_data** | **[sm_context_retrieve_data_t](sm_context_retrieve_data.md) \*** | parameters used to retrieve the SM context | [optional] 

### Return type

[sm_context_retrieved_data_t](sm_context_retrieved_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualSMContextAPI_sendMoData**
```c
// Send MO Data
//
void IndividualSMContextAPI_sendMoData(apiClient_t *apiClient, char * smContextRef, send_mo_data_req_data_t * jsonData, binary_t* binaryMoData);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**smContextRef** | **char \*** | SM context reference | 
**jsonData** | **[send_mo_data_req_data_t](send_mo_data_req_data.md) \*** |  | [optional] 
**binaryMoData** | **binary_t*** |  | [optional] 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: multipart/related
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualSMContextAPI_updateSmContext**
```c
// Update SM Context
//
sm_context_updated_data_t* IndividualSMContextAPI_updateSmContext(apiClient_t *apiClient, char * smContextRef, sm_context_update_data_t * sm_context_update_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**smContextRef** | **char \*** | SM context reference | 
**sm_context_update_data** | **[sm_context_update_data_t](sm_context_update_data.md) \*** | representation of the updates to apply to the SM context | 

### Return type

[sm_context_updated_data_t](sm_context_updated_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json, multipart/related
 - **Accept**: application/json, multipart/related, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

