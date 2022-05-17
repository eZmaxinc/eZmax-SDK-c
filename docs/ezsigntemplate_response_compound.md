# ezsigntemplate_response_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsigntemplate_id** | **int** | The unique ID of the Ezsigntemplate | 
**fki_ezsigntemplatedocument_id** | **int** | The unique ID of the Ezsigntemplatedocument | [optional] 
**fki_ezsignfoldertype_id** | **int** | The unique ID of the Ezsignfoldertype. | 
**fki_language_id** | **int** | The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English| | 
**s_language_name_x** | **char \*** | The Name of the Language in the language of the requester | 
**s_ezsigntemplate_description** | **char \*** | The description of the Ezsigntemplate | 
**b_ezsigntemplate_adminonly** | **int** | Whether the Ezsigntemplate can be accessed by admin users only (eUserType&#x3D;Normal) | 
**s_ezsignfoldertype_name_x** | **char \*** | The name of the Ezsignfoldertype in the language of the requester | 
**obj_ezsigntemplatedocument** | [**ezsigntemplatedocument_response_t**](ezsigntemplatedocument_response.md) \* |  | [optional] 
**a_obj_ezsigntemplatesigner** | [**list_t**](ezsigntemplatesigner_response_compound.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


