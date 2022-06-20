# ObjectBrandingAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectBrandingAPI_brandingGetAutocompleteV1**](ObjectBrandingAPI.md#ObjectBrandingAPI_brandingGetAutocompleteV1) | **GET** /1/object/branding/getAutocomplete/{sSelector} | Retrieve Brandings and IDs


# **ObjectBrandingAPI_brandingGetAutocompleteV1**
```c
// Retrieve Brandings and IDs
//
// Get the list of Branding to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t* ObjectBrandingAPI_brandingGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_brandingGetAutocompleteV1_sSelector_e sSelector, char * sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_brandingGetAutocompleteV1_sSelector_e** | The type of Brandings to return | 
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[common_get_autocomplete_v1_response_t](common_get_autocomplete_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

