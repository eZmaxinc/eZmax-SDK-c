# systemconfiguration_response_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_systemconfiguration_id** | **int** | The unique ID of the Systemconfiguration | 
**fki_systemconfigurationtype_id** | **int** | The unique ID of the Systemconfigurationtype | 
**fki_branding_id** | **int** | The unique ID of the Branding | [optional] 
**s_systemconfigurationtype_description_x** | **char \*** | The description of the Systemconfigurationtype in the language of the requester | 
**e_systemconfiguration_newexternaluseraction** | **field_e_systemconfiguration_newexternaluseraction_t \*** |  | 
**e_systemconfiguration_language1** | **field_e_systemconfiguration_language1_t \*** |  | 
**e_systemconfiguration_language2** | **field_e_systemconfiguration_language2_t \*** |  | 
**e_systemconfiguration_ezsign** | **field_e_systemconfiguration_ezsign_t \*** |  | [optional] 
**e_systemconfiguration_ezsignofficeplan** | **field_e_systemconfiguration_ezsignofficeplan_t \*** |  | [optional] 
**b_systemconfiguration_ezsignpaidbyoffice** | **int** | Whether if Ezsign is paid by the company or not | [optional] 
**b_systemconfiguration_ezsignpersonnal** | **int** | Whether if we allow the creation of personal files in eZsign | 
**b_systemconfiguration_hascreditcardmerchant** | **int** | Whether there is a creditcard merchant configured or not | [optional] 
**b_systemconfiguration_isdisposalactive** | **int** | Whether is Disposal processus is active or not | [optional] 
**b_systemconfiguration_sspr** | **int** | Whether if we allow SSPR | 
**dt_systemconfiguration_readonlyexpirationstart** | **char \*** | The start date where the system will be in read only | [optional] 
**dt_systemconfiguration_readonlyexpirationend** | **char \*** | The end date where the system will be in read only | [optional] 
**obj_branding** | [**object_t**](object.md) \* | A Custom Branding Object | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


