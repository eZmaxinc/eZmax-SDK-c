# ezsignsignature_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsignsignature_id** | **int** | The unique ID of the Ezsignsignature | 
**fki_ezsigndocument_id** | **int** | The unique ID of the Ezsigndocument | 
**fki_ezsignfoldersignerassociation_id** | **int** | The unique ID of the Ezsignfoldersignerassociation | 
**fki_ezsignsigningreason_id** | **int** | The unique ID of the Ezsignsigningreason | [optional] 
**s_ezsignsigningreason_description_x** | **char \*** | The description of the Ezsignsigningreason in the language of the requester | [optional] 
**i_ezsignpage_pagenumber** | **int** | The page number in the Ezsigndocument | 
**i_ezsignsignature_x** | **int** | The X coordinate (Horizontal) where to put the Ezsignsignature on the page.  Coordinate is calculated at 100dpi (dot per inch). So for example, if you want to put the Ezsignsignature 2 inches from the left border of the page, you would use \&quot;200\&quot; for the X coordinate. | 
**i_ezsignsignature_y** | **int** | The Y coordinate (Vertical) where to put the Ezsignsignature on the page.  Coordinate is calculated at 100dpi (dot per inch). So for example, if you want to put the Ezsignsignature 3 inches from the top border of the page, you would use \&quot;300\&quot; for the Y coordinate. | 
**i_ezsignsignature_height** | **int** | The height of the Ezsignsignature.  Size is calculated at 100dpi (dot per inch). So for example, if you want the Ezsignsignature to have an height of 2 inches, you would use \&quot;200\&quot; for the iEzsignsignatureHeight. | [optional] 
**i_ezsignsignature_width** | **int** | The width of the Ezsignsignature.  Size is calculated at 100dpi (dot per inch). So for example, if you want the Ezsignsignature to have a width of 2 inches, you would use \&quot;200\&quot; for the iEzsignsignatureWidth. | [optional] 
**i_ezsignsignature_step** | **int** | The step when the Ezsignsigner will be invited to sign | 
**i_ezsignsignature_stepadjusted** | **int** | The step when the Ezsignsigner will be invited to sign | [optional] 
**e_ezsignsignature_type** | **field_e_ezsignsignature_type_t \*** |  | 
**t_ezsignsignature_tooltip** | **char \*** | A tooltip that will be presented to Ezsignsigner about the Ezsignsignature | [optional] 
**e_ezsignsignature_tooltipposition** | **field_e_ezsignsignature_tooltipposition_t \*** |  | [optional] 
**e_ezsignsignature_font** | **field_e_ezsignsignature_font_t \*** |  | [optional] 
**i_ezsignsignature_validationstep** | **int** | The step when the Ezsignsigner will be invited to validate the Ezsignsignature of eEzsignsignatureType Attachments | [optional] 
**s_ezsignsignature_attachmentdescription** | **char \*** | The description attached to the attachment name added in Ezsignsignature of eEzsignsignatureType Attachments | [optional] 
**e_ezsignsignature_attachmentnamesource** | **field_e_ezsignsignature_attachmentnamesource_t \*** |  | [optional] 
**b_ezsignsignature_required** | **int** | Whether the Ezsignsignature is required or not. This field is relevant only with Ezsignsignature with eEzsignsignatureType &#x3D; Attachments. | [optional] 
**fki_ezsignfoldersignerassociation_id_validation** | **int** | The unique ID of the Ezsignfoldersignerassociation | [optional] 
**dt_ezsignsignature_date** | **char \*** | The date the Ezsignsignature was signed | [optional] 
**i_ezsignsignatureattachment_count** | **int** | The count of Ezsignsignatureattachment | [optional] 
**s_ezsignsignature_description** | **char \*** | The value entered while signing Ezsignsignature of eEzsignsignatureType **City**, **FieldText** and **FieldTextarea** | [optional] 
**i_ezsignsignature_maxlength** | **int** | The maximum length for the value in the Ezsignsignature  This can only be set if eEzsignsignatureType is **FieldText** or **FieldTextarea** | [optional] 
**e_ezsignsignature_textvalidation** | **enum_textvalidation_t \*** |  | [optional] 
**e_ezsignsignature_dependencyrequirement** | **field_e_ezsignsignature_dependencyrequirement_t \*** |  | [optional] 
**s_ezsignsignature_regexp** | **char \*** | A regular expression to indicate what values are acceptable for the Ezsignsignature.  This can only be set if eEzsignsignatureType is **FieldText** or **FieldTextarea** and eEzsignsignatureTextvalidation is **Custom** | [optional] 
**obj_contact_name** | [**custom_contact_name_response_t**](custom_contact_name_response.md) \* |  | 
**obj_contact_name_delegation** | [**custom_contact_name_response_t**](custom_contact_name_response.md) \* |  | [optional] 
**obj_signature** | [**signature_response_compound_t**](signature_response_compound.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


