# ObjectEzsigntemplateAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsigntemplateAPI_ezsigntemplateCreateObjectV1**](ObjectEzsigntemplateAPI.md#ObjectEzsigntemplateAPI_ezsigntemplateCreateObjectV1) | **POST** /1/object/ezsigntemplate | Create a new Ezsigntemplate
[**ObjectEzsigntemplateAPI_ezsigntemplateDeleteObjectV1**](ObjectEzsigntemplateAPI.md#ObjectEzsigntemplateAPI_ezsigntemplateDeleteObjectV1) | **DELETE** /1/object/ezsigntemplate/{pkiEzsigntemplateID} | Delete an existing Ezsigntemplate
[**ObjectEzsigntemplateAPI_ezsigntemplateEditObjectV1**](ObjectEzsigntemplateAPI.md#ObjectEzsigntemplateAPI_ezsigntemplateEditObjectV1) | **PUT** /1/object/ezsigntemplate/{pkiEzsigntemplateID} | Edit an existing Ezsigntemplate
[**ObjectEzsigntemplateAPI_ezsigntemplateGetAutocompleteV1**](ObjectEzsigntemplateAPI.md#ObjectEzsigntemplateAPI_ezsigntemplateGetAutocompleteV1) | **GET** /1/object/ezsigntemplate/getAutocomplete/{sSelector} | Retrieve Ezsigntemplate and IDs
[**ObjectEzsigntemplateAPI_ezsigntemplateGetListV1**](ObjectEzsigntemplateAPI.md#ObjectEzsigntemplateAPI_ezsigntemplateGetListV1) | **GET** /1/object/ezsigntemplate/getList | Retrieve Ezsigntemplate list
[**ObjectEzsigntemplateAPI_ezsigntemplateGetObjectV1**](ObjectEzsigntemplateAPI.md#ObjectEzsigntemplateAPI_ezsigntemplateGetObjectV1) | **GET** /1/object/ezsigntemplate/{pkiEzsigntemplateID} | Retrieve an existing Ezsigntemplate


# **ObjectEzsigntemplateAPI_ezsigntemplateCreateObjectV1**
```c
// Create a new Ezsigntemplate
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplate_create_object_v1_response_t* ObjectEzsigntemplateAPI_ezsigntemplateCreateObjectV1(apiClient_t *apiClient, ezsigntemplate_create_object_v1_request_t * ezsigntemplate_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsigntemplate_create_object_v1_request** | **[ezsigntemplate_create_object_v1_request_t](ezsigntemplate_create_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplate_create_object_v1_response_t](ezsigntemplate_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplateAPI_ezsigntemplateDeleteObjectV1**
```c
// Delete an existing Ezsigntemplate
//
// 
//
ezsigntemplate_delete_object_v1_response_t* ObjectEzsigntemplateAPI_ezsigntemplateDeleteObjectV1(apiClient_t *apiClient, int pkiEzsigntemplateID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplateID** | **int** |  | 

### Return type

[ezsigntemplate_delete_object_v1_response_t](ezsigntemplate_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplateAPI_ezsigntemplateEditObjectV1**
```c
// Edit an existing Ezsigntemplate
//
// 
//
ezsigntemplate_edit_object_v1_response_t* ObjectEzsigntemplateAPI_ezsigntemplateEditObjectV1(apiClient_t *apiClient, int pkiEzsigntemplateID, ezsigntemplate_edit_object_v1_request_t * ezsigntemplate_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplateID** | **int** |  | 
**ezsigntemplate_edit_object_v1_request** | **[ezsigntemplate_edit_object_v1_request_t](ezsigntemplate_edit_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplate_edit_object_v1_response_t](ezsigntemplate_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplateAPI_ezsigntemplateGetAutocompleteV1**
```c
// Retrieve Ezsigntemplate and IDs
//
// Get the list of Ezsigntemplate to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t* ObjectEzsigntemplateAPI_ezsigntemplateGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsigntemplateGetAutocompleteV1_sSelector_e sSelector, ezmax_api_definition__full_ezsigntemplateGetAutocompleteV1_eFilterActive_e eFilterActive, char * sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_ezsigntemplateGetAutocompleteV1_sSelector_e** | The type of Ezsigntemplate to return | 
**eFilterActive** | **ezmax_api_definition__full_ezsigntemplateGetAutocompleteV1_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
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

# **ObjectEzsigntemplateAPI_ezsigntemplateGetListV1**
```c
// Retrieve Ezsigntemplate list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eEzsigntemplateType | Company<br>Team<br>User<br>Usergroup | 
//
ezsigntemplate_get_list_v1_response_t* ObjectEzsigntemplateAPI_ezsigntemplateGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsigntemplateGetListV1_eOrderBy_e eOrderBy, int iRowMax, int iRowOffset, header_accept_language_e Accept_Language, char * sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_ezsigntemplateGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int** |  | [optional] 
**iRowOffset** | **int** |  | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[ezsigntemplate_get_list_v1_response_t](ezsigntemplate_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplateAPI_ezsigntemplateGetObjectV1**
```c
// Retrieve an existing Ezsigntemplate
//
// 
//
ezsigntemplate_get_object_v1_response_t* ObjectEzsigntemplateAPI_ezsigntemplateGetObjectV1(apiClient_t *apiClient, int pkiEzsigntemplateID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplateID** | **int** |  | 

### Return type

[ezsigntemplate_get_object_v1_response_t](ezsigntemplate_get_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
