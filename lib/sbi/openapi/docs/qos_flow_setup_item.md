# qos_flow_setup_item_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**qfi** | **int** | Unsigned integer identifying a QoS flow, within the range 0 to 63. | 
**qos_rules** | **char \*** | string with format &#39;bytes&#39; as defined in OpenAPI | 
**ebi** | **int** | EPS Bearer Identifier | [optional] 
**qos_flow_description** | **char \*** | string with format &#39;bytes&#39; as defined in OpenAPI | [optional] 
**qos_flow_profile** | [**qos_flow_profile_t**](qos_flow_profile.md) \* |  | [optional] 
**associated_an_type** | **qos_flow_access_type_t \*** |  | [optional] 
**default_qos_rule_ind** | **int** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


