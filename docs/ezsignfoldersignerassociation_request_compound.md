# ezsignfoldersignerassociation_request_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsignfoldersignerassociation_id** | **int** | The unique ID of the Ezsignfoldersignerassociation | [optional] 
**fki_user_id** | **int** | The unique ID of the User | [optional] 
**fki_ezsignsignergroup_id** | **int** | The unique ID of the Ezsignsignergroup | [optional] 
**fki_ezsignfolder_id** | **int** | The unique ID of the Ezsignfolder | 
**b_ezsignfoldersignerassociation_receivecopy** | **int** | If this flag is true. The signatory will receive a copy of every signed Ezsigndocument even if it ain&#39;t required to sign the document. | [optional] 
**t_ezsignfoldersignerassociation_message** | **char \*** | A custom text message that will be added to the email sent. | [optional] 
**obj_ezsignsigner** | [**ezsignsigner_request_compound_t**](ezsignsigner_request_compound.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


