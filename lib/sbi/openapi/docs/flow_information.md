# flow_information_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**flow_description** | **char \*** | Defines a packet filter for an IP flow. | [optional] 
**eth_flow_description** | [**eth_flow_description_t**](eth_flow_description.md) \* |  | [optional] 
**pack_filt_id** | **char \*** | An identifier of packet filter. | [optional] 
**packet_filter_usage** | **int** | The packet shall be sent to the UE. | [optional] 
**tos_traffic_class** | **char \*** | Contains the Ipv4 Type-of-Service and mask field or the Ipv6 Traffic-Class field and mask field. | [optional] 
**spi** | **char \*** | the security parameter index of the IPSec packet. | [optional] 
**flow_label** | **char \*** | the Ipv6 flow label header field. | [optional] 
**flow_direction** | **flow_direction_t \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


