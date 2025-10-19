# ObjectInscriptiontypeAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectInscriptiontypeAPI_inscriptiontypeGetAutocompleteV2**](ObjectInscriptiontypeAPI.md#ObjectInscriptiontypeAPI_inscriptiontypeGetAutocompleteV2) | **GET** /2/object/inscriptiontype/getAutocomplete/{sSelector} | Retrieve Inscriptiontypes and IDs


# **ObjectInscriptiontypeAPI_inscriptiontypeGetAutocompleteV2**
```c
// Retrieve Inscriptiontypes and IDs
//
// Get the list of Inscriptiontype to be used in a dropdown or autocomplete control.
//
inscriptiontype_get_autocomplete_v2_response_t* ObjectInscriptiontypeAPI_inscriptiontypeGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_inscriptiontypeGetAutocompleteV2_sSelector_e sSelector, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_inscriptiontypeGetAutocompleteV2_sSelector_e** | The type of Inscriptiontypes to return | 
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[inscriptiontype_get_autocomplete_v2_response_t](inscriptiontype_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

