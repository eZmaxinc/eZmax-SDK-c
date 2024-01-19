# custom_ezsignsignature_create_ezsignelements_positioned_by_word_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsignsignature_id** | **int** | The unique ID of the Ezsignsignature | [optional] 
**fki_ezsignfoldersignerassociation_id** | **int** | The unique ID of the Ezsignfoldersignerassociation | 
**i_ezsignpage_pagenumber** | **int** | The page number in the Ezsigndocument | 
**i_ezsignsignature_x** | **int** | The X coordinate (Horizontal) where to put the Ezsignsignature on the page.  Coordinate is calculated at 100dpi (dot per inch). So for example, if you want to put the Ezsignsignature 2 inches from the left border of the page, you would use \&quot;200\&quot; for the X coordinate. | 
**i_ezsignsignature_y** | **int** | The Y coordinate (Vertical) where to put the Ezsignsignature on the page.  Coordinate is calculated at 100dpi (dot per inch). So for example, if you want to put the Ezsignsignature 3 inches from the top border of the page, you would use \&quot;300\&quot; for the Y coordinate. | 
**i_ezsignsignature_width** | **int** | The width of the Ezsignsignature.  Size is calculated at 100dpi (dot per inch). So for example, if you want the Ezsignsignature to have a width of 2 inches, you would use \&quot;200\&quot; for the iEzsignsignatureWidth. | [optional] 
**i_ezsignsignature_height** | **int** | The height of the Ezsignsignature.  Size is calculated at 100dpi (dot per inch). So for example, if you want the Ezsignsignature to have an height of 2 inches, you would use \&quot;200\&quot; for the iEzsignsignatureHeight. | [optional] 
**i_ezsignsignature_step** | **int** | The step when the Ezsignsigner will be invited to sign | 
**e_ezsignsignature_type** | **field_e_ezsignsignature_type_t \*** |  | 
**fki_ezsigndocument_id** | **int** | The unique ID of the Ezsigndocument | 
**t_ezsignsignature_tooltip** | **char \*** | A tooltip that will be presented to Ezsignsigner about the Ezsignsignature | [optional] 
**e_ezsignsignature_tooltipposition** | **field_e_ezsignsignature_tooltipposition_t \*** |  | [optional] 
**e_ezsignsignature_font** | **field_e_ezsignsignature_font_t \*** |  | [optional] 
**fki_ezsignfoldersignerassociation_id_validation** | **int** | The unique ID of the Ezsignfoldersignerassociation | [optional] 
**b_ezsignsignature_required** | **int** | Whether the Ezsignsignature is required or not. This field is relevant only with Ezsignsignature with eEzsignsignatureType &#x3D; Attachments. | [optional] 
**e_ezsignsignature_attachmentnamesource** | **field_e_ezsignsignature_attachmentnamesource_t \*** |  | [optional] 
**s_ezsignsignature_attachmentdescription** | **char \*** | The description attached to the attachment name added in Ezsignsignature of eEzsignsignatureType Attachments | [optional] 
**i_ezsignsignature_validationstep** | **int** | The step when the Ezsignsigner will be invited to validate the Ezsignsignature of eEzsignsignatureType Attachments | [optional] 
**i_ezsignsignature_maxlength** | **int** | The maximum length for the value in the Ezsignsignature  This can only be set if eEzsignsignatureType is **FieldText** or **FieldTextarea** | [optional] 
**e_ezsignsignature_textvalidation** | **enum_textvalidation_t \*** |  | [optional] 
**s_ezsignsignature_regexp** | **char \*** | A regular expression to indicate what values are acceptable for the Ezsignsignature.  This can only be set if eEzsignsignatureType is **FieldText** or **FieldTextarea** and eEzsignsignatureTextvalidation is **Custom** | [optional] 
**e_ezsignsignature_dependencyrequirement** | **field_e_ezsignsignature_dependencyrequirement_t \*** |  | [optional] 
**b_ezsignsignature_customdate** | **int** | Whether the Ezsignsignature has a custom date format or not. (Only possible when eEzsignsignatureType is **Name** or **Handwritten**) | [optional] 
**a_obj_ezsignsignaturecustomdate** | [**list_t**](ezsignsignaturecustomdate_request_compound.md) \* | An array of custom date blocks that will be filled at the time of signature.  Can only be used if bEzsignsignatureCustomdate is true.  Use an empty array if you don&#39;t want to have a date at all. | [optional] 
**a_obj_ezsignelementdependency** | [**list_t**](ezsignelementdependency_request_compound.md) \* |  | [optional] 
**obj_createezsignelementspositionedbyword** | [**custom_create_ezsignelements_positioned_by_word_request_t**](custom_create_ezsignelements_positioned_by_word_request.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


