# ObjectCustomerAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectCustomerAPI_customerCreateObjectV1**](ObjectCustomerAPI.md#ObjectCustomerAPI_customerCreateObjectV1) | **POST** /1/object/customer | Create a new Customer
[**ObjectCustomerAPI_customerGetAutocompleteV2**](ObjectCustomerAPI.md#ObjectCustomerAPI_customerGetAutocompleteV2) | **GET** /2/object/customer/getAutocomplete/{sSelector} | Retrieve Customers and IDs
[**ObjectCustomerAPI_customerGetListV1**](ObjectCustomerAPI.md#ObjectCustomerAPI_customerGetListV1) | **GET** /1/object/customer/getList | Retrieve Customer list
[**ObjectCustomerAPI_customerGetObjectV2**](ObjectCustomerAPI.md#ObjectCustomerAPI_customerGetObjectV2) | **GET** /2/object/customer/{pkiCustomerID} | Retrieve an existing Customer
[**ObjectCustomerAPI_customerImportIntoEDMV1**](ObjectCustomerAPI.md#ObjectCustomerAPI_customerImportIntoEDMV1) | **POST** /1/object/customer/{pkiCustomerID}/importIntoEDM | Import attachments into the Buyercontract


# **ObjectCustomerAPI_customerCreateObjectV1**
```c
// Create a new Customer
//
// The endpoint allows to create one or many elements at once.
//
customer_create_object_v1_response_t* ObjectCustomerAPI_customerCreateObjectV1(apiClient_t *apiClient, customer_create_object_v1_request_t *customer_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**customer_create_object_v1_request** | **[customer_create_object_v1_request_t](customer_create_object_v1_request.md) \*** |  | 

### Return type

[customer_create_object_v1_response_t](customer_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCustomerAPI_customerGetAutocompleteV2**
```c
// Retrieve Customers and IDs
//
// Get the list of Customer to be used in a dropdown or autocomplete control.
//
customer_get_autocomplete_v2_response_t* ObjectCustomerAPI_customerGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_customerGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_customerGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_customerGetAutocompleteV2_sSelector_e** | The type of Customers to return | 
**eFilterActive** | **ezmax_api_definition__full_customerGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[customer_get_autocomplete_v2_response_t](customer_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCustomerAPI_customerGetListV1**
```c
// Retrieve Customer list
//
// 
//
customer_get_list_v1_response_t* ObjectCustomerAPI_customerGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_customerGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_customerGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[customer_get_list_v1_response_t](customer_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCustomerAPI_customerGetObjectV2**
```c
// Retrieve an existing Customer
//
// 
//
customer_get_object_v2_response_t* ObjectCustomerAPI_customerGetObjectV2(apiClient_t *apiClient, int *pkiCustomerID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCustomerID** | **int \*** | The unique ID of the Customer | 

### Return type

[customer_get_object_v2_response_t](customer_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCustomerAPI_customerImportIntoEDMV1**
```c
// Import attachments into the Buyercontract
//
// 
//
customer_import_into_edm_v1_response_t* ObjectCustomerAPI_customerImportIntoEDMV1(apiClient_t *apiClient, int *pkiCustomerID, customer_import_into_edm_v1_request_t *customer_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCustomerID** | **int \*** |  | 
**customer_import_into_edm_v1_request** | **[customer_import_into_edm_v1_request_t](customer_import_into_edm_v1_request.md) \*** |  | 

### Return type

[customer_import_into_edm_v1_response_t](customer_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

