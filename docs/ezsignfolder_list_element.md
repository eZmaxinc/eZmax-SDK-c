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
**i_ezsignformfieldgroup** | **int** | The total number of Ezsignformfieldgroup in all Ezsigndocuments in the folder | 
**i_ezsignformfieldgroup_completed** | **int** | The total number of completed Ezsignformfieldgroup in all Ezsigndocuments in the folder | 
**b_ezsignform_hasdependencies** | **int** | Whether the Ezsignform/Ezsignsignatures has dependencies or not | [optional] 
**d_ezsignfolder_completedpercentage** | **char \*** | Percentage of Ezsignform/Ezsignsignatures has completed | 
**d_ezsignfolder_formcompletedpercentage** | **char \*** | Percentage of Ezsignform has completed | 
**d_ezsignfolder_signaturecompletedpercentage** | **char \*** | Percentage of Ezsignsignatures has signed | 
**b_ezsignfolder_signer** | **int** | Whether the Ezsignfolder has an Ezsignsignatures that need to be signed or an Ezsignformfieldgroups that need to be filled by the current user | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


