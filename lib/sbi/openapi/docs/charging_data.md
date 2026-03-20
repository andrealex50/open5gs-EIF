# charging_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**chg_id** | **char \*** | Univocally identifies the charging control policy data within a PDU session. | 
**metering_method** | **metering_method_t \*** |  | [optional] 
**offline** | **int** | Indicates the offline charging is applicable to the PCC rule when it is included and set to true. | [optional] 
**online** | **int** | Indicates the online charging is applicable to the PCC rule when it is included and set to true. | [optional] 
**sdf_handl** | **int** | Indicates whether the service data flow is allowed to start while the SMF is waiting for the response to the credit request. | [optional] 
**rating_group** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | [optional] 
**reporting_level** | **reporting_level_t \*** |  | [optional] 
**service_id** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | [optional] 
**sponsor_id** | **char \*** | Indicates the sponsor identity. | [optional] 
**app_svc_prov_id** | **char \*** | Indicates the application service provider identity. | [optional] 
**af_charging_identifier** | **int** | Integer where the allowed values correspond to the value range of an unsigned 32-bit integer.  | [optional] 
**af_charg_id** | **char \*** | Application provided charging identifier allowing correlation of charging information. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


