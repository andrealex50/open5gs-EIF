# ProvidingAcknowledgementOfSteeringOfRoamingAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ProvidingAcknowledgementOfSteeringOfRoamingAPI_sorAckInfo**](ProvidingAcknowledgementOfSteeringOfRoamingAPI.md#ProvidingAcknowledgementOfSteeringOfRoamingAPI_sorAckInfo) | **PUT** /{supi}/am-data/sor-ack | Nudm_Sdm Info service operation


# **ProvidingAcknowledgementOfSteeringOfRoamingAPI_sorAckInfo**
```c
// Nudm_Sdm Info service operation
//
void ProvidingAcknowledgementOfSteeringOfRoamingAPI_sorAckInfo(apiClient_t *apiClient, char * supi, acknowledge_info_t * acknowledge_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supi** | **char \*** | Identifier of the UE | 
**acknowledge_info** | **[acknowledge_info_t](acknowledge_info.md) \*** |  | [optional] 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

