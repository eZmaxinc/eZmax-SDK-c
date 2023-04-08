# ObjectVariableexpenseAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectVariableexpenseAPI_variableexpenseCreateObjectV1**](ObjectVariableexpenseAPI.md#ObjectVariableexpenseAPI_variableexpenseCreateObjectV1) | **POST** /1/object/variableexpense | Create a new Variableexpense
[**ObjectVariableexpenseAPI_variableexpenseDeleteObjectV1**](ObjectVariableexpenseAPI.md#ObjectVariableexpenseAPI_variableexpenseDeleteObjectV1) | **DELETE** /1/object/variableexpense/{pkiVariableexpenseID} | Delete an existing Variableexpense
[**ObjectVariableexpenseAPI_variableexpenseEditObjectV1**](ObjectVariableexpenseAPI.md#ObjectVariableexpenseAPI_variableexpenseEditObjectV1) | **PUT** /1/object/variableexpense/{pkiVariableexpenseID} | Edit an existing Variableexpense
[**ObjectVariableexpenseAPI_variableexpenseGetAutocompleteV2**](ObjectVariableexpenseAPI.md#ObjectVariableexpenseAPI_variableexpenseGetAutocompleteV2) | **GET** /2/object/variableexpense/getAutocomplete/{sSelector} | Retrieve Variableexpenses and IDs
[**ObjectVariableexpenseAPI_variableexpenseGetListV1**](ObjectVariableexpenseAPI.md#ObjectVariableexpenseAPI_variableexpenseGetListV1) | **GET** /1/object/variableexpense/getList | Retrieve Variableexpense list
[**ObjectVariableexpenseAPI_variableexpenseGetObjectV2**](ObjectVariableexpenseAPI.md#ObjectVariableexpenseAPI_variableexpenseGetObjectV2) | **GET** /2/object/variableexpense/{pkiVariableexpenseID} | Retrieve an existing Variableexpense


# **ObjectVariableexpenseAPI_variableexpenseCreateObjectV1**
```c
// Create a new Variableexpense
//
// The endpoint allows to create one or many elements at once.
//
variableexpense_create_object_v1_response_t* ObjectVariableexpenseAPI_variableexpenseCreateObjectV1(apiClient_t *apiClient, variableexpense_create_object_v1_request_t * variableexpense_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**variableexpense_create_object_v1_request** | **[variableexpense_create_object_v1_request_t](variableexpense_create_object_v1_request.md) \*** |  | 

### Return type

[variableexpense_create_object_v1_response_t](variableexpense_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectVariableexpenseAPI_variableexpenseDeleteObjectV1**
```c
// Delete an existing Variableexpense
//
// 
//
variableexpense_delete_object_v1_response_t* ObjectVariableexpenseAPI_variableexpenseDeleteObjectV1(apiClient_t *apiClient, int pkiVariableexpenseID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiVariableexpenseID** | **int** | The unique ID of the Variableexpense | 

### Return type

[variableexpense_delete_object_v1_response_t](variableexpense_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectVariableexpenseAPI_variableexpenseEditObjectV1**
```c
// Edit an existing Variableexpense
//
// 
//
variableexpense_edit_object_v1_response_t* ObjectVariableexpenseAPI_variableexpenseEditObjectV1(apiClient_t *apiClient, int pkiVariableexpenseID, variableexpense_edit_object_v1_request_t * variableexpense_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiVariableexpenseID** | **int** | The unique ID of the Variableexpense | 
**variableexpense_edit_object_v1_request** | **[variableexpense_edit_object_v1_request_t](variableexpense_edit_object_v1_request.md) \*** |  | 

### Return type

[variableexpense_edit_object_v1_response_t](variableexpense_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectVariableexpenseAPI_variableexpenseGetAutocompleteV2**
```c
// Retrieve Variableexpenses and IDs
//
// Get the list of Variableexpense to be used in a dropdown or autocomplete control.
//
variableexpense_get_autocomplete_v2_response_t* ObjectVariableexpenseAPI_variableexpenseGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_variableexpenseGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_variableexpenseGetAutocompleteV2_eFilterActive_e eFilterActive, char * sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_variableexpenseGetAutocompleteV2_sSelector_e** | The type of Variableexpenses to return | 
**eFilterActive** | **ezmax_api_definition__full_variableexpenseGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[variableexpense_get_autocomplete_v2_response_t](variableexpense_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectVariableexpenseAPI_variableexpenseGetListV1**
```c
// Retrieve Variableexpense list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eVariableexpenseTaxable | Yes<br>No<br>Included |
//
variableexpense_get_list_v1_response_t* ObjectVariableexpenseAPI_variableexpenseGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_variableexpenseGetListV1_eOrderBy_e eOrderBy, int iRowMax, int iRowOffset, header_accept_language_e Accept_Language, char * sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_variableexpenseGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int** |  | [optional] 
**iRowOffset** | **int** |  | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[variableexpense_get_list_v1_response_t](variableexpense_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectVariableexpenseAPI_variableexpenseGetObjectV2**
```c
// Retrieve an existing Variableexpense
//
// 
//
variableexpense_get_object_v2_response_t* ObjectVariableexpenseAPI_variableexpenseGetObjectV2(apiClient_t *apiClient, int pkiVariableexpenseID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiVariableexpenseID** | **int** | The unique ID of the Variableexpense | 

### Return type

[variableexpense_get_object_v2_response_t](variableexpense_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

