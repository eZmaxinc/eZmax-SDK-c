# ezsigntemplateformfieldgroup_response_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsigntemplateformfieldgroup_id** | **int** | The unique ID of the Ezsigntemplateformfieldgroup | 
**fki_ezsigntemplatedocument_id** | **int** | The unique ID of the Ezsigntemplatedocument | 
**e_ezsigntemplateformfieldgroup_type** | **field_e_ezsigntemplateformfieldgroup_type_t \*** |  | 
**e_ezsigntemplateformfieldgroup_signerrequirement** | **field_e_ezsigntemplateformfieldgroup_signerrequirement_t \*** |  | 
**s_ezsigntemplateformfieldgroup_label** | **char \*** | The Label for the Ezsigntemplateformfieldgroup | 
**i_ezsigntemplateformfieldgroup_step** | **int** | The step when the Ezsigntemplatesigner will be invited to fill the form fields | 
**s_ezsigntemplateformfieldgroup_defaultvalue** | **char \*** | The default value for the Ezsigntemplateformfieldgroup | [optional] 
**i_ezsigntemplateformfieldgroup_filledmin** | **int** | The minimum number of Ezsigntemplateformfield that must be filled in the Ezsigntemplateformfieldgroup | 
**i_ezsigntemplateformfieldgroup_filledmax** | **int** | The maximum number of Ezsigntemplateformfield that must be filled in the Ezsigntemplateformfieldgroup | 
**b_ezsigntemplateformfieldgroup_readonly** | **int** | Whether the Ezsigntemplateformfieldgroup is read only or not. | 
**i_ezsigntemplateformfieldgroup_maxlength** | **int** | The maximum length for the value in the Ezsigntemplateformfieldgroup  This can only be set if eEzsigntemplateformfieldgroupType is **Text** or **Textarea** | [optional] 
**b_ezsigntemplateformfieldgroup_encrypted** | **int** | Whether the Ezsigntemplateformfieldgroup is encrypted in the database or not. Encrypted values are not displayed on the Ezsigndocument. This can only be set if eEzsigntemplateformfieldgroupType is **Text** or **Textarea** | [optional] 
**s_ezsigntemplateformfieldgroup_regexp** | **char \*** | A regular expression to indicate what values are acceptable for the Ezsigntemplateformfieldgroup.  This can only be set if eEzsigntemplateformfieldgroupType is **Text** or **Textarea** | [optional] 
**t_ezsigntemplateformfieldgroup_tooltip** | **char \*** | A tooltip that will be presented to Ezsigntemplatesigner about the Ezsigntemplateformfieldgroup | [optional] 
**e_ezsigntemplateformfieldgroup_tooltipposition** | **field_e_ezsigntemplateformfieldgroup_tooltipposition_t \*** |  | [optional] 
**a_obj_ezsigntemplateformfieldgroupsigner** | [**list_t**](ezsigntemplateformfieldgroupsigner_response_compound.md) \* |  | 
**a_obj_dropdown_element** | [**list_t**](custom_dropdown_element_response_compound.md) \* |  | [optional] 
**a_obj_ezsigntemplateformfield** | [**list_t**](ezsigntemplateformfield_response_compound.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


