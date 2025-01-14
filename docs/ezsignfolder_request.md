# ezsignfolder_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsignfolder_id** | **int** | The unique ID of the Ezsignfolder | [optional] 
**fki_ezsignfoldertype_id** | **int** | The unique ID of the Ezsignfoldertype. | 
**fki_timezone_id** | **int** | The unique ID of the Timezone | [optional] 
**fki_ezsigntsarequirement_id** | **int** | The unique ID of the Ezsigntsarequirement.  Determine if a Time Stamping Authority should add a timestamp on each of the signature. Valid values:  |Value|Description| |-|-| |1|No. TSA Timestamping will requested. This will make all signatures a lot faster since no round-trip to the TSA server will be required. Timestamping will be made using eZsign server&#39;s time.| |2|Best effort. Timestamping from a Time Stamping Authority will be requested but is not mandatory. In the very improbable case it cannot be completed, the timestamping will be made using eZsign server&#39;s time. **Additional fee applies**| |3|Mandatory. Timestamping from a Time Stamping Authority will be requested and is mandatory. In the very improbable case it cannot be completed, the signature will fail and the user will be asked to retry. **Additional fee applies**| | [optional] 
**s_ezsignfolder_description** | **char \*** | The description of the Ezsignfolder | 
**t_ezsignfolder_note** | **char \*** | Note about the Ezsignfolder | [optional] 
**e_ezsignfolder_sendreminderfrequency** | **field_e_ezsignfolder_sendreminderfrequency_t \*** |  | 
**s_ezsignfolder_externalid** | **char \*** | This field can be used to store an External ID from the client&#39;s system.  Anything can be stored in this field, it will never be evaluated by the eZmax system and will be returned AS-IS.  To store multiple values, consider using a JSON formatted structure, a URL encoded string, a CSV or any other custom format.  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


