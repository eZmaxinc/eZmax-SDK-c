# ObjectUserlogintypeAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectUserlogintypeAPI_userlogintypeGetAutocompleteV2**](ObjectUserlogintypeAPI.md#ObjectUserlogintypeAPI_userlogintypeGetAutocompleteV2) | **GET** /2/object/userlogintype/getAutocomplete/{sSelector} | Retrieve Userlogintypes and IDs


# **ObjectUserlogintypeAPI_userlogintypeGetAutocompleteV2**
```c
// Retrieve Userlogintypes and IDs
//
// Get the list of Userlogintype to be used in a dropdown or autocomplete control.
//
userlogintype_get_autocomplete_v2_response_t* ObjectUserlogintypeAPI_userlogintypeGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_userlogintypeGetAutocompleteV2_sSelector_e sSelector, int *fkiEzsignfoldertypeID, ezmax_api_definition__full_userlogintypeGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_userlogintypeGetAutocompleteV2_sSelector_e** | The type of Userlogintypes to return | 
**fkiEzsignfoldertypeID** | **int \*** |  | [optional] 
**eFilterActive** | **ezmax_api_definition__full_userlogintypeGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[userlogintype_get_autocomplete_v2_response_t](userlogintype_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

