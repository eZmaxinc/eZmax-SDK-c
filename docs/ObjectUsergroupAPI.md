# ObjectUsergroupAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectUsergroupAPI_usergroupCreateObjectV1**](ObjectUsergroupAPI.md#ObjectUsergroupAPI_usergroupCreateObjectV1) | **POST** /1/object/usergroup | Create a new Usergroup
[**ObjectUsergroupAPI_usergroupEditObjectV1**](ObjectUsergroupAPI.md#ObjectUsergroupAPI_usergroupEditObjectV1) | **PUT** /1/object/usergroup/{pkiUsergroupID} | Edit an existing Usergroup
[**ObjectUsergroupAPI_usergroupGetAutocompleteV2**](ObjectUsergroupAPI.md#ObjectUsergroupAPI_usergroupGetAutocompleteV2) | **GET** /2/object/usergroup/getAutocomplete/{sSelector} | Retrieve Usergroups and IDs
[**ObjectUsergroupAPI_usergroupGetListV1**](ObjectUsergroupAPI.md#ObjectUsergroupAPI_usergroupGetListV1) | **GET** /1/object/usergroup/getList | Retrieve Usergroup list
[**ObjectUsergroupAPI_usergroupGetObjectV2**](ObjectUsergroupAPI.md#ObjectUsergroupAPI_usergroupGetObjectV2) | **GET** /2/object/usergroup/{pkiUsergroupID} | Retrieve an existing Usergroup


# **ObjectUsergroupAPI_usergroupCreateObjectV1**
```c
// Create a new Usergroup
//
// The endpoint allows to create one or many elements at once.
//
usergroup_create_object_v1_response_t* ObjectUsergroupAPI_usergroupCreateObjectV1(apiClient_t *apiClient, usergroup_create_object_v1_request_t * usergroup_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**usergroup_create_object_v1_request** | **[usergroup_create_object_v1_request_t](usergroup_create_object_v1_request.md) \*** |  | 

### Return type

[usergroup_create_object_v1_response_t](usergroup_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUsergroupAPI_usergroupEditObjectV1**
```c
// Edit an existing Usergroup
//
// 
//
usergroup_edit_object_v1_response_t* ObjectUsergroupAPI_usergroupEditObjectV1(apiClient_t *apiClient, int pkiUsergroupID, usergroup_edit_object_v1_request_t * usergroup_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUsergroupID** | **int** | The unique ID of the Usergroup | 
**usergroup_edit_object_v1_request** | **[usergroup_edit_object_v1_request_t](usergroup_edit_object_v1_request.md) \*** |  | 

### Return type

[usergroup_edit_object_v1_response_t](usergroup_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUsergroupAPI_usergroupGetAutocompleteV2**
```c
// Retrieve Usergroups and IDs
//
// Get the list of Usergroup to be used in a dropdown or autocomplete control.
//
usergroup_get_autocomplete_v2_response_t* ObjectUsergroupAPI_usergroupGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_usergroupGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_usergroupGetAutocompleteV2_eFilterActive_e eFilterActive, char * sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_usergroupGetAutocompleteV2_sSelector_e** | The type of Usergroups to return | 
**eFilterActive** | **ezmax_api_definition__full_usergroupGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[usergroup_get_autocomplete_v2_response_t](usergroup_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUsergroupAPI_usergroupGetListV1**
```c
// Retrieve Usergroup list
//
// 
//
usergroup_get_list_v1_response_t* ObjectUsergroupAPI_usergroupGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_usergroupGetListV1_eOrderBy_e eOrderBy, int iRowMax, int iRowOffset, header_accept_language_e Accept_Language, char * sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_usergroupGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int** |  | [optional] 
**iRowOffset** | **int** |  | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[usergroup_get_list_v1_response_t](usergroup_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUsergroupAPI_usergroupGetObjectV2**
```c
// Retrieve an existing Usergroup
//
// 
//
usergroup_get_object_v2_response_t* ObjectUsergroupAPI_usergroupGetObjectV2(apiClient_t *apiClient, int pkiUsergroupID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUsergroupID** | **int** | The unique ID of the Usergroup | 

### Return type

[usergroup_get_object_v2_response_t](usergroup_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

