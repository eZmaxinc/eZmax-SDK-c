# ObjectLanguageAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectLanguageAPI_languageGetAutocompleteV2**](ObjectLanguageAPI.md#ObjectLanguageAPI_languageGetAutocompleteV2) | **GET** /2/object/language/getAutocomplete/{sSelector} | Retrieve Languages and IDs


# **ObjectLanguageAPI_languageGetAutocompleteV2**
```c
// Retrieve Languages and IDs
//
// Get the list of Language to be used in a dropdown or autocomplete control.
//
language_get_autocomplete_v2_response_t* ObjectLanguageAPI_languageGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_languageGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_languageGetAutocompleteV2_eFilterActive_e eFilterActive, char * sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_languageGetAutocompleteV2_sSelector_e** | The type of Languages to return | 
**eFilterActive** | **ezmax_api_definition__full_languageGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[language_get_autocomplete_v2_response_t](language_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

