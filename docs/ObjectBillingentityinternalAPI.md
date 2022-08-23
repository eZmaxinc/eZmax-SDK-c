# ObjectBillingentityinternalAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectBillingentityinternalAPI_billingentityinternalGetAutocompleteV1**](ObjectBillingentityinternalAPI.md#ObjectBillingentityinternalAPI_billingentityinternalGetAutocompleteV1) | **GET** /1/object/billingentityinternal/getAutocomplete/{sSelector} | Retrieve Billingentityinternals and IDs


# **ObjectBillingentityinternalAPI_billingentityinternalGetAutocompleteV1**
```c
// Retrieve Billingentityinternals and IDs
//
// Get the list of Billingentityinternal to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t* ObjectBillingentityinternalAPI_billingentityinternalGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_billingentityinternalGetAutocompleteV1_sSelector_e sSelector, ezmax_api_definition__full_billingentityinternalGetAutocompleteV1_eFilterActive_e eFilterActive, char * sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_billingentityinternalGetAutocompleteV1_sSelector_e** | The type of Billingentityinternals to return | 
**eFilterActive** | **ezmax_api_definition__full_billingentityinternalGetAutocompleteV1_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
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

