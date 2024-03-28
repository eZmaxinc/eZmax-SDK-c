# ObjectEzsigntemplateglobalAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsigntemplateglobalAPI_ezsigntemplateglobalGetAutocompleteV2**](ObjectEzsigntemplateglobalAPI.md#ObjectEzsigntemplateglobalAPI_ezsigntemplateglobalGetAutocompleteV2) | **GET** /2/object/ezsigntemplateglobal/getAutocomplete/{sSelector} | Retrieve Ezsigntemplateglobals and IDs
[**ObjectEzsigntemplateglobalAPI_ezsigntemplateglobalGetObjectV2**](ObjectEzsigntemplateglobalAPI.md#ObjectEzsigntemplateglobalAPI_ezsigntemplateglobalGetObjectV2) | **GET** /2/object/ezsigntemplateglobal/{pkiEzsigntemplateglobalID} | Retrieve an existing Ezsigntemplateglobal


# **ObjectEzsigntemplateglobalAPI_ezsigntemplateglobalGetAutocompleteV2**
```c
// Retrieve Ezsigntemplateglobals and IDs
//
// Get the list of Ezsigntemplateglobal to be used in a dropdown or autocomplete control.
//
ezsigntemplateglobal_get_autocomplete_v2_response_t* ObjectEzsigntemplateglobalAPI_ezsigntemplateglobalGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2_sSelector_e** | The type of Ezsigntemplateglobals to return | 
**eFilterActive** | **ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[ezsigntemplateglobal_get_autocomplete_v2_response_t](ezsigntemplateglobal_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplateglobalAPI_ezsigntemplateglobalGetObjectV2**
```c
// Retrieve an existing Ezsigntemplateglobal
//
// 
//
ezsigntemplateglobal_get_object_v2_response_t* ObjectEzsigntemplateglobalAPI_ezsigntemplateglobalGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplateglobalID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplateglobalID** | **int \*** |  | 

### Return type

[ezsigntemplateglobal_get_object_v2_response_t](ezsigntemplateglobal_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

