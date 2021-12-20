# ezsignfolder_get_object_v1_response_m_payload_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsignfolder_id** | **int** | The unique ID of the Ezsignfolder | 
**fki_ezsignfoldertype_id** | **int** | The unique ID of the Ezsignfoldertype. | 
**s_ezsignfoldertype_name_x** | **char \*** | The name of the Ezsignfoldertype in the language of the requester | 
**fki_billingentityinternal_id** | **int** | The unique ID of the Billingentityinternal. | 
**s_billingentityinternal_description_x** | **char \*** | The description of the Billingentityinternal in the language of the requester | 
**fki_ezsigntsarequirement_id** | **int** | The unique ID of the Ezsigntsarequirement.  Determine if a Time Stamping Authority should add a timestamp on each of the signature. Valid values:  |Value|Description| |-|-| |1|No. TSA Timestamping will requested. This will make all signatures a lot faster since no round-trip to the TSA server will be required. Timestamping will be made using eZsign server&#39;s time.| |2|Best effort. Timestamping from a Time Stamping Authority will be requested but is not mandatory. In the very improbable case it cannot be completed, the timestamping will be made using eZsign server&#39;s time. **Additional fee applies**| |3|Mandatory. Timestamping from a Time Stamping Authority will be requested and is mandatory. In the very improbable case it cannot be completed, the signature will fail and the user will be asked to retry. **Additional fee applies**| | 
**s_ezsigntsarequirement_description_x** | **char \*** | The description of the Ezsigntsarequirement in the language of the requester | 
**s_ezsignfolder_description** | **char \*** | The description of the Ezsignfolder | 
**t_ezsignfolder_note** | **char \*** | Somes extra notes about the eZsign Folder | 
**e_ezsignfolder_sendreminderfrequency** | **field_e_ezsignfolder_sendreminderfrequency_t \*** |  | 
**dt_ezsignfolder_duedate** | **char \*** | The maximum date and time at which the Ezsignfolder can be signed. | 
**dt_ezsignfolder_sentdate** | **char \*** | The date and time at which the Ezsign folder was sent the last time. | 
**e_ezsignfolder_step** | **field_e_ezsignfolder_step_t \*** |  | 
**dt_ezsignfolder_close** | **char \*** | The date and time at which the folder was closed. Either by applying the last signature or by completing it prematurely. | 
**obj_audit** | [**common_audit_t**](common_audit.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


