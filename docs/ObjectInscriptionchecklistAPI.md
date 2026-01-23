# ObjectInscriptionchecklistAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectInscriptionchecklistAPI_inscriptionchecklistGetAutocompleteV3**](ObjectInscriptionchecklistAPI.md#ObjectInscriptionchecklistAPI_inscriptionchecklistGetAutocompleteV3) | **GET** /3/object/inscriptionchecklist/getAutocomplete/{sSelector} | Retrieve Inscriptionchecklists and IDs


# **ObjectInscriptionchecklistAPI_inscriptionchecklistGetAutocompleteV3**
```c
// Retrieve Inscriptionchecklists and IDs
//
// Get the list of Inscriptionchecklist to be used in a dropdown or autocomplete control.
//
inscriptionchecklist_get_autocomplete_v3_response_t* ObjectInscriptionchecklistAPI_inscriptionchecklistGetAutocompleteV3(apiClient_t *apiClient, ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_sSelector_e sSelector, char *fkiBuyercontractID, char *fkiInscriptionID, char *fkiInscriptionnotauthenticatedID, char *fkiInscriptiontempID, char *fkiAgentID, char *fkiBrokerID, char *fkiOtherincomeID, char *fkiRejectedoffertopurchaseID, ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_sSelector_e** | The type of Inscriptionchecklist to return | 
**fkiBuyercontractID** | **char \*** | Specify which Buyercontract we want to display. | [optional] 
**fkiInscriptionID** | **char \*** | Specify which Inscription we want to display. | [optional] 
**fkiInscriptionnotauthenticatedID** | **char \*** | Specify which Inscriptionnotauthenticated we want to display. | [optional] 
**fkiInscriptiontempID** | **char \*** | Specify which Inscriptiontemp we want to display. | [optional] 
**fkiAgentID** | **char \*** | Specify which Agent we want to display. | [optional] 
**fkiBrokerID** | **char \*** | Specify which Broker we want to display. | [optional] 
**fkiOtherincomeID** | **char \*** | Specify which Otherincome we want to display. | [optional] 
**fkiRejectedoffertopurchaseID** | **char \*** | Specify which Rejectedoffertopurchase we want to display. | [optional] 
**eFilterActive** | **ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[inscriptionchecklist_get_autocomplete_v3_response_t](inscriptionchecklist_get_autocomplete_v3_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

