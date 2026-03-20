# qos_flow_profile_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**_5qi** | **int** | Unsigned integer representing a 5G QoS Identifier (see clause 5.7.2.1 of 3GPP TS 23.501, within the range 0 to 255.  | 
**non_dynamic5_qi** | [**non_dynamic5_qi_t**](non_dynamic5_qi.md) \* |  | [optional] 
**dynamic5_qi** | [**dynamic5_qi_t**](dynamic5_qi.md) \* |  | [optional] 
**arp** | [**arp_t**](arp.md) \* |  | [optional] 
**gbr_qos_flow_info** | [**gbr_qos_flow_information_t**](gbr_qos_flow_information.md) \* |  | [optional] 
**rqa** | **reflective_qo_s_attribute_t \*** |  | [optional] 
**additional_qos_flow_info** | **additional_qos_flow_info_t \*** |  | [optional] 
**qos_monitoring_req** | **qos_monitoring_req_t \*** |  | [optional] 
**qos_rep_period** | **int** | indicating a time in seconds. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


