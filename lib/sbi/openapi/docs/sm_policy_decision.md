# sm_policy_decision_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**sess_rules** | **list_t*** | A map of Sessionrules with the content being the SessionRule as described in clause 5.6.2.7. The key used in this map for each entry is the sessRuleId attribute of the corresponding SessionRule.  | [optional] 
**pcc_rules** | **list_t*** | A map of PCC rules with the content being the PCCRule as described in  clause 5.6.2.6. The key used in this map for each entry is the pccRuleId attribute of the corresponding PccRule.  | [optional] 
**pcscf_rest_indication** | **int** | If it is included and set to true, it indicates the P-CSCF Restoration is requested. | [optional] 
**qos_decs** | **list_t*** | Map of QoS data policy decisions. The key used in this map for each entry is the qosId attribute of the corresponding QosData.  | [optional] 
**chg_decs** | **list_t*** | Map of Charging data policy decisions. The key used in this map for each entry is the chgId attribute of the corresponding ChargingData.  | [optional] 
**charging_info** | [**charging_information_t**](charging_information.md) \* |  | [optional] 
**traff_cont_decs** | **list_t*** | Map of Traffic Control data policy decisions. The key used in this map for each entry is the tcId attribute of the corresponding TrafficControlData.  | [optional] 
**um_decs** | **list_t*** | Map of Usage Monitoring data policy decisions. The key used in this map for each entry is the umId attribute of the corresponding UsageMonitoringData.  | [optional] 
**qos_chars** | **list_t*** | Map of QoS characteristics for non standard 5QIs. This map uses the 5QI values as keys. | [optional] 
**qos_mon_decs** | **list_t*** | Map of QoS Monitoring data policy decisions. The key used in this map for each entry is the qmId attribute of the corresponding QosMonitoringData.  | [optional] 
**reflective_qo_s_timer** | **int** | indicating a time in seconds. | [optional] 
**conds** | **list_t*** | A map of condition data with the content being as described in clause 5.6.2.9. The key used in this map for each entry is the condId attribute of the corresponding ConditionData.  | [optional] 
**revalidation_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**offline** | **int** | Indicates the offline charging is applicable to the PDU session when it is included and set to true. | [optional] 
**online** | **int** | Indicates the online charging is applicable to the PDU session when it is included and set to true. | [optional] 
**offline_ch_only** | **int** | Indicates that the online charging method shall never be used for any PCC rule activated during the lifetime of the PDU session.  | [optional] [default to false]
**policy_ctrl_req_triggers** | [**list_t**](policy_control_request_trigger.md) \* | Defines the policy control request triggers subscribed by the PCF. | [optional] 
**last_req_rule_data** | [**list_t**](requested_rule_data.md) \* | Defines the last list of rule control data requested by the PCF. | [optional] 
**last_req_usage_data** | [**requested_usage_data_t**](requested_usage_data.md) \* |  | [optional] 
**pra_infos** | **list_t*** | Map of PRA information. The praId attribute within the PresenceInfo data type is the key of the map. | [optional] 
**ipv4_index** | **int** | Represents information that identifies which IP pool or external server is used to allocate the IP address.  | [optional] 
**ipv6_index** | **int** | Represents information that identifies which IP pool or external server is used to allocate the IP address.  | [optional] 
**qos_flow_usage** | **qos_flow_usage_t \*** |  | [optional] 
**rel_cause** | **sm_policy_association_release_cause_t \*** |  | [optional] 
**supp_feat** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**tsn_bridge_man_cont** | [**bridge_management_container_t**](bridge_management_container.md) \* |  | [optional] 
**tsn_port_man_cont_dstt** | [**port_management_container_t**](port_management_container.md) \* |  | [optional] 
**tsn_port_man_cont_nwtts** | [**list_t**](port_management_container.md) \* |  | [optional] 
**red_sess_indication** | **int** | Indicates whether the PDU session is a redundant PDU session. If absent it means the PDU session is not a redundant PDU session.  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


