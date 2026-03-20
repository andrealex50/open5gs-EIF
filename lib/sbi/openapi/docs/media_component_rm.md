# media_component_rm_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**af_app_id** | **char \*** | Contains an AF application identifier. | [optional] 
**af_rout_req** | [**af_routing_requirement_rm_t**](af_routing_requirement_rm.md) \* |  | [optional] 
**qos_reference** | **char \*** |  | [optional] 
**alt_ser_reqs** | **list_t \*** |  | [optional] 
**alt_ser_reqs_data** | [**list_t**](alternative_service_requirements_data.md) \* | Contains removable alternative service requirements that include individual QoS parameter sets. | [optional] 
**dis_ue_notif** | **int** |  | [optional] 
**cont_ver** | **int** | Represents the content version of some content. | [optional] 
**codecs** | **list_t \*** |  | [optional] 
**des_max_latency** | **float** | string with format &#39;float&#39; as defined in OpenAPI with the OpenAPI defined &#39;nullable: true&#39; property.  | [optional] 
**des_max_loss** | **float** | string with format &#39;float&#39; as defined in OpenAPI with the OpenAPI defined &#39;nullable: true&#39; property.  | [optional] 
**flus_id** | **char \*** |  | [optional] 
**f_status** | **flow_status_t \*** |  | [optional] 
**mar_bw_dl** | **char \*** | This data type is defined in the same way as the &#39;BitRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**mar_bw_ul** | **char \*** | This data type is defined in the same way as the &#39;BitRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**max_packet_loss_rate_dl** | **int** | This data type is defined in the same way as the &#39;PacketLossRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**max_packet_loss_rate_ul** | **int** | This data type is defined in the same way as the &#39;PacketLossRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**max_supp_bw_dl** | **char \*** | This data type is defined in the same way as the &#39;BitRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**max_supp_bw_ul** | **char \*** | This data type is defined in the same way as the &#39;BitRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**med_comp_n** | **int** |  | 
**med_sub_comps** | **list_t*** | Contains the requested bitrate and filters for the set of service data flows identified by their common flow identifier. The key of the map is the fNum attribute. | [optional] 
**med_type** | **media_type_t \*** |  | [optional] 
**min_des_bw_dl** | **char \*** | This data type is defined in the same way as the &#39;BitRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**min_des_bw_ul** | **char \*** | This data type is defined in the same way as the &#39;BitRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**mir_bw_dl** | **char \*** | This data type is defined in the same way as the &#39;BitRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**mir_bw_ul** | **char \*** | This data type is defined in the same way as the &#39;BitRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**preempt_cap** | [**preemption_capability_rm_t**](preemption_capability_rm.md) \* |  | [optional] 
**preempt_vuln** | [**preemption_vulnerability_rm_t**](preemption_vulnerability_rm.md) \* |  | [optional] 
**prio_sharing_ind** | **priority_sharing_indicator_t \*** |  | [optional] 
**res_prio** | **reserv_priority_t \*** |  | [optional] 
**rr_bw** | **char \*** | This data type is defined in the same way as the &#39;BitRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**rs_bw** | **char \*** | This data type is defined in the same way as the &#39;BitRate&#39; data type, but with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**sharing_key_dl** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**sharing_key_ul** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**tsn_qos** | [**tsn_qos_container_rm_t**](tsn_qos_container_rm.md) \* |  | [optional] 
**tscai_input_dl** | [**tscai_input_container_t**](tscai_input_container.md) \* |  | [optional] 
**tscai_input_ul** | [**tscai_input_container_t**](tscai_input_container.md) \* |  | [optional] 
**tscai_time_dom** | **int** | Unsigned Integer, i.e. only value 0 and integers above 0 are permissible. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


