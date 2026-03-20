# policy_association_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**request** | [**policy_association_request_t**](policy_association_request.md) \* |  | [optional] 
**triggers** | [**list_t**](request_trigger.md) \* | Request Triggers that the PCF subscribes. | [optional] 
**serv_area_res** | [**service_area_restriction_t**](service_area_restriction.md) \* |  | [optional] 
**wl_serv_area_res** | [**wireline_service_area_restriction_t**](wireline_service_area_restriction.md) \* |  | [optional] 
**rfsp** | **int** | Unsigned integer representing the \&quot;Subscriber Profile ID for RAT/Frequency Priority\&quot;  as specified in 3GPP TS 36.413.  | [optional] 
**target_rfsp** | **int** | Unsigned integer representing the \&quot;Subscriber Profile ID for RAT/Frequency Priority\&quot;  as specified in 3GPP TS 36.413.  | [optional] 
**smf_sel_info** | [**smf_selection_data_t**](smf_selection_data.md) \* |  | [optional] 
**ue_ambr** | [**ambr_t**](ambr.md) \* |  | [optional] 
**ue_slice_mbrs** | [**list_t**](ue_slice_mbr.md) \* | One or more UE-Slice-MBR(s) for S-NSSAI(s) of serving PLMN as part of the AMF Access and Mobility Policy as determined by the PCF.  | [optional] 
**pras** | **list_t*** | Contains the presence reporting area(s) for which reporting was requested. The praId attribute within the PresenceInfo data type is the key of the map.  | [optional] 
**supp_feat** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | 
**pcf_ue_info** | [**pcf_ue_callback_info_t**](pcf_ue_callback_info.md) \* |  | [optional] 
**match_pdus** | [**list_t**](pdu_session_info.md) \* |  | [optional] 
**as_time_dis_param** | [**as_time_distribution_param_t**](as_time_distribution_param.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


