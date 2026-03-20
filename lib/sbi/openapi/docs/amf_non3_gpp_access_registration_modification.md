# amf_non3_gpp_access_registration_modification_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**guami** | [**guami_t**](guami.md) \* |  | 
**purge_flag** | **int** |  | [optional] 
**pei** | **char \*** | String representing a Permanent Equipment Identifier that may contain - an IMEI or IMEISV, as  specified in clause 6.2 of 3GPP TS 23.003; a MAC address for a 5G-RG or FN-RG via  wireline  access, with an indication that this address cannot be trusted for regulatory purpose if this  address cannot be used as an Equipment Identifier of the FN-RG, as specified in clause 4.7.7  of 3GPP TS23.316. Examples are imei-012345678901234 or imeisv-0123456789012345.   | [optional] 
**ims_vo_ps** | **ims_vo_ps_t \*** |  | [optional] 
**backup_amf_info** | [**list_t**](backup_amf_info.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


