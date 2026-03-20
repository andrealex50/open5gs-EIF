# traffic_descriptor_components_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**app_descs** | **list_t*** | Describes the operation systems and the corresponding applications for each operation systems. The key of map is osId. | [optional] 
**flow_descs** | **list_t \*** | Represents a 3-tuple with protocol, server ip and server port for UL/DL application traffic. The content of the string has the same encoding as the IPFilterRule AVP value as defined in IETF RFC 6733. | [optional] 
**domain_descs** | **list_t \*** | FQDN(s) or a regular expression which are used as a domain name matching criteria. | [optional] 
**eth_flow_descs** | [**list_t**](eth_flow_description.md) \* | Descriptor(s) for destination information of non-IP traffic in which only ethernet flow description is defined. | [optional] 
**dnns** | **list_t \*** | This is matched against the DNN information provided by the application. | [optional] 
**conn_caps** | [**list_t**](connection_capabilities.md) \* | This is matched against the information provided by a UE application when it requests a network connection with certain capabilities. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


