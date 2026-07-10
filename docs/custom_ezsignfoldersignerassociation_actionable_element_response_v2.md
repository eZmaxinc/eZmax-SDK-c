# custom_ezsignfoldersignerassociation_actionable_element_response_v2_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsignfoldersignerassociation_id** | **int** | The unique ID of the Ezsignfoldersignerassociation | 
**fki_ezsignfolder_id** | **int** | The unique ID of the Ezsignfolder | 
**b_ezsignfoldersignerassociation_delayedsend** | **int** | If this flag is true the signatory is part of a delayed send. | 
**e_ezsignfoldersignerassociation_role** | **field_e_ezsignfoldersignerassociation_role_t \*** |  | 
**t_ezsignfoldersignerassociation_message** | **char \*** | A custom text message that will be added to the email sent. | 
**b_ezsignfoldersignerassociation_allowsigninginperson** | **int** | If the Ezsignfoldersignerassociation is allowed to sign in person or not | 
**obj_ezsignsignergroup** | [**ezsignsignergroup_response_compound_t**](ezsignsignergroup_response_compound.md) \* |  | [optional] 
**obj_user** | [**ezsignfoldersignerassociation_response_compound_user_t**](ezsignfoldersignerassociation_response_compound_user.md) \* |  | [optional] 
**obj_ezsignsigner** | [**ezsignsigner_response_compound_t**](ezsignsigner_response_compound.md) \* |  | [optional] 
**b_ezsignfoldersignerassociation_hasactionableelements_current** | **int** | Indicates if the Ezsignfoldersignerassociation has actionable elements in the current step | 
**b_ezsignfoldersignerassociation_hasactionableelements_future** | **int** | Indicates if the Ezsignfoldersignerassociation has actionable elements in a future step | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


