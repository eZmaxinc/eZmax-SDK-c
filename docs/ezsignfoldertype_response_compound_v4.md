# ezsignfoldertype_response_compound_v4_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsignfoldertype_id** | **int** | The unique ID of the Ezsignfoldertype. | 
**obj_ezsignfoldertype_name** | [**multilingual_ezsignfoldertype_name_t**](multilingual_ezsignfoldertype_name.md) \* |  | 
**fki_branding_id** | **int** | The unique ID of the Branding | 
**fki_billingentityinternal_id** | **int** | The unique ID of the Billingentityinternal. | [optional] 
**fki_ezsigntsarequirement_id** | **int** | The unique ID of the Ezsigntsarequirement.  Determine if a Time Stamping Authority should add a timestamp on each of the signature. Valid values:  |Value|Description| |-|-| |1|No. TSA Timestamping will requested. This will make all signatures a lot faster since no round-trip to the TSA server will be required. Timestamping will be made using eZsign server&#39;s time.| |2|Best effort. Timestamping from a Time Stamping Authority will be requested but is not mandatory. In the very improbable case it cannot be completed, the timestamping will be made using eZsign server&#39;s time. **Additional fee applies**| |3|Mandatory. Timestamping from a Time Stamping Authority will be requested and is mandatory. In the very improbable case it cannot be completed, the signature will fail and the user will be asked to retry. **Additional fee applies**| | [optional] 
**fki_font_id_annotation** | **int** | The unique ID of the Font | [optional] 
**fki_font_id_formfield** | **int** | The unique ID of the Font | [optional] 
**fki_font_id_signature** | **int** | The unique ID of the Font | [optional] 
**fki_pdfalevel_id_convert** | **int** | The unique ID of the Pdfalevel | [optional] 
**e_ezsignfoldertype_signaturedatedisplay** | **field_e_ezsignfoldertype_signaturedatedisplay_t \*** |  | 
**s_ezsignfoldertype_signaturedatecustomformat** | **char \*** | The custom date format to use  You can use the codes below and they will be replaced at signature time. Text values like month and day names will be rendered in the proper language. Other text will be left as-is.  The codes examples below are based on the following datetime: Thursday, January 6, 2022 at 08:07:09 EST  For example, the format \&quot;Signature date: {MM}/{DD}/{YYYY} {hh}:{mm}\&quot; would become \&quot;Signature date: 01/06/2022 08:07\&quot;  **Year**  | Code | Example | | - | - | | {YYYY} | 2022 | | {YY} | 22 |  **Month**  | Code | Example | | - | - | | {MonthCapitalize} | Janvier | | {Month} | janvier | | {MM} | 01 | | {M} | 1 |  **Day**  | Code | Example | | - | - | | {DayCapitalize} | Jeudi | | {Day} | jeudi | | {DD} | 06 | | {D} | 6 |  **Hour**  | Code | Example | | - | - | | {hh} | 08 |  **Minute**  | Code | Example | | - | - | | {mm} | 07 |  **Second**  | Code | Example | | - | - | | {ss} | 09 |        **Timezone**  | Code | Example | | - | - | | {Z} | EST |       **Time**  | Code | Example | | - | - | | {Time} | 08:07:09 |   | {TimeZ} | 08:07:09 EST |     **Date**  | Code | Example | | - | - | | {Date} | 2022-01-06 |   | {DateText} | 1er Janvier 2022 |  **Full**  | Code | Example | | - | - | | {DateTime} | 2022-01-06 08:07:09 |   | {DateTimeZ} | 2022-01-06 08:07:09 EST |  | [optional] 
**e_ezsignfoldertype_documentdependency** | **field_e_ezsignfoldertype_documentdependency_t \*** |  | [optional] 
**s_branding_description_x** | **char \*** | The Description of the Branding in the language of the requester | 
**s_billingentityinternal_description_x** | **char \*** | The description of the Billingentityinternal in the language of the requester | [optional] 
**s_ezsigntsarequirement_description_x** | **char \*** | The description of the Ezsigntsarequirement in the language of the requester | [optional] 
**s_email_address_signed** | **char \*** | The email address. | [optional] 
**s_email_address_summary** | **char \*** | The email address. | [optional] 
**e_ezsignfoldertype_pdfarequirement** | **field_e_ezsignfoldertype_pdfarequirement_t \*** |  | [optional] 
**e_ezsignfoldertype_pdfanoncompliantaction** | **field_e_ezsignfoldertype_pdfanoncompliantaction_t \*** |  | [optional] 
**e_ezsignfoldertype_privacylevel** | **field_e_ezsignfoldertype_privacylevel_t \*** |  | 
**e_ezsignfoldertype_documentmerge** | **field_e_ezsignfoldertype_documentmerge_t \*** |  | [optional] 
**i_ezsignfoldertype_fontsizeannotation** | **int** | Font size for annotations | [optional] 
**i_ezsignfoldertype_fontsizeformfield** | **int** | Font size for form fields | [optional] 
**i_ezsignfoldertype_sendreminderfirstdays** | **int** | The number of days before the first reminder sending | [optional] 
**i_ezsignfoldertype_sendreminderotherdays** | **int** | The number of days after the first reminder sending | [optional] 
**i_ezsignfoldertype_archivaldays** | **int** | The number of days before the archival of Ezsignfolders created using this Ezsignfoldertype | 
**e_ezsignfoldertype_disposal** | **field_e_ezsignfoldertype_disposal_t \*** |  | 
**e_ezsignfoldertype_completion** | **field_e_ezsignfoldertype_completion_t \*** |  | 
**i_ezsignfoldertype_disposaldays** | **int** | The number of days after the archival before the disposal of the Ezsignfolder | [optional] 
**i_ezsignfoldertype_deadlinedays** | **int** | The number of days to get all Ezsignsignatures | 
**b_ezsignfoldertype_prematurelyendautomatically** | **int** | Wheter if document will be ended prematurely after Ezsignfolder expires. | [optional] 
**i_ezsignfoldertype_prematurelyendautomaticallydays** | **int** | Number of days between Ezsignfolder expiration and automatic prematurely end of Ezsigndocuments. | [optional] 
**b_ezsignfoldertype_automaticsignature** | **int** | Whether we allow the automatic signature by an User | [optional] 
**b_ezsignfoldertype_delegate** | **int** | Wheter if delegation of signature is allowed to another user or not | [optional] 
**b_ezsignfoldertype_discussion** | **int** | Wheter if creating a new Discussion is allowed or not | [optional] 
**b_ezsignfoldertype_logrecipientinproof** | **int** | Whether we log recipient of signed document in proof | [optional] 
**b_ezsignfoldertype_reassignezsignsigner** | **int** | Wheter if Reassignment of signature is allowed by a signatory to another signatory or not | [optional] 
**b_ezsignfoldertype_reassignuser** | **int** | Wheter if Reassignment of signature is allowed by a user to a signatory or another user or not | [optional] 
**b_ezsignfoldertype_reassigngroup** | **int** | Wheter if Reassignment of signatures of the groups to which the user belongs is authorized by a user to himself | [optional] 
**b_ezsignfoldertype_senddocumentmergetoemail** | **int** | Whether we send the merged documents in the email to external recipient | [optional] 
**b_ezsignfoldertype_senddocumentmergetoezsignsigner** | **int** | Whether we send the merged documents in the email to Ezsignsigner | [optional] 
**b_ezsignfoldertype_senddocumentmergetoreceivealldocument** | **int** | Whether we send the merged documents in the email to user and Ezsignsigner who receive all documents. | [optional] 
**b_ezsignfoldertype_senddocumentmergetouser** | **int** | Whether we send the merged documents in the email to User | [optional] 
**b_ezsignfoldertype_sendsignedtoezsignsigner** | **int** | Whether we send an email to Ezsignsigner  when document is completed | [optional] 
**b_ezsignfoldertype_sendsignedtouser** | **int** | Whether we send an email to User who signed when document is completed | [optional] 
**b_ezsignfoldertype_sendattachmentezsignsigner** | **int** | Whether we send the Ezsigndocument in the email to Ezsignsigner | [optional] 
**b_ezsignfoldertype_sendsignatureattachmentezsignsigner** | **int** | Whether we send the attachments contained in the Ezsignsignatures in the email to Ezsignsigner | [optional] 
**b_ezsignfoldertype_sendsignatureattachment** | **int** | Whether we send the attachments contained in the Ezsignsignatures in the email to external recipient | [optional] 
**b_ezsignfoldertype_sendproofezsignsigner** | **int** | Whether we send the proof in the email to Ezsignsigner | [optional] 
**b_ezsignfoldertype_sendattachmentuser** | **int** | Whether we send the Ezsigndocument in the email to User | [optional] 
**b_ezsignfoldertype_sendsignatureattachmentuser** | **int** | Whether we send the attachments contained in the Ezsignsignatures in the email to User | [optional] 
**b_ezsignfoldertype_sendproofuser** | **int** | Whether we send the proof in the email to User | [optional] 
**b_ezsignfoldertype_sendproofemail** | **int** | Whether we send the proof in the email to external recipient | [optional] 
**b_ezsignfoldertype_allowdownloadattachmentezsignsigner** | **int** | Whether we allow the Ezsigndocument to be downloaded by an Ezsignsigner | [optional] 
**b_ezsignfoldertype_allowdownloadsignatureattachmentezsignsigner** | **int** | Whether we allow the attachments in the Ezsignsignatures to be downloaded by an Ezsignsigner | [optional] 
**b_ezsignfoldertype_allowdownloadproofezsignsigner** | **int** | Whether we allow the proof to be downloaded by an Ezsignsigner | [optional] 
**b_ezsignfoldertype_sendproofreceivealldocument** | **int** | Whether we send the proof to user and Ezsignsigner who receive all documents. | [optional] 
**b_ezsignfoldertype_sendsignatureattachmentreceivealldocument** | **int** | Whether we send the attachments contained in the Ezsignsignatures to user and Ezsignsigner who receive all documents. | [optional] 
**b_ezsignfoldertype_sendsignedtodocumentowner** | **int** | Whether we send the signed Ezsigndocument to the Ezsigndocument&#39;s owner | 
**b_ezsignfoldertype_sendsignedtofolderowner** | **int** | Whether we send the signed Ezsigndocument to the Ezsignfolder&#39;s owner | 
**b_ezsignfoldertype_sendsignedtofullgroup** | **int** | Whether we send the signed Ezsigndocument to the Usergroup that has acces to all Ezsignfolders | [optional] 
**b_ezsignfoldertype_sendsignedtolimitedgroup** | **int** | THIS FIELD WILL BE DELETED. Whether we send the signed Ezsigndocument to the Usergroup that has acces to only their own Ezsignfolders | [optional] 
**b_ezsignfoldertype_sendsignedtocolleague** | **int** | Whether we send the signed Ezsigndocument to the colleagues | 
**b_ezsignfoldertype_sendsummarytodocumentowner** | **int** | Whether we send the summary to the Ezsigndocument&#39;s owner | 
**b_ezsignfoldertype_sendsummarytofolderowner** | **int** | Whether we send the summary to the Ezsignfolder&#39;s owner | 
**b_ezsignfoldertype_sendsummarytofullgroup** | **int** | Whether we send the summary to the Usergroup that has acces to all Ezsignfolders | [optional] 
**b_ezsignfoldertype_sendsummarytolimitedgroup** | **int** | Whether we send the summary to the Usergroup that has acces to only their own Ezsignfolders | [optional] 
**b_ezsignfoldertype_sendsummarytocolleague** | **int** | Whether we send the summary to the colleagues | 
**e_ezsignfoldertype_signeraccess** | **field_e_ezsignfoldertype_signeraccess_t \*** |  | [optional] 
**b_ezsignfoldertype_isactive** | **int** | Whether the Ezsignfoldertype is active or not | 
**a_fki_pdfalevel_id** | **list_t \*** |  | [optional] 
**a_obj_userlogintype** | [**list_t**](userlogintype_response.md) \* |  | 
**a_obj_usergroup_all** | [**list_t**](usergroup_response.md) \* |  | [optional] 
**a_obj_usergroup_restricted** | [**list_t**](usergroup_response.md) \* |  | [optional] 
**a_obj_usergroup_template** | [**list_t**](usergroup_response.md) \* |  | [optional] 
**obj_audit** | [**common_audit_t**](common_audit.md) \* |  | 
**a_fki_user_id_signed** | **list_t \*** |  | [optional] 
**a_fki_user_id_summary** | **list_t \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


