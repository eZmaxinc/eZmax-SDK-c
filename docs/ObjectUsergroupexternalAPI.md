# ObjectUsergroupexternalAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectUsergroupexternalAPI_usergroupexternalCreateObjectV1**](ObjectUsergroupexternalAPI.md#ObjectUsergroupexternalAPI_usergroupexternalCreateObjectV1) | **POST** /1/object/usergroupexternal | Create a new Usergroupexternal
[**ObjectUsergroupexternalAPI_usergroupexternalDeleteObjectV1**](ObjectUsergroupexternalAPI.md#ObjectUsergroupexternalAPI_usergroupexternalDeleteObjectV1) | **DELETE** /1/object/usergroupexternal/{pkiUsergroupexternalID} | Delete an existing Usergroupexternal
[**ObjectUsergroupexternalAPI_usergroupexternalEditObjectV1**](ObjectUsergroupexternalAPI.md#ObjectUsergroupexternalAPI_usergroupexternalEditObjectV1) | **PUT** /1/object/usergroupexternal/{pkiUsergroupexternalID} | Edit an existing Usergroupexternal
[**ObjectUsergroupexternalAPI_usergroupexternalGetAutocompleteV2**](ObjectUsergroupexternalAPI.md#ObjectUsergroupexternalAPI_usergroupexternalGetAutocompleteV2) | **GET** /2/object/usergroupexternal/getAutocomplete/{sSelector} | Retrieve Usergroupexternals and IDs
[**ObjectUsergroupexternalAPI_usergroupexternalGetListV1**](ObjectUsergroupexternalAPI.md#ObjectUsergroupexternalAPI_usergroupexternalGetListV1) | **GET** /1/object/usergroupexternal/getList | Retrieve Usergroupexternal list
[**ObjectUsergroupexternalAPI_usergroupexternalGetObjectV2**](ObjectUsergroupexternalAPI.md#ObjectUsergroupexternalAPI_usergroupexternalGetObjectV2) | **GET** /2/object/usergroupexternal/{pkiUsergroupexternalID} | Retrieve an existing Usergroupexternal
[**ObjectUsergroupexternalAPI_usergroupexternalGetUsergroupexternalmembershipsV1**](ObjectUsergroupexternalAPI.md#ObjectUsergroupexternalAPI_usergroupexternalGetUsergroupexternalmembershipsV1) | **GET** /1/object/usergroupexternal/{pkiUsergroupexternalID}/getUsergroupexternalmemberships | Retrieve an existing Usergroupexternal&#39;s Usergroupexternalmemberships
[**ObjectUsergroupexternalAPI_usergroupexternalGetUsergroupsV1**](ObjectUsergroupexternalAPI.md#ObjectUsergroupexternalAPI_usergroupexternalGetUsergroupsV1) | **GET** /1/object/usergroupexternal/{pkiUsergroupexternalID}/getUsergroups | Get Usergroupexternal&#39;s Usergroups


# **ObjectUsergroupexternalAPI_usergroupexternalCreateObjectV1**
```c
// Create a new Usergroupexternal
//
// The endpoint allows to create one or many elements at once.
//
usergroupexternal_create_object_v1_response_t* ObjectUsergroupexternalAPI_usergroupexternalCreateObjectV1(apiClient_t *apiClient, usergroupexternal_create_object_v1_request_t *usergroupexternal_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**usergroupexternal_create_object_v1_request** | **[usergroupexternal_create_object_v1_request_t](usergroupexternal_create_object_v1_request.md) \*** |  | 

### Return type

[usergroupexternal_create_object_v1_response_t](usergroupexternal_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUsergroupexternalAPI_usergroupexternalDeleteObjectV1**
```c
// Delete an existing Usergroupexternal
//
// 
//
usergroupexternal_delete_object_v1_response_t* ObjectUsergroupexternalAPI_usergroupexternalDeleteObjectV1(apiClient_t *apiClient, int *pkiUsergroupexternalID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUsergroupexternalID** | **int \*** | The unique ID of the Usergroupexternal | 

### Return type

[usergroupexternal_delete_object_v1_response_t](usergroupexternal_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUsergroupexternalAPI_usergroupexternalEditObjectV1**
```c
// Edit an existing Usergroupexternal
//
// 
//
usergroupexternal_edit_object_v1_response_t* ObjectUsergroupexternalAPI_usergroupexternalEditObjectV1(apiClient_t *apiClient, int *pkiUsergroupexternalID, usergroupexternal_edit_object_v1_request_t *usergroupexternal_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUsergroupexternalID** | **int \*** | The unique ID of the Usergroupexternal | 
**usergroupexternal_edit_object_v1_request** | **[usergroupexternal_edit_object_v1_request_t](usergroupexternal_edit_object_v1_request.md) \*** |  | 

### Return type

[usergroupexternal_edit_object_v1_response_t](usergroupexternal_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUsergroupexternalAPI_usergroupexternalGetAutocompleteV2**
```c
// Retrieve Usergroupexternals and IDs
//
// Get the list of Usergroupexternal to be used in a dropdown or autocomplete control.
//
usergroupexternal_get_autocomplete_v2_response_t* ObjectUsergroupexternalAPI_usergroupexternalGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_usergroupexternalGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_usergroupexternalGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_usergroupexternalGetAutocompleteV2_sSelector_e** | The type of Usergroupexternals to return | 
**eFilterActive** | **ezmax_api_definition__full_usergroupexternalGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[usergroupexternal_get_autocomplete_v2_response_t](usergroupexternal_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUsergroupexternalAPI_usergroupexternalGetListV1**
```c
// Retrieve Usergroupexternal list
//
// 
//
usergroupexternal_get_list_v1_response_t* ObjectUsergroupexternalAPI_usergroupexternalGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_usergroupexternalGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_usergroupexternalGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[usergroupexternal_get_list_v1_response_t](usergroupexternal_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUsergroupexternalAPI_usergroupexternalGetObjectV2**
```c
// Retrieve an existing Usergroupexternal
//
// 
//
usergroupexternal_get_object_v2_response_t* ObjectUsergroupexternalAPI_usergroupexternalGetObjectV2(apiClient_t *apiClient, int *pkiUsergroupexternalID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUsergroupexternalID** | **int \*** | The unique ID of the Usergroupexternal | 

### Return type

[usergroupexternal_get_object_v2_response_t](usergroupexternal_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUsergroupexternalAPI_usergroupexternalGetUsergroupexternalmembershipsV1**
```c
// Retrieve an existing Usergroupexternal's Usergroupexternalmemberships
//
usergroupexternal_get_usergroupexternalmemberships_v1_response_t* ObjectUsergroupexternalAPI_usergroupexternalGetUsergroupexternalmembershipsV1(apiClient_t *apiClient, int *pkiUsergroupexternalID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUsergroupexternalID** | **int \*** |  | 

### Return type

[usergroupexternal_get_usergroupexternalmemberships_v1_response_t](usergroupexternal_get_usergroupexternalmemberships_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUsergroupexternalAPI_usergroupexternalGetUsergroupsV1**
```c
// Get Usergroupexternal's Usergroups
//
usergroupexternal_get_usergroups_v1_response_t* ObjectUsergroupexternalAPI_usergroupexternalGetUsergroupsV1(apiClient_t *apiClient, int *pkiUsergroupexternalID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUsergroupexternalID** | **int \*** |  | 

### Return type

[usergroupexternal_get_usergroups_v1_response_t](usergroupexternal_get_usergroups_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

