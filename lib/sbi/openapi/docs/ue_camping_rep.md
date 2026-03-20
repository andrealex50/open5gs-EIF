# ue_camping_rep_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**access_type** | **access_type_t \*** |  | [optional] 
**rat_type** | **rat_type_t \*** |  | [optional] 
**serv_nf_id** | [**serving_nf_identity_t**](serving_nf_identity.md) \* |  | [optional] 
**serving_network** | [**plmn_id_nid_t**](plmn_id_nid.md) \* |  | [optional] 
**user_location_info** | [**user_location_t**](user_location.md) \* |  | [optional] 
**ue_time_zone** | **char \*** | String with format \&quot;time-numoffset\&quot; optionally appended by \&quot;daylightSavingTime\&quot;, where  - \&quot;time-numoffset\&quot; shall represent the time zone adjusted for daylight saving time and be    encoded as time-numoffset as defined in clause 5.6 of IETF RFC 3339;  - \&quot;daylightSavingTime\&quot; shall represent the adjustment that has been made and shall be    encoded as \&quot;+1\&quot; or \&quot;+2\&quot; for a +1 or +2 hours adjustment.   The example is for 8 hours behind UTC, +1 hour adjustment for Daylight Saving Time.  | [optional] 
**net_loc_acc_supp** | **net_loc_access_support_t \*** |  | [optional] 
**sat_backhaul_category** | **satellite_backhaul_category_t \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


