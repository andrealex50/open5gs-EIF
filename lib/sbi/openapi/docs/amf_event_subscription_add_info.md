# amf_event_subscription_add_info_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**binding_info** | **list_t \*** |  | [optional] 
**subscribing_nf_type** | **nf_type_t \*** |  | [optional] 
**event_sync_ind** | **int** |  | [optional] 
**nf_consumer_info** | **list_t \*** |  | [optional] 
**aoi_state_list** | **list_t*** | Map of subscribed Area of Interest (AoI) Event State in the old AMF. The JSON pointer to an AmfEventArea element in the areaList IE (or a PresenceInfo element in  presenceInfoList IE) of the AmfEvent data type shall be the key of the map.  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


