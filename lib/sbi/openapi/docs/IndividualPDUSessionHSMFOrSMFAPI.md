# IndividualPDUSessionHSMFOrSMFAPI

All URIs are relative to *https://example.com/nsmf-pdusession/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualPDUSessionHSMFOrSMFAPI_releasePduSession**](IndividualPDUSessionHSMFOrSMFAPI.md#IndividualPDUSessionHSMFOrSMFAPI_releasePduSession) | **POST** /pdu-sessions/{pduSessionRef}/release | Release
[**IndividualPDUSessionHSMFOrSMFAPI_retrievePduSession**](IndividualPDUSessionHSMFOrSMFAPI.md#IndividualPDUSessionHSMFOrSMFAPI_retrievePduSession) | **POST** /pdu-sessions/{pduSessionRef}/retrieve | Retrieve
[**IndividualPDUSessionHSMFOrSMFAPI_transferMoData**](IndividualPDUSessionHSMFOrSMFAPI.md#IndividualPDUSessionHSMFOrSMFAPI_transferMoData) | **POST** /pdu-sessions/{pduSessionRef}/transfer-mo-data | Transfer MO Data
[**IndividualPDUSessionHSMFOrSMFAPI_updatePduSession**](IndividualPDUSessionHSMFOrSMFAPI.md#IndividualPDUSessionHSMFOrSMFAPI_updatePduSession) | **POST** /pdu-sessions/{pduSessionRef}/modify | Update (initiated by V-SMF or I-SMF)


# **IndividualPDUSessionHSMFOrSMFAPI_releasePduSession**
```c
// Release
//
released_data_t* IndividualPDUSessionHSMFOrSMFAPI_releasePduSession(apiClient_t *apiClient, char * pduSessionRef, release_data_t * release_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pduSessionRef** | **char \*** | PDU session reference | 
**release_data** | **[release_data_t](release_data.md) \*** | data sent to H-SMF or SMF when releasing the PDU session | [optional] 

### Return type

[released_data_t](released_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json, multipart/related
 - **Accept**: application/json, multipart/related, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualPDUSessionHSMFOrSMFAPI_retrievePduSession**
```c
// Retrieve
//
retrieved_data_t* IndividualPDUSessionHSMFOrSMFAPI_retrievePduSession(apiClient_t *apiClient, char * pduSessionRef, retrieve_data_t * retrieve_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pduSessionRef** | **char \*** | PDU session reference | 
**retrieve_data** | **[retrieve_data_t](retrieve_data.md) \*** | representation of the payload of the Retrieve Request | 

### Return type

[retrieved_data_t](retrieved_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualPDUSessionHSMFOrSMFAPI_transferMoData**
```c
// Transfer MO Data
//
void IndividualPDUSessionHSMFOrSMFAPI_transferMoData(apiClient_t *apiClient, char * pduSessionRef, transfer_mo_data_req_data_t * jsonData, binary_t* binaryMoData);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pduSessionRef** | **char \*** | PDU session reference | 
**jsonData** | **[transfer_mo_data_req_data_t](transfer_mo_data_req_data.md) \*** |  | [optional] 
**binaryMoData** | **binary_t*** |  | [optional] 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: multipart/related
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualPDUSessionHSMFOrSMFAPI_updatePduSession**
```c
// Update (initiated by V-SMF or I-SMF)
//
hsmf_updated_data_t* IndividualPDUSessionHSMFOrSMFAPI_updatePduSession(apiClient_t *apiClient, char * pduSessionRef, hsmf_update_data_t * hsmf_update_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pduSessionRef** | **char \*** | PDU session reference | 
**hsmf_update_data** | **[hsmf_update_data_t](hsmf_update_data.md) \*** | representation of the updates to apply to the PDU session | 

### Return type

[hsmf_updated_data_t](hsmf_updated_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json, multipart/related
 - **Accept**: application/json, multipart/related, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

