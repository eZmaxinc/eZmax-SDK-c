# ObjectEzsigntemplatepackageAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageCreateObjectV1**](ObjectEzsigntemplatepackageAPI.md#ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageCreateObjectV1) | **POST** /1/object/ezsigntemplatepackage | Create a new Ezsigntemplatepackage
[**ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageDeleteObjectV1**](ObjectEzsigntemplatepackageAPI.md#ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageDeleteObjectV1) | **DELETE** /1/object/ezsigntemplatepackage/{pkiEzsigntemplatepackageID} | Delete an existing Ezsigntemplatepackage
[**ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageEditEzsigntemplatepackagesignersV1**](ObjectEzsigntemplatepackageAPI.md#ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageEditEzsigntemplatepackagesignersV1) | **PUT** /1/object/ezsigntemplatepackage/{pkiEzsigntemplatepackageID}/editEzsigntemplatepackagesigners | Edit multiple Ezsigntemplatepackagesigners
[**ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageEditObjectV1**](ObjectEzsigntemplatepackageAPI.md#ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageEditObjectV1) | **PUT** /1/object/ezsigntemplatepackage/{pkiEzsigntemplatepackageID} | Edit an existing Ezsigntemplatepackage
[**ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetAutocompleteV1**](ObjectEzsigntemplatepackageAPI.md#ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetAutocompleteV1) | **GET** /1/object/ezsigntemplatepackage/getAutocomplete/{sSelector} | Retrieve Ezsigntemplatepackages and IDs
[**ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetAutocompleteV2**](ObjectEzsigntemplatepackageAPI.md#ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetAutocompleteV2) | **GET** /2/object/ezsigntemplatepackage/getAutocomplete/{sSelector} | Retrieve Ezsigntemplatepackages and IDs
[**ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetListV1**](ObjectEzsigntemplatepackageAPI.md#ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetListV1) | **GET** /1/object/ezsigntemplatepackage/getList | Retrieve Ezsigntemplatepackage list
[**ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetObjectV1**](ObjectEzsigntemplatepackageAPI.md#ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetObjectV1) | **GET** /1/object/ezsigntemplatepackage/{pkiEzsigntemplatepackageID} | Retrieve an existing Ezsigntemplatepackage


# **ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageCreateObjectV1**
```c
// Create a new Ezsigntemplatepackage
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatepackage_create_object_v1_response_t* ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageCreateObjectV1(apiClient_t *apiClient, ezsigntemplatepackage_create_object_v1_request_t * ezsigntemplatepackage_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsigntemplatepackage_create_object_v1_request** | **[ezsigntemplatepackage_create_object_v1_request_t](ezsigntemplatepackage_create_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatepackage_create_object_v1_response_t](ezsigntemplatepackage_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageDeleteObjectV1**
```c
// Delete an existing Ezsigntemplatepackage
//
// 
//
ezsigntemplatepackage_delete_object_v1_response_t* ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageDeleteObjectV1(apiClient_t *apiClient, int pkiEzsigntemplatepackageID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatepackageID** | **int** |  | 

### Return type

[ezsigntemplatepackage_delete_object_v1_response_t](ezsigntemplatepackage_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageEditEzsigntemplatepackagesignersV1**
```c
// Edit multiple Ezsigntemplatepackagesigners
//
// Using this endpoint, you can edit multiple Ezsigntemplatepackagesigners at the same time.
//
ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_t* ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageEditEzsigntemplatepackagesignersV1(apiClient_t *apiClient, int pkiEzsigntemplatepackageID, ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_t * ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatepackageID** | **int** |  | 
**ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request** | **[ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_t](ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response_t](ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageEditObjectV1**
```c
// Edit an existing Ezsigntemplatepackage
//
// 
//
ezsigntemplatepackage_edit_object_v1_response_t* ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageEditObjectV1(apiClient_t *apiClient, int pkiEzsigntemplatepackageID, ezsigntemplatepackage_edit_object_v1_request_t * ezsigntemplatepackage_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatepackageID** | **int** |  | 
**ezsigntemplatepackage_edit_object_v1_request** | **[ezsigntemplatepackage_edit_object_v1_request_t](ezsigntemplatepackage_edit_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatepackage_edit_object_v1_response_t](ezsigntemplatepackage_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetAutocompleteV1**
```c
// Retrieve Ezsigntemplatepackages and IDs
//
// Get the list of Ezsigntemplatepackage to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_disabled_v1_response_t* ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsigntemplatepackageGetAutocompleteV1_sSelector_e sSelector, ezmax_api_definition__full_ezsigntemplatepackageGetAutocompleteV1_eFilterActive_e eFilterActive, char * sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_ezsigntemplatepackageGetAutocompleteV1_sSelector_e** | The type of Ezsigntemplatepackages to return | 
**eFilterActive** | **ezmax_api_definition__full_ezsigntemplatepackageGetAutocompleteV1_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[common_get_autocomplete_disabled_v1_response_t](common_get_autocomplete_disabled_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetAutocompleteV2**
```c
// Retrieve Ezsigntemplatepackages and IDs
//
// Get the list of Ezsigntemplatepackage to be used in a dropdown or autocomplete control.
//
ezsigntemplatepackage_get_autocomplete_v2_response_t* ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_ezsigntemplatepackageGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_ezsigntemplatepackageGetAutocompleteV2_eFilterActive_e eFilterActive, char * sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_ezsigntemplatepackageGetAutocompleteV2_sSelector_e** | The type of Ezsigntemplatepackages to return | 
**eFilterActive** | **ezmax_api_definition__full_ezsigntemplatepackageGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[ezsigntemplatepackage_get_autocomplete_v2_response_t](ezsigntemplatepackage_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetListV1**
```c
// Retrieve Ezsigntemplatepackage list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eEzsigntemplatepackageType | Company<br>Team<br>User<br>Usergroup |
//
ezsigntemplatepackage_get_list_v1_response_t* ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsigntemplatepackageGetListV1_eOrderBy_e eOrderBy, int iRowMax, int iRowOffset, header_accept_language_e Accept_Language, char * sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_ezsigntemplatepackageGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int** |  | [optional] 
**iRowOffset** | **int** |  | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[ezsigntemplatepackage_get_list_v1_response_t](ezsigntemplatepackage_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetObjectV1**
```c
// Retrieve an existing Ezsigntemplatepackage
//
// 
//
ezsigntemplatepackage_get_object_v1_response_t* ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetObjectV1(apiClient_t *apiClient, int pkiEzsigntemplatepackageID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatepackageID** | **int** |  | 

### Return type

[ezsigntemplatepackage_get_object_v1_response_t](ezsigntemplatepackage_get_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

