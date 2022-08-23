# ObjectUserAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectUserAPI_userGetAutocompleteV1**](ObjectUserAPI.md#ObjectUserAPI_userGetAutocompleteV1) | **GET** /1/object/user/getAutocomplete/{sSelector} | Retrieve Users and IDs


# **ObjectUserAPI_userGetAutocompleteV1**
```c
// Retrieve Users and IDs
//
// Get the list of User to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t* ObjectUserAPI_userGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_userGetAutocompleteV1_sSelector_e sSelector, ezmax_api_definition__full_userGetAutocompleteV1_eFilterActive_e eFilterActive, char * sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_userGetAutocompleteV1_sSelector_e** | The type of Users to return | 
**eFilterActive** | **ezmax_api_definition__full_userGetAutocompleteV1_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
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

