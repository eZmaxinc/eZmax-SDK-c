# custom_attachment_import_into_edm_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**e_attachment_source** | **ezmax_api_definition__full_custom_attachment_import_into_edm_request_EATTACHMENTSOURCE_e** | The source of the Attachment | 
**fki_attachment_id** | **int** | The unique ID of the Attachment. | [optional] 
**fki_inscriptionchecklist_id** | **int** | The unique ID of the Inscriptionchecklist | [optional] 
**s_attachment_url** | **char \*** | The url of the file to import | [optional] 
**s_attachment_base64** | **char \*** | The Base64 encoded binary content of the attachment. | [optional] 
**s_attachment_name** | **char \*** | The name of the Attachment | 
**s_attachment_category** | **char \*** | The attachment category | 
**e_attachment_privacy** | **field_e_attachment_privacy_t \*** |  | 
**fki_user_id_specific** | **int** | The unique ID of the User | [optional] 
**s_attachment_md5** | **char \*** | The MD5 of the Attachment | [optional] 
**b_attachment_forceoverwrite** | **int** | Whether we force an overwrite of an existing file | [optional] 
**b_attachment_forcerestore** | **int** | Whether we force a restore of a deleted file | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


