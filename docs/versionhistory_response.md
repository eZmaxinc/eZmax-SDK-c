# versionhistory_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_versionhistory_id** | **int** | The unique ID of the Versionhistory | 
**fki_module_id** | **int** | The unique ID of the Module | [optional] 
**fki_modulesection_id** | **int** | The unique ID of the Modulesection | [optional] 
**s_module_name_x** | **char \*** | The Name of the Module in the language of the requester | [optional] 
**s_modulesection_name_x** | **char \*** | The Name of the Modulesection in the language of the requester | [optional] 
**e_versionhistory_usertype** | **field_e_versionhistory_usertype_t \*** |  | [optional] 
**obj_versionhistory_detail** | [**multilingual_versionhistory_detail_t**](multilingual_versionhistory_detail.md) \* |  | 
**dt_versionhistory_date** | **char \*** | The date  at which the Versionhistory was published or should be published | 
**dt_versionhistory_dateend** | **char \*** | The date  at which the Versionhistory will no longer be visible | [optional] 
**e_versionhistory_type** | **field_e_versionhistory_type_t \*** |  | 
**b_versionhistory_draft** | **int** | Whether the Versionhistory is published or still a draft | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


