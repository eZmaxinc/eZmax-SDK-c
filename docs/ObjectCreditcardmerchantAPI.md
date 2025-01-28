# ObjectCreditcardmerchantAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectCreditcardmerchantAPI_creditcardmerchantCreateObjectV1**](ObjectCreditcardmerchantAPI.md#ObjectCreditcardmerchantAPI_creditcardmerchantCreateObjectV1) | **POST** /1/object/creditcardmerchant | Create a new Creditcardmerchant
[**ObjectCreditcardmerchantAPI_creditcardmerchantDeleteObjectV1**](ObjectCreditcardmerchantAPI.md#ObjectCreditcardmerchantAPI_creditcardmerchantDeleteObjectV1) | **DELETE** /1/object/creditcardmerchant/{pkiCreditcardmerchantID} | Delete an existing Creditcardmerchant
[**ObjectCreditcardmerchantAPI_creditcardmerchantEditObjectV1**](ObjectCreditcardmerchantAPI.md#ObjectCreditcardmerchantAPI_creditcardmerchantEditObjectV1) | **PUT** /1/object/creditcardmerchant/{pkiCreditcardmerchantID} | Edit an existing Creditcardmerchant
[**ObjectCreditcardmerchantAPI_creditcardmerchantGetAutocompleteV2**](ObjectCreditcardmerchantAPI.md#ObjectCreditcardmerchantAPI_creditcardmerchantGetAutocompleteV2) | **GET** /2/object/creditcardmerchant/getAutocomplete/{sSelector} | Retrieve Creditcardmerchants and IDs
[**ObjectCreditcardmerchantAPI_creditcardmerchantGetListV1**](ObjectCreditcardmerchantAPI.md#ObjectCreditcardmerchantAPI_creditcardmerchantGetListV1) | **GET** /1/object/creditcardmerchant/getList | Retrieve Creditcardmerchant list
[**ObjectCreditcardmerchantAPI_creditcardmerchantGetObjectV2**](ObjectCreditcardmerchantAPI.md#ObjectCreditcardmerchantAPI_creditcardmerchantGetObjectV2) | **GET** /2/object/creditcardmerchant/{pkiCreditcardmerchantID} | Retrieve an existing Creditcardmerchant


# **ObjectCreditcardmerchantAPI_creditcardmerchantCreateObjectV1**
```c
// Create a new Creditcardmerchant
//
// The endpoint allows to create one or many elements at once.
//
creditcardmerchant_create_object_v1_response_t* ObjectCreditcardmerchantAPI_creditcardmerchantCreateObjectV1(apiClient_t *apiClient, creditcardmerchant_create_object_v1_request_t *creditcardmerchant_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**creditcardmerchant_create_object_v1_request** | **[creditcardmerchant_create_object_v1_request_t](creditcardmerchant_create_object_v1_request.md) \*** |  | 

### Return type

[creditcardmerchant_create_object_v1_response_t](creditcardmerchant_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCreditcardmerchantAPI_creditcardmerchantDeleteObjectV1**
```c
// Delete an existing Creditcardmerchant
//
// 
//
creditcardmerchant_delete_object_v1_response_t* ObjectCreditcardmerchantAPI_creditcardmerchantDeleteObjectV1(apiClient_t *apiClient, int *pkiCreditcardmerchantID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCreditcardmerchantID** | **int \*** | The unique ID of the Creditcardmerchant | 

### Return type

[creditcardmerchant_delete_object_v1_response_t](creditcardmerchant_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCreditcardmerchantAPI_creditcardmerchantEditObjectV1**
```c
// Edit an existing Creditcardmerchant
//
// 
//
creditcardmerchant_edit_object_v1_response_t* ObjectCreditcardmerchantAPI_creditcardmerchantEditObjectV1(apiClient_t *apiClient, int *pkiCreditcardmerchantID, creditcardmerchant_edit_object_v1_request_t *creditcardmerchant_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCreditcardmerchantID** | **int \*** | The unique ID of the Creditcardmerchant | 
**creditcardmerchant_edit_object_v1_request** | **[creditcardmerchant_edit_object_v1_request_t](creditcardmerchant_edit_object_v1_request.md) \*** |  | 

### Return type

[creditcardmerchant_edit_object_v1_response_t](creditcardmerchant_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCreditcardmerchantAPI_creditcardmerchantGetAutocompleteV2**
```c
// Retrieve Creditcardmerchants and IDs
//
// Get the list of Creditcardmerchant to be used in a dropdown or autocomplete control.
//
creditcardmerchant_get_autocomplete_v2_response_t* ObjectCreditcardmerchantAPI_creditcardmerchantGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_creditcardmerchantGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_creditcardmerchantGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_creditcardmerchantGetAutocompleteV2_sSelector_e** | The type of Creditcardmerchants to return | 
**eFilterActive** | **ezmax_api_definition__full_creditcardmerchantGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[creditcardmerchant_get_autocomplete_v2_response_t](creditcardmerchant_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCreditcardmerchantAPI_creditcardmerchantGetListV1**
```c
// Retrieve Creditcardmerchant list
//
// 
//
creditcardmerchant_get_list_v1_response_t* ObjectCreditcardmerchantAPI_creditcardmerchantGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_creditcardmerchantGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_creditcardmerchantGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[creditcardmerchant_get_list_v1_response_t](creditcardmerchant_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCreditcardmerchantAPI_creditcardmerchantGetObjectV2**
```c
// Retrieve an existing Creditcardmerchant
//
// 
//
creditcardmerchant_get_object_v2_response_t* ObjectCreditcardmerchantAPI_creditcardmerchantGetObjectV2(apiClient_t *apiClient, int *pkiCreditcardmerchantID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCreditcardmerchantID** | **int \*** | The unique ID of the Creditcardmerchant | 

### Return type

[creditcardmerchant_get_object_v2_response_t](creditcardmerchant_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

