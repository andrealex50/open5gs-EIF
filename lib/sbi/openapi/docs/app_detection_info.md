# app_detection_info_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**app_id** | **char \*** | A reference to the application detection filter configured at the UPF | 
**instance_id** | **char \*** | Identifier sent by the SMF in order to allow correlation of application Start and Stop events to the specific service data flow description, if service data flow descriptions are deducible.  | [optional] 
**sdf_descriptions** | [**list_t**](flow_information.md) \* | Contains the detected service data flow descriptions if they are deducible. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


