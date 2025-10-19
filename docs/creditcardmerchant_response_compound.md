# creditcardmerchant_response_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_creditcardmerchant_id** | **int** | The unique ID of the Creditcardmerchant | 
**fki_bankaccount_id** | **int** | The unique ID of the Bankaccount | [optional] 
**fki_language_id** | **int** | The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English| | 
**s_language_name_x** | **char \*** | The Name of the Language in the language of the requester | 
**fki_currency_id** | **int** | The unique ID of the Currency. | 
**s_currency_description_x** | **char \*** | The description of the Currency in the language of the requester | 
**s_bankaccount_bankname** | **char \*** | The name of the bank | [optional] 
**b_creditcardmerchant_denyvisa** | **int** | Whether if visa are denied | 
**b_creditcardmerchant_denymastercard** | **int** | Whether if mastercard are denied | 
**b_creditcardmerchant_denyamex** | **int** | Whether if amex are denied | 
**b_creditcardmerchant_isactive** | **int** | Whether the creditcardmerchant is active or not | 
**s_creditcardmerchant_description** | **char \*** | The description of the Creditcardmerchant | 
**s_creditcardmerchant_storeid** | **char \*** | The storeid of the Creditcardmerchant | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


