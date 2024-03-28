# ObjectEzmaxinvoicingAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV2**](ObjectEzmaxinvoicingAPI.md#ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV2) | **GET** /2/object/ezmaxinvoicing/getAutocomplete/{sSelector} | Retrieve Ezmaxinvoicings and IDs
[**ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetObjectV2**](ObjectEzmaxinvoicingAPI.md#ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetObjectV2) | **GET** /2/object/ezmaxinvoicing/{pkiEzmaxinvoicingID} | Retrieve an existing Ezmaxinvoicing
[**ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetProvisionalV1**](ObjectEzmaxinvoicingAPI.md#ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetProvisionalV1) | **GET** /1/object/ezmaxinvoicing/getProvisional | Retrieve provisional Ezmaxinvoicing


# **ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV2**
```c
// Retrieve Ezmaxinvoicings and IDs
//
// Get the list of Ezmaxinvoicing to be used in a dropdown or autocomplete control.
//
ezmaxinvoicing_get_autocomplete_v2_response_t* ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_sSelector_e** | The type of Ezmaxinvoicings to return | 
**eFilterActive** | **ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[ezmaxinvoicing_get_autocomplete_v2_response_t](ezmaxinvoicing_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetObjectV2**
```c
// Retrieve an existing Ezmaxinvoicing
//
// 
//
ezmaxinvoicing_get_object_v2_response_t* ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetObjectV2(apiClient_t *apiClient, int *pkiEzmaxinvoicingID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzmaxinvoicingID** | **int \*** |  | 

### Return type

[ezmaxinvoicing_get_object_v2_response_t](ezmaxinvoicing_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetProvisionalV1**
```c
// Retrieve provisional Ezmaxinvoicing
//
// 
//
ezmaxinvoicing_get_provisional_v1_response_t* ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetProvisionalV1(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[ezmaxinvoicing_get_provisional_v1_response_t](ezmaxinvoicing_get_provisional_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

