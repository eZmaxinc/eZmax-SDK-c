# ObjectPaymentgatewayAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectPaymentgatewayAPI_paymentgatewayCreateObjectV1**](ObjectPaymentgatewayAPI.md#ObjectPaymentgatewayAPI_paymentgatewayCreateObjectV1) | **POST** /1/object/paymentgateway | Create a new Paymentgateway
[**ObjectPaymentgatewayAPI_paymentgatewayEditObjectV1**](ObjectPaymentgatewayAPI.md#ObjectPaymentgatewayAPI_paymentgatewayEditObjectV1) | **PUT** /1/object/paymentgateway/{pkiPaymentgatewayID} | Edit an existing Paymentgateway
[**ObjectPaymentgatewayAPI_paymentgatewayGetAutocompleteV2**](ObjectPaymentgatewayAPI.md#ObjectPaymentgatewayAPI_paymentgatewayGetAutocompleteV2) | **GET** /2/object/paymentgateway/getAutocomplete/{sSelector} | Retrieve Paymentgateways and IDs
[**ObjectPaymentgatewayAPI_paymentgatewayGetListV1**](ObjectPaymentgatewayAPI.md#ObjectPaymentgatewayAPI_paymentgatewayGetListV1) | **GET** /1/object/paymentgateway/getList | Retrieve Paymentgateway list
[**ObjectPaymentgatewayAPI_paymentgatewayGetObjectV2**](ObjectPaymentgatewayAPI.md#ObjectPaymentgatewayAPI_paymentgatewayGetObjectV2) | **GET** /2/object/paymentgateway/{pkiPaymentgatewayID} | Retrieve an existing Paymentgateway


# **ObjectPaymentgatewayAPI_paymentgatewayCreateObjectV1**
```c
// Create a new Paymentgateway
//
// The endpoint allows to create one or many elements at once.
//
paymentgateway_create_object_v1_response_t* ObjectPaymentgatewayAPI_paymentgatewayCreateObjectV1(apiClient_t *apiClient, paymentgateway_create_object_v1_request_t *paymentgateway_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**paymentgateway_create_object_v1_request** | **[paymentgateway_create_object_v1_request_t](paymentgateway_create_object_v1_request.md) \*** |  | 

### Return type

[paymentgateway_create_object_v1_response_t](paymentgateway_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPaymentgatewayAPI_paymentgatewayEditObjectV1**
```c
// Edit an existing Paymentgateway
//
// 
//
paymentgateway_edit_object_v1_response_t* ObjectPaymentgatewayAPI_paymentgatewayEditObjectV1(apiClient_t *apiClient, int *pkiPaymentgatewayID, paymentgateway_edit_object_v1_request_t *paymentgateway_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiPaymentgatewayID** | **int \*** | The unique ID of the Paymentgateway | 
**paymentgateway_edit_object_v1_request** | **[paymentgateway_edit_object_v1_request_t](paymentgateway_edit_object_v1_request.md) \*** |  | 

### Return type

[paymentgateway_edit_object_v1_response_t](paymentgateway_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPaymentgatewayAPI_paymentgatewayGetAutocompleteV2**
```c
// Retrieve Paymentgateways and IDs
//
// Get the list of Paymentgateway to be used in a dropdown or autocomplete control.
//
paymentgateway_get_autocomplete_v2_response_t* ObjectPaymentgatewayAPI_paymentgatewayGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_paymentgatewayGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_paymentgatewayGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_paymentgatewayGetAutocompleteV2_sSelector_e** | The type of Paymentgateways to return | 
**eFilterActive** | **ezmax_api_definition__full_paymentgatewayGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[paymentgateway_get_autocomplete_v2_response_t](paymentgateway_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPaymentgatewayAPI_paymentgatewayGetListV1**
```c
// Retrieve Paymentgateway list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | ePaymentgatewayProcessor | Moneris |
//
paymentgateway_get_list_v1_response_t* ObjectPaymentgatewayAPI_paymentgatewayGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_paymentgatewayGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_paymentgatewayGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[paymentgateway_get_list_v1_response_t](paymentgateway_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPaymentgatewayAPI_paymentgatewayGetObjectV2**
```c
// Retrieve an existing Paymentgateway
//
// 
//
paymentgateway_get_object_v2_response_t* ObjectPaymentgatewayAPI_paymentgatewayGetObjectV2(apiClient_t *apiClient, int *pkiPaymentgatewayID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiPaymentgatewayID** | **int \*** | The unique ID of the Paymentgateway | 

### Return type

[paymentgateway_get_object_v2_response_t](paymentgateway_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

