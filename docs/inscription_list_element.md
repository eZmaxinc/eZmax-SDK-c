# inscription_list_element_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_inscription_id** | **int** | The unique ID of the Inscription. | 
**pki_inscriptionnotauthenticated_id** | **int** | The unique ID of the Inscriptionnotauthenticated. | [optional] 
**fki_inscriptiontype_id** | **int** | The unique ID of the Inscriptiontype | 
**s_inscriptiontype_name_x** | **char \*** | The name of the Inscriptiontype in the language of the requester | 
**e_inscription_step** | **field_e_inscription_step_t \*** |  | 
**s_inscription_civicend** | **char \*** | The civicend of the Inscription | 
**s_inscription_mls** | **char \*** | The mls of the Inscription | [optional] 
**d_inscription_saleprice** | **char \*** | The saleprice of the Inscription | 
**d_inscription_rentprice** | **char \*** | The rentprice of the Inscription | 
**dt_inscription_date** | **char \*** | The date of the Inscription | [optional] 
**dt_inscription_expirationdate** | **char \*** | The expirationdate of the Inscription | [optional] 
**dt_inscription_notarydate** | **char \*** | The notarydate of the Inscription | [optional] 
**b_inscription_isactive** | **int** | Whether the inscription is active or not | 
**b_inscription_archived** | **int** | Whether the inscription is archived or not | 
**b_inscription_inspection** | **int** | Whether the inscription can be acces by an inspector | [optional] 
**dt_inscriptionnotauthenticated_notaryscheduledate** | **char \*** | The notaryscheduledate of the Inscriptionnotauthenticated | [optional] 
**dt_inscriptionnotauthenticated_transactiondate** | **char \*** | The transactiondate of the Inscriptionnotauthenticated | [optional] 
**dt_inscriptionnotauthenticated_transactiondate_real** | **char \*** | The transactiondatereal of the Inscriptionnotauthenticated | [optional] 
**b_inscriptionnotauthenticated_conditional** | **int** | Whether the inscriptionnotauthenticated is conditional | [optional] 
**b_inscriptionnotauthenticated_isactive** | **int** | Whether the inscriptionnotauthenticated is active or not | [optional] 
**s_address_civic** | **char \*** | The Civic number. | [optional] 
**s_address_street** | **char \*** | The Street Name | [optional] 
**s_address_suite** | **char \*** | The Suite or appartment number | [optional] 
**s_address_city** | **char \*** | The City name | [optional] 
**s_address_zip** | **char \*** | The Postal/Zip Code  The value must be entered without spaces | [optional] 
**s_province_name_x** | **char \*** | The name of the Province in the language of the requester | [optional] 
**s_country_name_x** | **char \*** | The name of the Country in the language of the requester | [optional] 
**i_inscriptionnotauthenticated_canceled** | **int** | The numbre of inscriptionnotauthenticated was canceled in this Inscription | 
**b_allowed_copyintoinscriptionedm** | **int** | Whether we are allowed to copy into the Inscription EDM | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


