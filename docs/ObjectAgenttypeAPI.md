# ObjectAgenttypeAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectAgenttypeAPI_agenttypeGetAutocompleteV2**](ObjectAgenttypeAPI.md#ObjectAgenttypeAPI_agenttypeGetAutocompleteV2) | **GET** /2/object/agenttype/getAutocomplete/{sSelector} | Retrieve Agenttypes and IDs


# **ObjectAgenttypeAPI_agenttypeGetAutocompleteV2**
```c
// Retrieve Agenttypes and IDs
//
// Get the list of Agenttype to be used in a dropdown or autocomplete control.
//
agenttype_get_autocomplete_v2_response_t* ObjectAgenttypeAPI_agenttypeGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_agenttypeGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_agenttypeGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_agenttypeGetAutocompleteV2_sSelector_e** | The type of Agenttypes to return | 
**eFilterActive** | **ezmax_api_definition__full_agenttypeGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[agenttype_get_autocomplete_v2_response_t](agenttype_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

