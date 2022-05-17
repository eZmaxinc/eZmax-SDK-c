# ezsigntemplatepackage_response_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsigntemplatepackage_id** | **int** | The unique ID of the Ezsigntemplatepackage | 
**fki_ezsignfoldertype_id** | **int** | The unique ID of the Ezsignfoldertype. | 
**fki_language_id** | **int** | The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English| | 
**s_language_name_x** | **char \*** | The Name of the Language in the language of the requester | 
**s_ezsigntemplatepackage_description** | **char \*** | The description of the Ezsigntemplatepackage | 
**b_ezsigntemplatepackage_adminonly** | **int** | Whether the Ezsigntemplatepackage can be accessed by admin users only (eUserType&#x3D;Normal) | 
**b_ezsigntemplatepackage_needvalidation** | **int** | Whether the Ezsignbulksend was automatically modified and needs a manual validation | 
**b_ezsigntemplatepackage_isactive** | **int** | Whether the Ezsigntemplatepackage is active or not | 
**s_ezsignfoldertype_name_x** | **char \*** | The name of the Ezsignfoldertype in the language of the requester | 
**a_obj_ezsigntemplatepackagesigner** | [**list_t**](ezsigntemplatepackagesigner_response_compound.md) \* |  | 
**a_obj_ezsigntemplatepackagemembership** | [**list_t**](ezsigntemplatepackagemembership_response_compound.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


