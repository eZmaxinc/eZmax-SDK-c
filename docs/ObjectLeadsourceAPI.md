# ObjectLeadsourceAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectLeadsourceAPI_leadsourceGetAutocompleteV2**](ObjectLeadsourceAPI.md#ObjectLeadsourceAPI_leadsourceGetAutocompleteV2) | **GET** /2/object/leadsource/getAutocomplete/{sSelector} | Retrieve Leadsources and IDs


# **ObjectLeadsourceAPI_leadsourceGetAutocompleteV2**
```c
// Retrieve Leadsources and IDs
//
// Get the list of Leadsource to be used in a dropdown or autocomplete control.
//
leadsource_get_autocomplete_v2_response_t* ObjectLeadsourceAPI_leadsourceGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_leadsourceGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_leadsourceGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_leadsourceGetAutocompleteV2_sSelector_e** | The type of Leadsources to return | 
**eFilterActive** | **ezmax_api_definition__full_leadsourceGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[leadsource_get_autocomplete_v2_response_t](leadsource_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

