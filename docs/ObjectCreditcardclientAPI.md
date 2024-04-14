# ObjectCreditcardclientAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectCreditcardclientAPI_creditcardclientCreateObjectV1**](ObjectCreditcardclientAPI.md#ObjectCreditcardclientAPI_creditcardclientCreateObjectV1) | **POST** /1/object/creditcardclient | Create a new Creditcardclient
[**ObjectCreditcardclientAPI_creditcardclientDeleteObjectV1**](ObjectCreditcardclientAPI.md#ObjectCreditcardclientAPI_creditcardclientDeleteObjectV1) | **DELETE** /1/object/creditcardclient/{pkiCreditcardclientID} | Delete an existing Creditcardclient
[**ObjectCreditcardclientAPI_creditcardclientEditObjectV1**](ObjectCreditcardclientAPI.md#ObjectCreditcardclientAPI_creditcardclientEditObjectV1) | **PUT** /1/object/creditcardclient/{pkiCreditcardclientID} | Edit an existing Creditcardclient
[**ObjectCreditcardclientAPI_creditcardclientGetAutocompleteV2**](ObjectCreditcardclientAPI.md#ObjectCreditcardclientAPI_creditcardclientGetAutocompleteV2) | **GET** /2/object/creditcardclient/getAutocomplete/{sSelector} | Retrieve Creditcardclients and IDs
[**ObjectCreditcardclientAPI_creditcardclientGetListV1**](ObjectCreditcardclientAPI.md#ObjectCreditcardclientAPI_creditcardclientGetListV1) | **GET** /1/object/creditcardclient/getList | Retrieve Creditcardclient list
[**ObjectCreditcardclientAPI_creditcardclientGetObjectV2**](ObjectCreditcardclientAPI.md#ObjectCreditcardclientAPI_creditcardclientGetObjectV2) | **GET** /2/object/creditcardclient/{pkiCreditcardclientID} | Retrieve an existing Creditcardclient


# **ObjectCreditcardclientAPI_creditcardclientCreateObjectV1**
```c
// Create a new Creditcardclient
//
// The endpoint allows to create one or many elements at once.
//
creditcardclient_create_object_v1_response_t* ObjectCreditcardclientAPI_creditcardclientCreateObjectV1(apiClient_t *apiClient, creditcardclient_create_object_v1_request_t *creditcardclient_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**creditcardclient_create_object_v1_request** | **[creditcardclient_create_object_v1_request_t](creditcardclient_create_object_v1_request.md) \*** |  | 

### Return type

[creditcardclient_create_object_v1_response_t](creditcardclient_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCreditcardclientAPI_creditcardclientDeleteObjectV1**
```c
// Delete an existing Creditcardclient
//
// 
//
creditcardclient_delete_object_v1_response_t* ObjectCreditcardclientAPI_creditcardclientDeleteObjectV1(apiClient_t *apiClient, int *pkiCreditcardclientID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCreditcardclientID** | **int \*** | The unique ID of the Creditcardclient | 

### Return type

[creditcardclient_delete_object_v1_response_t](creditcardclient_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCreditcardclientAPI_creditcardclientEditObjectV1**
```c
// Edit an existing Creditcardclient
//
// 
//
creditcardclient_edit_object_v1_response_t* ObjectCreditcardclientAPI_creditcardclientEditObjectV1(apiClient_t *apiClient, int *pkiCreditcardclientID, creditcardclient_edit_object_v1_request_t *creditcardclient_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCreditcardclientID** | **int \*** | The unique ID of the Creditcardclient | 
**creditcardclient_edit_object_v1_request** | **[creditcardclient_edit_object_v1_request_t](creditcardclient_edit_object_v1_request.md) \*** |  | 

### Return type

[creditcardclient_edit_object_v1_response_t](creditcardclient_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCreditcardclientAPI_creditcardclientGetAutocompleteV2**
```c
// Retrieve Creditcardclients and IDs
//
// Get the list of Creditcardclient to be used in a dropdown or autocomplete control.
//
creditcardclient_get_autocomplete_v2_response_t* ObjectCreditcardclientAPI_creditcardclientGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_creditcardclientGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_creditcardclientGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_creditcardclientGetAutocompleteV2_sSelector_e** | The type of Creditcardclients to return | 
**eFilterActive** | **ezmax_api_definition__full_creditcardclientGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[creditcardclient_get_autocomplete_v2_response_t](creditcardclient_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCreditcardclientAPI_creditcardclientGetListV1**
```c
// Retrieve Creditcardclient list
//
// 
//
creditcardclient_get_list_v1_response_t* ObjectCreditcardclientAPI_creditcardclientGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_creditcardclientGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_creditcardclientGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[creditcardclient_get_list_v1_response_t](creditcardclient_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCreditcardclientAPI_creditcardclientGetObjectV2**
```c
// Retrieve an existing Creditcardclient
//
// 
//
creditcardclient_get_object_v2_response_t* ObjectCreditcardclientAPI_creditcardclientGetObjectV2(apiClient_t *apiClient, int *pkiCreditcardclientID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCreditcardclientID** | **int \*** | The unique ID of the Creditcardclient | 

### Return type

[creditcardclient_get_object_v2_response_t](creditcardclient_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

