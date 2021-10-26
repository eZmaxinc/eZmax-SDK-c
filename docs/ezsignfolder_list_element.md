# ezsignfolder_list_element_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsignfolder_id** | **int** | The unique ID of the Ezsignfolder | 
**fki_ezsignfoldertype_id** | **int** | The unique ID of the Ezsignfoldertype. | 
**e_ezsignfoldertype_privacylevel** |  |  | 
**s_ezsignfoldertype_name_x** | **char \*** | The name of the Ezsignfoldertype in the language of the requester | 
**s_ezsignfolder_description** | **char \*** | The description of the Ezsign Folder | 
**e_ezsignfolder_step** |  |  | 
**dt_created_date** | **char \*** | The date and time at which the object was created | 
**dt_ezsignfolder_sentdate** | [**one_ofstringobject_t**](one_ofstringobject.md) \* |  | 
**dt_due_date** | [**one_ofstringobject_t**](one_ofstringobject.md) \* | The date at which no more signature will be accepted on the folder | 
**i_total_document** | **int** | The total number of Ezsigndocument in the folder | 
**i_total_document_edm** | **int** | The total number of Ezsigndocument in the folder that were saved in the edm system | 
**i_total_signature** | **int** | The total number of signature blocks in all Ezsigndocuments in the folder | 
**i_total_signature_signed** | **int** | The total number of already signed signature blocks in all Ezsigndocuments in the folder | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


