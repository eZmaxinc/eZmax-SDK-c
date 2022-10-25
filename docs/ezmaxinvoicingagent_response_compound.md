# ezmaxinvoicingagent_response_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezmaxinvoicingagent_id** | **int** | The unique ID of the Ezmaxinvoicingagent | [optional] 
**fki_ezmaxinvoicing_id** | **int** | The unique ID of the Ezmaxinvoicing | [optional] 
**fki_billingentityinternal_id** | **int** | The unique ID of the Billingentityinternal. | 
**s_billingentityinternal_description_x** | **char \*** | The description of the Billingentityinternal in the language of the requester | 
**fki_agent_id** | **int** | The unique ID of the Agent. | [optional] 
**fki_broker_id** | **int** | The unique ID of the Broker. | [optional] 
**i_ezmaxinvoicingagent_session** | **int** | The number of sessions | 
**i_ezmaxinvoicingagent_cloned** | **int** | The number of times this user was cloned | 
**i_ezmaxinvoicingagent_invoice** | **int** | The number of invoices | 
**i_ezmaxinvoicingagent_inscription** | **int** | The number of inscriptions | 
**i_ezmaxinvoicingagent_inscriptionactive** | **int** | The number of active inscriptions | 
**i_ezmaxinvoicingagent_sale** | **int** | The number of sales | 
**i_ezmaxinvoicingagent_otherincome** | **int** | The number of otherincomes | 
**i_ezmaxinvoicingagent_commissioncalculation** | **int** | The number of commission calculations | 
**i_ezmaxinvoicingagent_ezsigndocument** | **int** | The number of ezsign documents | 
**b_ezmaxinvoicingagent_ezsignaccount** | **int** | Whether the agent has an eZsign account | 
**b_ezmaxinvoicingagent_billableezmax** | **int** | Whether it is billable for eZmax | 
**e_ezmaxinvoicingagent_variationezmax** | **field_e_ezmaxinvoicingagent_variationezmax_t \*** |  | 
**b_ezmaxinvoicingagent_billableezsign** | **int** | Whether it is billable for eZsign | 
**e_ezmaxinvoicingagent_variationezsign** | **field_e_ezmaxinvoicingagent_variationezsign_t \*** |  | 
**obj_contact_name** | [**custom_contact_name_response_t**](custom_contact_name_response.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


