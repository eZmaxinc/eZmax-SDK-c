# ezsignbulksend_response_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsignbulksend_id** | **int** | The unique ID of the Ezsignbulksend | 
**fki_ezsignfoldertype_id** | **int** | The unique ID of the Ezsignfoldertype. | 
**fki_language_id** | **int** | The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English| | 
**s_language_name_x** | **char \*** | The Name of the Language in the language of the requester | 
**s_ezsignfoldertype_name_x** | **char \*** | The name of the Ezsignfoldertype in the language of the requester | 
**s_ezsignbulksend_description** | **char \*** | The description of the Ezsignbulksend | 
**t_ezsignbulksend_note** | **char \*** | Note about the Ezsignbulksend | 
**b_ezsignbulksend_needvalidation** | **int** | Whether the Ezsigntemplatepackage was automatically modified and needs a manual validation | 
**b_ezsignbulksend_isactive** | **int** | Whether the Ezsignbulksend is active or not | 
**obj_audit** | [**common_audit_t**](common_audit.md) \* |  | 
**a_obj_ezsignbulksenddocumentmapping** | [**list_t**](ezsignbulksenddocumentmapping_response_compound.md) \* |  | 
**a_obj_ezsignbulksendsignermapping** | [**list_t**](ezsignbulksendsignermapping_response.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


