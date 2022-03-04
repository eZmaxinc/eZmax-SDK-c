# franchisereferalincome_request_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_franchisereferalincome_id** | **int** | The unique ID of the Franchisereferalincome | [optional] 
**fki_franchisebroker_id** | **int** | The unique ID of the Franchisebroker | 
**fki_franchisereferalincomeprogram_id** | **int** | The unique ID of the Franchisereferalincomeprogram | 
**fki_period_id** | **int** | The unique ID of the Period | 
**d_franchisereferalincome_loan** | **char \*** | The loan amount | 
**d_franchisereferalincome_franchiseamount** | **char \*** | The amount that will be given to the franchise | 
**d_franchisereferalincome_franchisoramount** | **char \*** | The amount that will be kept by the franchisor | 
**d_franchisereferalincome_agentamount** | **char \*** | The amount that will be given to the agent | 
**dt_franchisereferalincome_disbursed** | **char \*** | The date the amounts were disbursed | 
**t_franchisereferalincome_comment** | **char \*** | Comment about the transaction | 
**fki_franchiseoffice_id** | **int** | The unique ID of the Franchisereoffice | 
**s_franchisereferalincome_remoteid** | **char \*** |  | 
**obj_address** | [**address_request_t**](address_request.md) \* |  | 
**a_obj_contact** | [**list_t**](contact_request_compound.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


