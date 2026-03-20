# qos_flow_add_modify_request_item_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**qfi** | **int** | Unsigned integer identifying a QoS flow, within the range 0 to 63. | 
**ebi** | **int** | EPS Bearer Identifier | [optional] 
**qos_rules** | **char \*** | string with format &#39;bytes&#39; as defined in OpenAPI | [optional] 
**qos_flow_description** | **char \*** | string with format &#39;bytes&#39; as defined in OpenAPI | [optional] 
**qos_flow_profile** | [**qos_flow_profile_t**](qos_flow_profile.md) \* |  | [optional] 
**associated_an_type** | **qos_flow_access_type_t \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


