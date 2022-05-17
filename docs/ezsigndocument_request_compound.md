# ezsigndocument_request_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsigndocument_id** | **int** | The unique ID of the Ezsigndocument | [optional] 
**fki_ezsignfolder_id** | **int** | The unique ID of the Ezsignfolder | 
**fki_ezsigntemplate_id** | **int** | The unique ID of the Ezsigntemplate | [optional] 
**fki_ezsignfoldersignerassociation_id** | **int** | The unique ID of the Ezsignfoldersignerassociation | [optional] 
**fki_language_id** | **int** | The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English| | 
**e_ezsigndocument_source** | **ezmax_api_definition__full_ezsigndocument_request_compound_EEZSIGNDOCUMENTSOURCE_e** | Indicates where to look for the document binary content. | 
**e_ezsigndocument_format** | **ezmax_api_definition__full_ezsigndocument_request_compound_EEZSIGNDOCUMENTFORMAT_e** | Indicates the format of the document. | [optional] 
**s_ezsigndocument_base64** | **char \*** | The Base64 encoded binary content of the document.  This field is Required when eEzsigndocumentSource &#x3D; Base64. | [optional] 
**s_ezsigndocument_url** | **char \*** | The url where the document content resides.  This field is Required when eEzsigndocumentSource &#x3D; Url. | [optional] 
**b_ezsigndocument_forcerepair** | **int** | Try to repair the document or flatten it if it cannot be used for electronic signature.  | [optional] [default to true]
**s_ezsigndocument_password** | **char \*** | If the source document is password protected, the password to open/modify it. | [optional] 
**e_ezsigndocument_form** | **ezmax_api_definition__full_ezsigndocument_request_compound_EEZSIGNDOCUMENTFORM_e** | If the document contains an existing PDF form this property must be set.  **Keep** leaves the form as-is in the document.  **Convert** removes the form and convert all the existing fields to Ezsignformfieldgroups and assign them to the specified **fkiEzsignfoldersignerassociationID** | [optional] 
**dt_ezsigndocument_duedate** | **char \*** | The maximum date and time at which the Ezsigndocument can be signed. | 
**s_ezsigndocument_name** | **char \*** | The name of the document that will be presented to Ezsignfoldersignerassociations | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


