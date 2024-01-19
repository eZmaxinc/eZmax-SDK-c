# custom_ezsignformfieldgroup_create_ezsignelements_positioned_by_word_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsignformfieldgroup_id** | **int** | The unique ID of the Ezsignformfieldgroup | [optional] 
**fki_ezsigndocument_id** | **int** | The unique ID of the Ezsigndocument | 
**e_ezsignformfieldgroup_type** | **field_e_ezsignformfieldgroup_type_t \*** |  | 
**e_ezsignformfieldgroup_signerrequirement** | **field_e_ezsignformfieldgroup_signerrequirement_t \*** |  | 
**s_ezsignformfieldgroup_label** | **char \*** | The Label for the Ezsignformfieldgroup | 
**i_ezsignformfieldgroup_step** | **int** | The step when the Ezsignsigner will be invited to fill the form fields | 
**s_ezsignformfieldgroup_defaultvalue** | **char \*** | The default value for the Ezsignformfieldgroup | [optional] 
**i_ezsignformfieldgroup_filledmin** | **int** | The minimum number of Ezsignformfield that must be filled in the Ezsignformfieldgroup | 
**i_ezsignformfieldgroup_filledmax** | **int** | The maximum number of Ezsignformfield that must be filled in the Ezsignformfieldgroup | 
**b_ezsignformfieldgroup_readonly** | **int** | Whether the Ezsignformfieldgroup is read only or not. | 
**i_ezsignformfieldgroup_maxlength** | **int** | The maximum length for the value in the Ezsignformfieldgroup  This can only be set if eEzsignformfieldgroupType is **Text** or **Textarea** | [optional] 
**b_ezsignformfieldgroup_encrypted** | **int** | Whether the Ezsignformfieldgroup is encrypted in the database or not. Encrypted values are not displayed on the Ezsigndocument. This can only be set if eEzsignformfieldgroupType is **Text** or **Textarea** | [optional] 
**s_ezsignformfieldgroup_regexp** | **char \*** | A regular expression to indicate what values are acceptable for the Ezsignformfieldgroup.  This can only be set if eEzsignformfieldgroupType is **Text** or **Textarea** | [optional] 
**t_ezsignformfieldgroup_tooltip** | **char \*** | A tooltip that will be presented to Ezsignsigner about the Ezsignformfieldgroup | [optional] 
**e_ezsignformfieldgroup_tooltipposition** | **field_e_ezsignformfieldgroup_tooltipposition_t \*** |  | [optional] 
**e_ezsignformfieldgroup_textvalidation** | **enum_textvalidation_t \*** |  | [optional] 
**a_obj_ezsignformfieldgroupsigner** | [**list_t**](ezsignformfieldgroupsigner_request_compound.md) \* |  | 
**a_obj_dropdown_element** | [**list_t**](custom_dropdown_element_request_compound.md) \* |  | [optional] 
**a_obj_ezsignformfield** | [**list_t**](ezsignformfield_request_compound.md) \* |  | 
**obj_createezsignelementspositionedbyword** | [**custom_create_ezsignelements_positioned_by_word_request_t**](custom_create_ezsignelements_positioned_by_word_request.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


