# inscription_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_inscription_id** | **int** | The unique ID of the Inscription. | 
**fki_department_id** | **int** | The unique ID of the Department | [optional] 
**s_department_name_x** | **char \*** | The Name of the Department in the language of the requester | [optional] 
**fki_realestateboard_id** | **int** | The unique ID of the Realestateboard | 
**s_realestateboard_name_x** | **char \*** | The name of the Realestateboard | [optional] 
**fki_address_id** | **int** | The unique ID of the Address | 
**obj_address** | [**address_response_compound_t**](address_response_compound.md) \* |  | [optional] 
**fki_inscriptionbuildingtype_id** | **int** | The unique ID of the Inscriptionbuildingtype | 
**s_inscriptionbuildingtype_name_x** | **char \*** | The name of the Inscriptionbuildingtype in the language of the requester | [optional] 
**fki_inscriptiontype_id** | **int** | The unique ID of the Inscriptiontype | 
**s_inscriptiontype_name_x** | **char \*** | The name of the Inscriptiontype in the language of the requester | [optional] 
**fki_inscriptioncategory_id** | **int** | The unique ID of the Inscriptioncategory | 
**s_inscriptioncategory_name_x** | **char \*** | The name of the Inscriptioncategory in the language of the requester | [optional] 
**e_inscription_step** | **field_e_inscription_step_t \*** |  | 
**e_inscription_residence_type** | **field_e_inscription_residence_type_t \*** |  | 
**s_inscription_civicend** | **char \*** | The address civic end of the Inscription | 
**s_inscription_mls** | **char \*** | The mls of the Inscription | [optional] 
**s_inscription_contract** | **char \*** | The sale contract number | 
**i_inscription_sellerdeclaration** | **int** | The seller declaration number of the Inscription | 
**e_inscription_type** | **field_e_inscription_type_t \*** |  | 
**d_inscription_initialsaleprice** | **char \*** | The initial sale price of the Inscription | 
**d_inscription_saleprice** | **char \*** | The saleprice of the Inscription | 
**d_inscription_rentprice** | **char \*** | The rent price of the Inscription | 
**e_inscription_remunerationtype** | **field_e_inscription_remunerationtype_t \*** |  | 
**e_inscription_remunerationinscriptorsellertype** | **field_e_inscription_remunerationinscriptorsellertype_t \*** |  | 
**e_inscription_remunerationreferencetype** | **field_e_inscription_remunerationreferencetype_t \*** |  | 
**e_inscription_remunerationtotaltype** | **field_e_inscription_remunerationtotaltype_t \*** |  | 
**d_inscription_remuneration** | **char \*** | The remuneration amount of the Inscription | 
**d_inscription_remunerationinscriptorseller** | **char \*** | The remuneration amount for the inscriptor or seller of the Inscription | 
**d_inscription_remunerationreference** | **char \*** | The remuneration amount for the reference of the Inscription | 
**d_inscription_remunerationtotal** | **char \*** | The remuneration amount total of the Inscription | 
**d_inscription_mortgagesold** | **char \*** | The balande for the mortgage of the Inscription | 
**dt_inscription_date** | **char \*** | The date of the Inscription | [optional] 
**dt_inscription_cancellationdate** | **char \*** | The cancellation date of the Inscription | [optional] 
**dt_inscription_initialexpirationdate** | **char \*** | The initial expiration date of the Inscription | [optional] 
**dt_inscription_expirationdate** | **char \*** | The expiration date of the Inscription | [optional] 
**dt_inscription_notarydate** | **char \*** | The notary date of the Inscription | [optional] 
**dt_inscription_notaryentereddate** | **char \*** | The notary entered date of the Inscription | [optional] 
**t_inscription_cadastre** | **char \*** | The cadastre of the Inscription | 
**b_inscription_reference** | **int** | Whether if it&#39;s an reference | 
**b_inscription_inspection** | **int** | Whether the inscription can be acces by an inspector | 
**b_inscription_isactive** | **int** | Whether the inscription is active or not | 
**t_inscription_checklistnote** | **char \*** | The checklist note of the Inscription | 
**b_inscription_new** | **int** | Whether if it&#39;s an new | 
**b_inscription_homeowner** | **int** | Whether if it&#39;s an homeowner | 
**b_inscription_archived** | **int** | Whether the inscription is archived or not | 
**b_inscription_litigation** | **int** | Whether if it&#39;s an litigation | 
**b_inscription_repossession** | **int** | Whether if it&#39;s an repossession | 
**b_inscription_issolicitation** | **int** | Whether if it&#39;s a solicitation | 
**b_inscription_salebyowner** | **int** | Whether if it&#39;s a sale by the owner | 
**b_inscription_soldwithoutlegalwarranty** | **int** | Whether if it&#39;s sold without the legal warranty | 
**i_inscription_constructionyear** | **int** | The construction year of the Inscription | 
**i_inscription_unit** | **int** | The number of unit for the Inscription | 
**obj_audit** | [**common_audit_t**](common_audit.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


