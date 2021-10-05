# ezsigndocument_get_words_positions_v1_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**e_get** | **ezmax_api_definition_ezsigndocument_get_words_positions_v1_request_EGET_e** | Specify if you want to retrieve *All* words or specific *Words* from the document. If you specify *Words*, you must send the list of words to search for in *a_sWord*. | 
**b_word_case_sensitive** | **int** | IF *true*, words will be searched case-sensitive and results will be returned case-sensitive. IF *false*, words will be searched case-insensitive and results will be returned case-insensitive. | 
**a_s_word** | **list_t \*** | Array of words to find in the document | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


