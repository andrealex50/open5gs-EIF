# change_item_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**op** | **change_type_t \*** |  | 
**path** | **char \*** | contains a JSON pointer value (as defined in IETF RFC 6901) that references a target  location within the resource on which the change has been applied.  | 
**from** | **char \*** | indicates the path of the source JSON element (according to JSON Pointer syntax)  being moved or copied to the location indicated by the \&quot;path\&quot; attribute. It shall  be present if the \&quot;op\&quot; attribute is of value \&quot;MOVE\&quot;.  | [optional] 
**orig_value** | **any_type_t \*** |  | [optional] 
**new_value** | **any_type_t \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


