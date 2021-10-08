# common_response_obj_debug_payload_get_list_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**i_version_min** | **int** | The minimum version of the function that can be called | 
**i_version_max** | **int** | The maximum version of the function that can be called | 
**a_required_permission** | **list_t \*** | An array of permissions required to access this function.  If the value \&quot;0\&quot; is present in the array, anyone can call this function.  You must have one of the permission to access the function. You don&#39;t need to have all of them. | 
**a_filter** | [**common_response_filter_t**](common_response_filter.md) \* |  | 
**a_order_by** | **list_t*** | List of available values for *eOrderBy* | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


