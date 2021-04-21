# ObjectFranchisebrokerAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectFranchisebrokerAPI_franchisebrokerGetAutocompleteV1**](ObjectFranchisebrokerAPI.md#ObjectFranchisebrokerAPI_franchisebrokerGetAutocompleteV1) | **GET** /1/object/franchisebroker/getAutocomplete/{sSelector} | Retrieve Franchisebrokers and IDs


# **ObjectFranchisebrokerAPI_franchisebrokerGetAutocompleteV1**
```c
// Retrieve Franchisebrokers and IDs
//
// Get the list of Franchisebrokers to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t* ObjectFranchisebrokerAPI_franchisebrokerGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition_franchisebrokerGetAutocompleteV1_sSelector_e sSelector, char * sQuery);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration | 
**sSelector** | **ezmax_api_definition_franchisebrokerGetAutocompleteV1_sSelector_e** | The type of Franchisebrokers to return | 
**sQuery** | **char \*** | Allow to filter on the option value | [optional] 

### Return type

[common_get_autocomplete_v1_response_t](common_get_autocomplete_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
