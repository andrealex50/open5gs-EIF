# NetworkSliceInformationDocumentAPI

All URIs are relative to *https://example.com/nnssf-nsselection/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**NetworkSliceInformationDocumentAPI_nSSelectionGet**](NetworkSliceInformationDocumentAPI.md#NetworkSliceInformationDocumentAPI_nSSelectionGet) | **GET** /network-slice-information | Retrieve the Network Slice Selection Information


# **NetworkSliceInformationDocumentAPI_nSSelectionGet**
```c
// Retrieve the Network Slice Selection Information
//
authorized_network_slice_info_t* NetworkSliceInformationDocumentAPI_nSSelectionGet(apiClient_t *apiClient, nf_type_e nf_type, char * nf_id, slice_info_for_registration_t * slice_info_request_for_registration, slice_info_for_pdu_session_t * slice_info_request_for_pdu_session, slice_info_for_ue_configuration_update_t * slice_info_request_for_ue_cu, plmn_id_t * home_plmn_id, tai_t * tai, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**nf_type** | **nf_type_e** | NF type of the NF service consumer | 
**nf_id** | **char \*** | NF Instance ID of the NF service consumer | 
**slice_info_request_for_registration** | **[slice_info_for_registration_t](.md) \*** | Requested network slice information during Registration procedure | [optional] 
**slice_info_request_for_pdu_session** | **[slice_info_for_pdu_session_t](.md) \*** | Requested network slice information during PDU session establishment procedure | [optional] 
**slice_info_request_for_ue_cu** | **[slice_info_for_ue_configuration_update_t](.md) \*** | Requested network slice information during UE confuguration update procedure | [optional] 
**home_plmn_id** | **[plmn_id_t](.md) \*** | PLMN ID of the HPLMN | [optional] 
**tai** | **[tai_t](.md) \*** | TAI of the UE | [optional] 
**supported_features** | **char \*** | Features required to be supported by the NFs in the target slice instance | [optional] 

### Return type

[authorized_network_slice_info_t](authorized_network_slice_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

