# ObjectEzsignsigningreasonAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignsigningreasonAPI_ezsignsigningreasonCreateObjectV1**](ObjectEzsignsigningreasonAPI.md#ObjectEzsignsigningreasonAPI_ezsignsigningreasonCreateObjectV1) | **POST** /1/object/ezsignsigningreason | Create a new Ezsignsigningreason
[**ObjectEzsignsigningreasonAPI_ezsignsigningreasonEditObjectV1**](ObjectEzsignsigningreasonAPI.md#ObjectEzsignsigningreasonAPI_ezsignsigningreasonEditObjectV1) | **PUT** /1/object/ezsignsigningreason/{pkiEzsignsigningreasonID} | Edit an existing Ezsignsigningreason
[**ObjectEzsignsigningreasonAPI_ezsignsigningreasonGetAutocompleteV2**](ObjectEzsignsigningreasonAPI.md#ObjectEzsignsigningreasonAPI_ezsignsigningreasonGetAutocompleteV2) | **GET** /2/object/ezsignsigningreason/getAutocomplete/{sSelector} | Retrieve Ezsignsigningreasons and IDs
[**ObjectEzsignsigningreasonAPI_ezsignsigningreasonGetListV1**](ObjectEzsignsigningreasonAPI.md#ObjectEzsignsigningreasonAPI_ezsignsigningreasonGetListV1) | **GET** /1/object/ezsignsigningreason/getList | Retrieve Ezsignsigningreason list
[**ObjectEzsignsigningreasonAPI_ezsignsigningreasonGetObjectV2**](ObjectEzsignsigningreasonAPI.md#ObjectEzsignsigningreasonAPI_ezsignsigningreasonGetObjectV2) | **GET** /2/object/ezsignsigningreason/{pkiEzsignsigningreasonID} | Retrieve an existing Ezsignsigningreason


# **ObjectEzsignsigningreasonAPI_ezsignsigningreasonCreateObjectV1**
```c
// Create a new Ezsignsigningreason
//
// The endpoint allows to create one or many elements at once.
//
ezsignsigningreason_create_object_v1_response_t* ObjectEzsignsigningreasonAPI_ezsignsigningreasonCreateObjectV1(apiClient_t *apiClient, ezsignsigningreason_create_object_v1_request_t *ezsignsigningreason_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsignsigningreason_create_object_v1_request** | **[ezsignsigningreason_create_object_v1_request_t](ezsignsigningreason_create_object_v1_request.md) \*** |  | 

### Return type

[ezsignsigningreason_create_object_v1_response_t](ezsignsigningreason_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsigningreasonAPI_ezsignsigningreasonEditObjectV1**
```c
// Edit an existing Ezsignsigningreason
//
// 
//
ezsignsigningreason_edit_object_v1_response_t* ObjectEzsignsigningreasonAPI_ezsignsigningreasonEditObjectV1(apiClient_t *apiClient, int *pkiEzsignsigningreasonID, ezsignsigningreason_edit_object_v1_request_t *ezsignsigningreason_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignsigningreasonID** | **int \*** | The unique ID of the Ezsignsigningreason | 
**ezsignsigningreason_edit_object_v1_request** | **[ezsignsigningreason_edit_object_v1_request_t](ezsignsigningreason_edit_object_v1_request.md) \*** |  | 

### Return type

[ezsignsigningreason_edit_object_v1_response_t](ezsignsigningreason_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsigningreasonAPI_ezsignsigningreasonGetAutocompleteV2**
```c
// Retrieve Ezsignsigningreasons and IDs
//
// Get the list of Ezsignsigningreason to be used in a dropdown or autocomplete control.
//
ezsignsigningreason_get_autocomplete_v2_response_t* ObjectEzsignsigningreasonAPI_ezsignsigningreasonGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_ezsignsigningreasonGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_ezsignsigningreasonGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_ezsignsigningreasonGetAutocompleteV2_sSelector_e** | The type of Ezsignsigningreasons to return | 
**eFilterActive** | **ezmax_api_definition__full_ezsignsigningreasonGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[ezsignsigningreason_get_autocomplete_v2_response_t](ezsignsigningreason_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsigningreasonAPI_ezsignsigningreasonGetListV1**
```c
// Retrieve Ezsignsigningreason list
//
// 
//
ezsignsigningreason_get_list_v1_response_t* ObjectEzsignsigningreasonAPI_ezsignsigningreasonGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsignsigningreasonGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_ezsignsigningreasonGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[ezsignsigningreason_get_list_v1_response_t](ezsignsigningreason_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsigningreasonAPI_ezsignsigningreasonGetObjectV2**
```c
// Retrieve an existing Ezsignsigningreason
//
// 
//
ezsignsigningreason_get_object_v2_response_t* ObjectEzsignsigningreasonAPI_ezsignsigningreasonGetObjectV2(apiClient_t *apiClient, int *pkiEzsignsigningreasonID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignsigningreasonID** | **int \*** | The unique ID of the Ezsignsigningreason | 

### Return type

[ezsignsigningreason_get_object_v2_response_t](ezsignsigningreason_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

