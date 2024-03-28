# ObjectCountryAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectCountryAPI_countryGetAutocompleteV2**](ObjectCountryAPI.md#ObjectCountryAPI_countryGetAutocompleteV2) | **GET** /2/object/country/getAutocomplete/{sSelector} | Retrieve Countries and IDs


# **ObjectCountryAPI_countryGetAutocompleteV2**
```c
// Retrieve Countries and IDs
//
// Get the list of Country to be used in a dropdown or autocomplete control.
//
country_get_autocomplete_v2_response_t* ObjectCountryAPI_countryGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_countryGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_countryGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_countryGetAutocompleteV2_sSelector_e** | The type of Countries to return | 
**eFilterActive** | **ezmax_api_definition__full_countryGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[country_get_autocomplete_v2_response_t](country_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

