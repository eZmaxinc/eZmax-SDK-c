# ObjectUsergroupAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectUsergroupAPI_usergroupGetAutocompleteV1**](ObjectUsergroupAPI.md#ObjectUsergroupAPI_usergroupGetAutocompleteV1) | **GET** /1/object/usergroup/getAutocomplete/{sSelector} | Retrieve Usergroups and IDs


# **ObjectUsergroupAPI_usergroupGetAutocompleteV1**
```c
// Retrieve Usergroups and IDs
//
// Get the list of Usergroup to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t* ObjectUsergroupAPI_usergroupGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_usergroupGetAutocompleteV1_sSelector_e sSelector, char * sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_usergroupGetAutocompleteV1_sSelector_e** | The type of Usergroups to return | 
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

