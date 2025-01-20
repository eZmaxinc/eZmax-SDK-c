# ObjectSupplyAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectSupplyAPI_supplyCreateObjectV1**](ObjectSupplyAPI.md#ObjectSupplyAPI_supplyCreateObjectV1) | **POST** /1/object/supply | Create a new Supply
[**ObjectSupplyAPI_supplyDeleteObjectV1**](ObjectSupplyAPI.md#ObjectSupplyAPI_supplyDeleteObjectV1) | **DELETE** /1/object/supply/{pkiSupplyID} | Delete an existing Supply
[**ObjectSupplyAPI_supplyEditObjectV1**](ObjectSupplyAPI.md#ObjectSupplyAPI_supplyEditObjectV1) | **PUT** /1/object/supply/{pkiSupplyID} | Edit an existing Supply
[**ObjectSupplyAPI_supplyGetAutocompleteV2**](ObjectSupplyAPI.md#ObjectSupplyAPI_supplyGetAutocompleteV2) | **GET** /2/object/supply/getAutocomplete/{sSelector} | Retrieve Supplys and IDs
[**ObjectSupplyAPI_supplyGetListV1**](ObjectSupplyAPI.md#ObjectSupplyAPI_supplyGetListV1) | **GET** /1/object/supply/getList | Retrieve Supply list
[**ObjectSupplyAPI_supplyGetObjectV2**](ObjectSupplyAPI.md#ObjectSupplyAPI_supplyGetObjectV2) | **GET** /2/object/supply/{pkiSupplyID} | Retrieve an existing Supply


# **ObjectSupplyAPI_supplyCreateObjectV1**
```c
// Create a new Supply
//
// The endpoint allows to create one or many elements at once.
//
supply_create_object_v1_response_t* ObjectSupplyAPI_supplyCreateObjectV1(apiClient_t *apiClient, supply_create_object_v1_request_t *supply_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supply_create_object_v1_request** | **[supply_create_object_v1_request_t](supply_create_object_v1_request.md) \*** |  | 

### Return type

[supply_create_object_v1_response_t](supply_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectSupplyAPI_supplyDeleteObjectV1**
```c
// Delete an existing Supply
//
// 
//
common_response_t* ObjectSupplyAPI_supplyDeleteObjectV1(apiClient_t *apiClient, int *pkiSupplyID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiSupplyID** | **int \*** | The unique ID of the Supply | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectSupplyAPI_supplyEditObjectV1**
```c
// Edit an existing Supply
//
// 
//
common_response_t* ObjectSupplyAPI_supplyEditObjectV1(apiClient_t *apiClient, int *pkiSupplyID, supply_edit_object_v1_request_t *supply_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiSupplyID** | **int \*** | The unique ID of the Supply | 
**supply_edit_object_v1_request** | **[supply_edit_object_v1_request_t](supply_edit_object_v1_request.md) \*** |  | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectSupplyAPI_supplyGetAutocompleteV2**
```c
// Retrieve Supplys and IDs
//
// Get the list of Supply to be used in a dropdown or autocomplete control.
//
supply_get_autocomplete_v2_response_t* ObjectSupplyAPI_supplyGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_supplyGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_supplyGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_supplyGetAutocompleteV2_sSelector_e** | The type of Supplys to return | 
**eFilterActive** | **ezmax_api_definition__full_supplyGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[supply_get_autocomplete_v2_response_t](supply_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectSupplyAPI_supplyGetListV1**
```c
// Retrieve Supply list
//
// 
//
supply_get_list_v1_response_t* ObjectSupplyAPI_supplyGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_supplyGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_supplyGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[supply_get_list_v1_response_t](supply_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectSupplyAPI_supplyGetObjectV2**
```c
// Retrieve an existing Supply
//
// 
//
supply_get_object_v2_response_t* ObjectSupplyAPI_supplyGetObjectV2(apiClient_t *apiClient, int *pkiSupplyID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiSupplyID** | **int \*** | The unique ID of the Supply | 

### Return type

[supply_get_object_v2_response_t](supply_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

