# inscriptionnotauthenticated_response_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_inscriptionnotauthenticated_id** | **int** | The unique ID of the Inscriptionnotauthenticated. | 
**fki_inscription_id** | **int** | The unique ID of the Inscription. | 
**fki_department_id** | **int** | The unique ID of the Department | [optional] 
**s_department_name_x** | **char \*** | The Name of the Department in the language of the requester | [optional] 
**fki_financialinstitution_id** | **int** | The unique ID of the Financialinstitution | [optional] 
**s_financialinstitution_name_x** | **char \*** | The name of the Financialinstitution in the language of the requester | [optional] 
**fki_buyercontract_id** | **int** | The unique ID of the Buyercontract | [optional] 
**s_buyercontract_contract** | **char \*** | The number of the Buyercontract | [optional] 
**fki_mortgagesupplier_id** | **int** | The unique ID of the Mortgagesupplier | [optional] 
**s_mortgagesupplier_name_x** | **char \*** | The name of the Mortagesupplier in the language of the requester | [optional] 
**fki_taxassignment_id** | **int** | The unique ID of the Taxassignment.  Valid values:  |Value|Description| |-|-| |1|No tax| |2|GST| |3|HST (ON)| |4|HST (NB)| |5|HST (NS)| |6|HST (NL)| |7|HST (PE)| |8|GST + QST (QC)| |9|GST + QST (QC) Non-Recoverable| |10|GST + PST (BC)| |11|GST + PST (SK)| |12|GST + RST (MB)| |13|GST + PST (BC) Non-Recoverable| |14|GST + PST (SK) Non-Recoverable| |15|GST + RST (MB) Non-Recoverable| | 
**s_taxassignment_description_x** | **char \*** | The description of the Taxassignment  in the language of the requester | [optional] 
**dt_inscriptionnotauthenticated_transactiondate** | **char \*** | The transaction date of the Inscriptionnotauthenticated | [optional] 
**dt_inscriptionnotauthenticated_transactiondate_real** | **char \*** | The real transactiondate of the Inscriptionnotauthenticated | [optional] 
**dt_inscriptionnotauthenticated_depositdate** | **char \*** | The deposit date of the Inscriptionnotauthenticated | [optional] 
**e_inscriptionnotauthenticated_type** | **field_e_inscriptionnotauthenticated_type_t \*** |  | 
**d_inscriptionnotauthenticated_mortgageloan** | **char \*** | The amount of the mortgage loan of the Inscriptionnotauthenticated | 
**et_inscriptionnotauthenticated_mortgagetype** | **field_et_inscriptionnotauthenticated_mortgagetype_t \*** |  | 
**d_inscriptionnotauthenticated_transactionprice** | **char \*** | The transaction price of the Inscriptionnotauthenticated | 
**e_inscriptionnotauthenticated_remunerationtype** | **field_e_inscriptionnotauthenticated_remunerationtype_t \*** |  | 
**d_inscriptionnotauthenticated_remuneration** | **char \*** | The amount for the remuneration of the Inscriptionnotauthenticated | 
**d_inscriptionnotauthenticated_remunerationsubtotal** | **char \*** | The subtotal for the remuneration of the Inscriptionnotauthenticated | 
**d_inscriptionnotauthenticated_remunerationtotal** | **char \*** | The total for the remuneration of the Inscriptionnotauthenticated | 
**dt_inscriptionnotauthenticated_cancellationdate** | **char \*** | The cancellation date of the Inscriptionnotauthenticated | [optional] 
**dt_inscriptionnotauthenticated_possessiondate** | **char \*** | The possession date of the Inscriptionnotauthenticated | [optional] 
**s_inscriptionnotauthenticated_offertopurchasenumber** | **char \*** | The offer to purchase number of the Inscriptionnotauthenticated | 
**dt_inscriptionnotauthenticated_notaryscheduledate** | **char \*** | The notary schedule date of the Inscriptionnotauthenticated | [optional] 
**dt_inscriptionnotauthenticated_financingscheduledate** | **char \*** | The financing schedule date of the Inscriptionnotauthenticated | [optional] 
**b_inscriptionnotauthenticated_conditional** | **int** | Whether the inscriptionnotauthenticated is conditional | 
**b_inscriptionnotauthenticated_mortgageisreferenced** | **int** | Whether if the mortgage is referenced | 
**b_inscriptionnotauthenticated_homeowner** | **int** | Whether if it&#39;s an home owner | 
**t_inscriptionnotauthenticated_conditions** | **char \*** | The conditions of the Inscriptionnotauthenticated | 
**dt_inscriptionnotauthenticated_conditiondeadlinedate** | **char \*** | The condition deadline date of the Inscriptionnotauthenticated | [optional] 
**i_inscriptionnotauthenticated_order** | **int** | The order of the Inscriptionnotauthenticated | 
**b_inscriptionnotauthenticated_isactive** | **int** | Whether the inscriptionnotauthenticated is active or not | 
**e_inscriptionnotauthenticated_residence_type** | **field_e_inscriptionnotauthenticated_residence_type_t \*** |  | 
**t_inscriptionnotauthenticated_checklistnote** | **char \*** | The checklist note of the Inscriptionnotauthenticated | 
**d_inscriptionnotauthenticated_selleronlyretribution** | **char \*** | The amount retribution for the seller only of the Inscriptionnotauthenticated | 
**b_inscriptionnotauthenticated_draft** | **int** | Whether the Inscriptionnotauthenticated is a draft or not | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


