# EventsSubscriptionDocumentAPI

All URIs are relative to *https://example.com/npcf-policyauthorization/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EventsSubscriptionDocumentAPI_deleteEventsSubsc**](EventsSubscriptionDocumentAPI.md#EventsSubscriptionDocumentAPI_deleteEventsSubsc) | **DELETE** /app-sessions/{appSessionId}/events-subscription | deletes the Events Subscription subresource
[**EventsSubscriptionDocumentAPI_updateEventsSubsc**](EventsSubscriptionDocumentAPI.md#EventsSubscriptionDocumentAPI_updateEventsSubsc) | **PUT** /app-sessions/{appSessionId}/events-subscription | creates or modifies an Events Subscription subresource


# **EventsSubscriptionDocumentAPI_deleteEventsSubsc**
```c
// deletes the Events Subscription subresource
//
void EventsSubscriptionDocumentAPI_deleteEventsSubsc(apiClient_t *apiClient, char * appSessionId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**appSessionId** | **char \*** | String identifying the Individual Application Session Context resource. | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EventsSubscriptionDocumentAPI_updateEventsSubsc**
```c
// creates or modifies an Events Subscription subresource
//
events_subsc_put_data_t* EventsSubscriptionDocumentAPI_updateEventsSubsc(apiClient_t *apiClient, char * appSessionId, events_subsc_req_data_t * events_subsc_req_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**appSessionId** | **char \*** | String identifying the Events Subscription resource. | 
**events_subsc_req_data** | **[events_subsc_req_data_t](events_subsc_req_data.md) \*** | Creation or modification of an Events Subscription resource. | 

### Return type

[events_subsc_put_data_t](events_subsc_put_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

