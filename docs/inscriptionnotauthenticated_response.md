# inscriptionnotauthenticated_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_inscriptionnotauthenticated_id** | **int** | The unique ID of the Inscriptionnotauthenticated. | 
**fki_company_id** | **int** | The unique ID of the Company | 
**s_company_name_x** | **char \*** | The Name of the Company in the language of the requester | [optional] 
**fki_inscription_id** | **int** | The unique ID of the Inscription. | 
**fki_department_id** | **int** | The unique ID of the Department | 
**s_department_name_x** | **char \*** | The Name of the Department in the language of the requester | [optional] 
**fki_financialinstitution_id** | **int** | The unique ID of the Financialinstitution | 
**s_financialinstitution_name_x** | **char \*** | The name of the Financialinstitution in the language of the requester | [optional] 
**fki_buyercontract_id** | **int** | The unique ID of the Buyercontract | 
**s_buyercontract_contract** | **char \*** | The number of the Buyercontract | [optional] 
**fki_mortgagesupplier_id** | **int** | The unique ID of the Mortgagesupplier | 
**s_mortgagesupplier_name_x** | **char \*** | The name of the Mortagesupplier in the language of the requester | [optional] 
**fki_taxassignment_id** | **int** | The unique ID of the Taxassignment.  Valid values:  |Value|Description| |-|-| |1|No tax| |2|GST| |3|HST (ON)| |4|HST (NB)| |5|HST (NS)| |6|HST (NL)| |7|HST (PE)| |8|GST + QST (QC)| |9|GST + QST (QC) Non-Recoverable| |10|GST + PST (BC)| |11|GST + PST (SK)| |12|GST + RST (MB)| |13|GST + PST (BC) Non-Recoverable| |14|GST + PST (SK) Non-Recoverable| |15|GST + RST (MB) Non-Recoverable| | 
**s_taxassignment_description_x** | **char \*** | The description of the Taxassignment  in the language of the requester | [optional] 
**dt_inscriptionnotauthenticated_transactiondate** | **char \*** | The transactiondate of the Inscriptionnotauthenticated | 
**dt_inscriptionnotauthenticated_transactiondate_real** | **char \*** | The transactiondatereal of the Inscriptionnotauthenticated | 
**dt_inscriptionnotauthenticated_depositdate** | **char \*** | The depositdate of the Inscriptionnotauthenticated | 
**e_inscriptionnotauthenticated_type** | **field_e_inscriptionnotauthenticated_type_t \*** |  | 
**d_inscriptionnotauthenticated_mortgageloan** | **char \*** | The mortgageloan of the Inscriptionnotauthenticated | 
**et_inscriptionnotauthenticated_mortgagetype** | **field_et_inscriptionnotauthenticated_mortgagetype_t \*** |  | 
**d_inscriptionnotauthenticated_transactionprice** | **char \*** | The transactionprice of the Inscriptionnotauthenticated | 
**e_inscriptionnotauthenticated_remunerationtype** | **field_e_inscriptionnotauthenticated_remunerationtype_t \*** |  | 
**d_inscriptionnotauthenticated_remuneration** | **char \*** | The remuneration of the Inscriptionnotauthenticated | 
**d_inscriptionnotauthenticated_remunerationsubtotal** | **char \*** | The remunerationsubtotal of the Inscriptionnotauthenticated | 
**d_inscriptionnotauthenticated_remunerationtotal** | **char \*** | The remunerationtotal of the Inscriptionnotauthenticated | 
**dt_inscriptionnotauthenticated_cancellationdate** | **char \*** | The cancellationdate of the Inscriptionnotauthenticated | 
**dt_inscriptionnotauthenticated_possessiondate** | **char \*** | The possessiondate of the Inscriptionnotauthenticated | 
**s_inscriptionnotauthenticated_offertopurchasenumber** | **char \*** | The Offer to purchase number | 
**dt_inscriptionnotauthenticated_notaryscheduledate** | **char \*** | The notaryscheduledate of the Inscriptionnotauthenticated | 
**dt_inscriptionnotauthenticated_financingscheduledate** | **char \*** | The financingscheduledate of the Inscriptionnotauthenticated | 
**b_inscriptionnotauthenticated_conditional** | **int** | Whether the inscriptionnotauthenticated is conditional | 
**b_inscriptionnotauthenticated_mortgageisreferenced** | **int** | Whether if it&#39;s an mortgageisreferenced | 
**b_inscriptionnotauthenticated_homeowner** | **int** | Whether if it&#39;s an homeowner | 
**t_inscriptionnotauthenticated_conditions** | **char \*** | The conditions of the Inscriptionnotauthenticated | 
**dt_inscriptionnotauthenticated_conditiondeadlinedate** | **char \*** | The conditiondeadlinedate of the Inscriptionnotauthenticated | 
**i_inscriptionnotauthenticated_order** | **int** | The order of the Inscriptionnotauthenticated | 
**b_inscriptionnotauthenticated_isactive** | **int** | Whether the inscriptionnotauthenticated is active or not | 
**e_inscriptionnotauthenticated_residence_type** | **field_e_inscriptionnotauthenticated_residence_type_t \*** |  | 
**t_inscriptionnotauthenticated_checklistnote** | **char \*** | The checklistnote of the Inscriptionnotauthenticated | 
**d_inscriptionnotauthenticated_selleronlyretribution** | **char \*** | The selleronlyretribution of the Inscriptionnotauthenticated | 
**b_inscriptionnotauthenticated_draft** | **int** | Whether the inscriptionnotauthenticated is a draft or not | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


