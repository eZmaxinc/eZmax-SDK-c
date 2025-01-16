# ezsignfolder_response_v3_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsignfolder_id** | **int** | The unique ID of the Ezsignfolder | 
**fki_ezsignfoldertype_id** | **int** | The unique ID of the Ezsignfoldertype. | [optional] 
**obj_ezsignfoldertype** | [**custom_ezsignfoldertype_response_t**](custom_ezsignfoldertype_response.md) \* |  | [optional] 
**fki_timezone_id** | **int** | The unique ID of the Timezone | [optional] 
**e_ezsignfolder_completion** | **field_e_ezsignfolder_completion_t \*** |  | 
**e_ezsignfolder_documentdependency** | **field_e_ezsignfolder_documentdependency_t \*** |  | [optional] 
**s_ezsignfoldertype_name_x** | **char \*** |  | [optional] 
**fki_billingentityinternal_id** | **int** | The unique ID of the Billingentityinternal. | [optional] 
**s_billingentityinternal_description_x** | **char \*** | The description of the Billingentityinternal in the language of the requester | [optional] 
**fki_ezsigntsarequirement_id** | **int** | The unique ID of the Ezsigntsarequirement.  Determine if a Time Stamping Authority should add a timestamp on each of the signature. Valid values:  |Value|Description| |-|-| |1|No. TSA Timestamping will requested. This will make all signatures a lot faster since no round-trip to the TSA server will be required. Timestamping will be made using eZsign server&#39;s time.| |2|Best effort. Timestamping from a Time Stamping Authority will be requested but is not mandatory. In the very improbable case it cannot be completed, the timestamping will be made using eZsign server&#39;s time. **Additional fee applies**| |3|Mandatory. Timestamping from a Time Stamping Authority will be requested and is mandatory. In the very improbable case it cannot be completed, the signature will fail and the user will be asked to retry. **Additional fee applies**| | [optional] 
**s_ezsigntsarequirement_description_x** | **char \*** | The description of the Ezsigntsarequirement in the language of the requester | [optional] 
**s_ezsignfolder_description** | **char \*** | The description of the Ezsignfolder | 
**t_ezsignfolder_note** | **char \*** | Note about the Ezsignfolder | [optional] 
**b_ezsignfolder_isdisposable** | **int** | If the Ezsigndocument can be disposed | [optional] 
**i_ezsignfolder_sendreminderfirstdays** | **int** | The number of days before the the first reminder sending | [optional] 
**i_ezsignfolder_sendreminderotherdays** | **int** | The number of days after the first reminder sending | [optional] 
**dt_ezsignfolder_delayedsenddate** | **char \*** | The date and time at which the Ezsignfolder will be sent in the future. | [optional] 
**dt_ezsignfolder_duedate** | **char \*** | The maximum date and time at which the Ezsignfolder can be signed. | [optional] 
**dt_ezsignfolder_sentdate** | **char \*** | The date and time at which the Ezsignfolder was sent the last time. | [optional] 
**dt_ezsignfolder_scheduledarchive** | **char \*** | The scheduled date and time at which the Ezsignfolder should be archived. | [optional] 
**dt_ezsignfolder_scheduleddispose** | **char \*** | The scheduled date at which the Ezsignfolder should be Disposed. | [optional] 
**e_ezsignfolder_step** | **field_e_ezsignfolder_step_t \*** |  | [optional] 
**dt_ezsignfolder_close** | **char \*** | The date and time at which the Ezsignfolder was closed. Either by applying the last signature or by completing it prematurely. | [optional] 
**t_ezsignfolder_message** | **char \*** | A custom text message that will be added to the email sent. | [optional] 
**obj_audit** | [**common_audit_t**](common_audit.md) \* |  | [optional] 
**s_ezsignfolder_externalid** | **char \*** | This field can be used to store an External ID from the client&#39;s system.  Anything can be stored in this field, it will never be evaluated by the eZmax system and will be returned AS-IS.  To store multiple values, consider using a JSON formatted structure, a URL encoded string, a CSV or any other custom format.  | [optional] 
**e_ezsignfolder_access** | **computed_e_ezsignfolder_access_t \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


