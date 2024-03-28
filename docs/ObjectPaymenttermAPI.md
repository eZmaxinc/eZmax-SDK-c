# ObjectPaymenttermAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectPaymenttermAPI_paymenttermCreateObjectV1**](ObjectPaymenttermAPI.md#ObjectPaymenttermAPI_paymenttermCreateObjectV1) | **POST** /1/object/paymentterm | Create a new Paymentterm
[**ObjectPaymenttermAPI_paymenttermEditObjectV1**](ObjectPaymenttermAPI.md#ObjectPaymenttermAPI_paymenttermEditObjectV1) | **PUT** /1/object/paymentterm/{pkiPaymenttermID} | Edit an existing Paymentterm
[**ObjectPaymenttermAPI_paymenttermGetAutocompleteV2**](ObjectPaymenttermAPI.md#ObjectPaymenttermAPI_paymenttermGetAutocompleteV2) | **GET** /2/object/paymentterm/getAutocomplete/{sSelector} | Retrieve Paymentterms and IDs
[**ObjectPaymenttermAPI_paymenttermGetListV1**](ObjectPaymenttermAPI.md#ObjectPaymenttermAPI_paymenttermGetListV1) | **GET** /1/object/paymentterm/getList | Retrieve Paymentterm list
[**ObjectPaymenttermAPI_paymenttermGetObjectV2**](ObjectPaymenttermAPI.md#ObjectPaymenttermAPI_paymenttermGetObjectV2) | **GET** /2/object/paymentterm/{pkiPaymenttermID} | Retrieve an existing Paymentterm


# **ObjectPaymenttermAPI_paymenttermCreateObjectV1**
```c
// Create a new Paymentterm
//
// The endpoint allows to create one or many elements at once.
//
paymentterm_create_object_v1_response_t* ObjectPaymenttermAPI_paymenttermCreateObjectV1(apiClient_t *apiClient, paymentterm_create_object_v1_request_t *paymentterm_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**paymentterm_create_object_v1_request** | **[paymentterm_create_object_v1_request_t](paymentterm_create_object_v1_request.md) \*** |  | 

### Return type

[paymentterm_create_object_v1_response_t](paymentterm_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPaymenttermAPI_paymenttermEditObjectV1**
```c
// Edit an existing Paymentterm
//
// 
//
paymentterm_edit_object_v1_response_t* ObjectPaymenttermAPI_paymenttermEditObjectV1(apiClient_t *apiClient, int *pkiPaymenttermID, paymentterm_edit_object_v1_request_t *paymentterm_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiPaymenttermID** | **int \*** |  | 
**paymentterm_edit_object_v1_request** | **[paymentterm_edit_object_v1_request_t](paymentterm_edit_object_v1_request.md) \*** |  | 

### Return type

[paymentterm_edit_object_v1_response_t](paymentterm_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPaymenttermAPI_paymenttermGetAutocompleteV2**
```c
// Retrieve Paymentterms and IDs
//
// Get the list of Paymentterm to be used in a dropdown or autocomplete control.
//
paymentterm_get_autocomplete_v2_response_t* ObjectPaymenttermAPI_paymenttermGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_paymenttermGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_paymenttermGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_paymenttermGetAutocompleteV2_sSelector_e** | The type of Paymentterms to return | 
**eFilterActive** | **ezmax_api_definition__full_paymenttermGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[paymentterm_get_autocomplete_v2_response_t](paymentterm_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPaymenttermAPI_paymenttermGetListV1**
```c
// Retrieve Paymentterm list
//
paymentterm_get_list_v1_response_t* ObjectPaymenttermAPI_paymenttermGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_paymenttermGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_paymenttermGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[paymentterm_get_list_v1_response_t](paymentterm_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPaymenttermAPI_paymenttermGetObjectV2**
```c
// Retrieve an existing Paymentterm
//
// 
//
paymentterm_get_object_v2_response_t* ObjectPaymenttermAPI_paymenttermGetObjectV2(apiClient_t *apiClient, int *pkiPaymenttermID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiPaymenttermID** | **int \*** |  | 

### Return type

[paymentterm_get_object_v2_response_t](paymentterm_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

