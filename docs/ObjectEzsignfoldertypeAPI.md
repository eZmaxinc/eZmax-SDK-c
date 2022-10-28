# ObjectEzsignfoldertypeAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignfoldertypeAPI_ezsignfoldertypeCreateObjectV1**](ObjectEzsignfoldertypeAPI.md#ObjectEzsignfoldertypeAPI_ezsignfoldertypeCreateObjectV1) | **POST** /1/object/ezsignfoldertype | Create a new Ezsignfoldertype
[**ObjectEzsignfoldertypeAPI_ezsignfoldertypeEditObjectV1**](ObjectEzsignfoldertypeAPI.md#ObjectEzsignfoldertypeAPI_ezsignfoldertypeEditObjectV1) | **PUT** /1/object/ezsignfoldertype/{pkiEzsignfoldertypeID} | Edit an existing Ezsignfoldertype
[**ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetAutocompleteV1**](ObjectEzsignfoldertypeAPI.md#ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetAutocompleteV1) | **GET** /1/object/ezsignfoldertype/getAutocomplete/{sSelector} | Retrieve Ezsignfoldertypes and IDs
[**ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetAutocompleteV2**](ObjectEzsignfoldertypeAPI.md#ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetAutocompleteV2) | **GET** /2/object/ezsignfoldertype/getAutocomplete/{sSelector} | Retrieve Ezsignfoldertypes and IDs
[**ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetListV1**](ObjectEzsignfoldertypeAPI.md#ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetListV1) | **GET** /1/object/ezsignfoldertype/getList | Retrieve Ezsignfoldertype list
[**ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetObjectV1**](ObjectEzsignfoldertypeAPI.md#ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetObjectV1) | **GET** /1/object/ezsignfoldertype/{pkiEzsignfoldertypeID} | Retrieve an existing Ezsignfoldertype
[**ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetObjectV2**](ObjectEzsignfoldertypeAPI.md#ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetObjectV2) | **GET** /2/object/ezsignfoldertype/{pkiEzsignfoldertypeID} | Retrieve an existing Ezsignfoldertype


# **ObjectEzsignfoldertypeAPI_ezsignfoldertypeCreateObjectV1**
```c
// Create a new Ezsignfoldertype
//
// The endpoint allows to create one or many elements at once.
//
ezsignfoldertype_create_object_v1_response_t* ObjectEzsignfoldertypeAPI_ezsignfoldertypeCreateObjectV1(apiClient_t *apiClient, ezsignfoldertype_create_object_v1_request_t * ezsignfoldertype_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsignfoldertype_create_object_v1_request** | **[ezsignfoldertype_create_object_v1_request_t](ezsignfoldertype_create_object_v1_request.md) \*** |  | 

### Return type

[ezsignfoldertype_create_object_v1_response_t](ezsignfoldertype_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignfoldertypeAPI_ezsignfoldertypeEditObjectV1**
```c
// Edit an existing Ezsignfoldertype
//
// 
//
ezsignfoldertype_edit_object_v1_response_t* ObjectEzsignfoldertypeAPI_ezsignfoldertypeEditObjectV1(apiClient_t *apiClient, int pkiEzsignfoldertypeID, ezsignfoldertype_edit_object_v1_request_t * ezsignfoldertype_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignfoldertypeID** | **int** |  | 
**ezsignfoldertype_edit_object_v1_request** | **[ezsignfoldertype_edit_object_v1_request_t](ezsignfoldertype_edit_object_v1_request.md) \*** |  | 

### Return type

[ezsignfoldertype_edit_object_v1_response_t](ezsignfoldertype_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetAutocompleteV1**
```c
// Retrieve Ezsignfoldertypes and IDs
//
// Get the list of Ezsignfoldertypes to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t* ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1_sSelector_e sSelector, ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1_eFilterActive_e eFilterActive, char * sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1_sSelector_e** | The type of Ezsignfoldertypes to return | 
**eFilterActive** | **ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
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

# **ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetAutocompleteV2**
```c
// Retrieve Ezsignfoldertypes and IDs
//
// Get the list of Ezsignfoldertype to be used in a dropdown or autocomplete control.
//
ezsignfoldertype_get_autocomplete_v2_response_t* ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV2_eFilterActive_e eFilterActive, char * sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV2_sSelector_e** | The type of Ezsignfoldertypes to return | 
**eFilterActive** | **ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[ezsignfoldertype_get_autocomplete_v2_response_t](ezsignfoldertype_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetListV1**
```c
// Retrieve Ezsignfoldertype list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eEzsignfoldertypePrivacylevel | User<br>Usergroup |
//
ezsignfoldertype_get_list_v1_response_t* ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsignfoldertypeGetListV1_eOrderBy_e eOrderBy, int iRowMax, int iRowOffset, header_accept_language_e Accept_Language, char * sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_ezsignfoldertypeGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int** |  | [optional] 
**iRowOffset** | **int** |  | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[ezsignfoldertype_get_list_v1_response_t](ezsignfoldertype_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetObjectV1**
```c
// Retrieve an existing Ezsignfoldertype
//
// 
//
ezsignfoldertype_get_object_v1_response_t* ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetObjectV1(apiClient_t *apiClient, int pkiEzsignfoldertypeID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignfoldertypeID** | **int** |  | 

### Return type

[ezsignfoldertype_get_object_v1_response_t](ezsignfoldertype_get_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetObjectV2**
```c
// Retrieve an existing Ezsignfoldertype
//
// 
//
ezsignfoldertype_get_object_v2_response_t* ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetObjectV2(apiClient_t *apiClient, int pkiEzsignfoldertypeID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignfoldertypeID** | **int** |  | 

### Return type

[ezsignfoldertype_get_object_v2_response_t](ezsignfoldertype_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

