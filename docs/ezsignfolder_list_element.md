# ezsignfolder_list_element_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsignfolder_id** | **int** | The unique ID of the Ezsignfolder | 
**fki_ezsignfoldertype_id** | **int** | The unique ID of the Ezsignfoldertype. | 
**e_ezsignfoldertype_privacylevel** | **field_e_ezsignfoldertype_privacylevel_t \*** |  | 
**s_ezsignfoldertype_name_x** | **char \*** | The name of the Ezsignfoldertype in the language of the requester | 
**s_ezsignfolder_description** | **char \*** | The description of the Ezsignfolder | 
**e_ezsignfolder_step** | **field_e_ezsignfolder_step_t \*** |  | 
**dt_created_date** | **char \*** | The date and time at which the object was created | 
**dt_ezsignfolder_delayedsenddate** | **char \*** | The date and time at which the Ezsignfolder will be sent in the future. | [optional] 
**dt_ezsignfolder_sentdate** | **char \*** | The date and time at which the Ezsignfolder was sent the last time. | [optional] 
**dt_ezsignfolder_duedate** | **char \*** | The maximum date and time at which the Ezsignfolder can be signed. | [optional] 
**i_ezsigndocument** | **int** | The total number of Ezsigndocument in the folder | 
**i_ezsigndocument_edm** | **int** | The total number of Ezsigndocument in the folder that were saved in the edm system | 
**i_ezsignsignature** | **int** | The total number of signature blocks in all Ezsigndocuments in the folder | 
**i_ezsignsignature_signed** | **int** | The total number of already signed signature blocks in all Ezsigndocuments in the folder | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


