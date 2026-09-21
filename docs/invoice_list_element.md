# invoice_list_element_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_invoice_id** | **int** | The unique ID of the Invoice. | 
**fki_agent_id** | **int** | The unique ID of the Agent. | [optional] 
**fki_broker_id** | **int** | The unique ID of the Broker. | [optional] 
**fki_customer_id** | **int** | The unique ID of the Customer. | [optional] 
**fki_period_id** | **int** | The unique ID of the Period | 
**s_period_yyyymm** | **char \*** | The YYYYMM of the Period | [optional] 
**b_invoice_ispaid** | **int** | Whether if it&#39;s an ispaid | 
**d_invoice_total** | **char \*** | The total of the Invoice | 
**d_invoice_paid** | **char \*** | The paid of the Invoice | 
**d_invoice_balance** | **char \*** | The balance of the Invoice | [optional] 
**dt_invoice_date** | **char \*** | The date of the Invoice | 
**e_invoice_type** | **field_e_invoice_type_t \*** |  | 
**s_invoice_number** | **char \*** | The number of Invoice | [optional] 
**s_invoice_recipient** | **char \*** | The recipient of Invoice | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


