# ObjectDocumenttypechecklistAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectDocumenttypechecklistAPI_documenttypechecklistCreateObjectV1**](ObjectDocumenttypechecklistAPI.md#ObjectDocumenttypechecklistAPI_documenttypechecklistCreateObjectV1) | **POST** /1/object/documenttypechecklist | Create a new Documenttypechecklist
[**ObjectDocumenttypechecklistAPI_documenttypechecklistDeleteObjectV1**](ObjectDocumenttypechecklistAPI.md#ObjectDocumenttypechecklistAPI_documenttypechecklistDeleteObjectV1) | **DELETE** /1/object/documenttypechecklist/{pkiDocumenttypechecklistID} | Delete an existing Documenttypechecklist
[**ObjectDocumenttypechecklistAPI_documenttypechecklistEditObjectV1**](ObjectDocumenttypechecklistAPI.md#ObjectDocumenttypechecklistAPI_documenttypechecklistEditObjectV1) | **PUT** /1/object/documenttypechecklist/{pkiDocumenttypechecklistID} | Edit an existing Documenttypechecklist
[**ObjectDocumenttypechecklistAPI_documenttypechecklistGetListV1**](ObjectDocumenttypechecklistAPI.md#ObjectDocumenttypechecklistAPI_documenttypechecklistGetListV1) | **GET** /1/object/documenttypechecklist/getList | Retrieve Documenttypechecklist list
[**ObjectDocumenttypechecklistAPI_documenttypechecklistGetObjectV2**](ObjectDocumenttypechecklistAPI.md#ObjectDocumenttypechecklistAPI_documenttypechecklistGetObjectV2) | **GET** /2/object/documenttypechecklist/{pkiDocumenttypechecklistID} | Retrieve an existing Documenttypechecklist


# **ObjectDocumenttypechecklistAPI_documenttypechecklistCreateObjectV1**
```c
// Create a new Documenttypechecklist
//
// The endpoint allows to create one or many elements at once.
//
documenttypechecklist_create_object_v1_response_t* ObjectDocumenttypechecklistAPI_documenttypechecklistCreateObjectV1(apiClient_t *apiClient, documenttypechecklist_create_object_v1_request_t *documenttypechecklist_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**documenttypechecklist_create_object_v1_request** | **[documenttypechecklist_create_object_v1_request_t](documenttypechecklist_create_object_v1_request.md) \*** |  | 

### Return type

[documenttypechecklist_create_object_v1_response_t](documenttypechecklist_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDocumenttypechecklistAPI_documenttypechecklistDeleteObjectV1**
```c
// Delete an existing Documenttypechecklist
//
// 
//
documenttypechecklist_delete_object_v1_response_t* ObjectDocumenttypechecklistAPI_documenttypechecklistDeleteObjectV1(apiClient_t *apiClient, int *pkiDocumenttypechecklistID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDocumenttypechecklistID** | **int \*** | The unique ID of the Documenttypechecklist | 

### Return type

[documenttypechecklist_delete_object_v1_response_t](documenttypechecklist_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDocumenttypechecklistAPI_documenttypechecklistEditObjectV1**
```c
// Edit an existing Documenttypechecklist
//
// 
//
documenttypechecklist_edit_object_v1_response_t* ObjectDocumenttypechecklistAPI_documenttypechecklistEditObjectV1(apiClient_t *apiClient, int *pkiDocumenttypechecklistID, documenttypechecklist_edit_object_v1_request_t *documenttypechecklist_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDocumenttypechecklistID** | **int \*** | The unique ID of the Documenttypechecklist | 
**documenttypechecklist_edit_object_v1_request** | **[documenttypechecklist_edit_object_v1_request_t](documenttypechecklist_edit_object_v1_request.md) \*** |  | 

### Return type

[documenttypechecklist_edit_object_v1_response_t](documenttypechecklist_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDocumenttypechecklistAPI_documenttypechecklistGetListV1**
```c
// Retrieve Documenttypechecklist list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eDocumenttypechecklistStatus | Not required<br>Required<br>Filed<br>Justified |
//
documenttypechecklist_get_list_v1_response_t* ObjectDocumenttypechecklistAPI_documenttypechecklistGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_documenttypechecklistGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_documenttypechecklistGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[documenttypechecklist_get_list_v1_response_t](documenttypechecklist_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDocumenttypechecklistAPI_documenttypechecklistGetObjectV2**
```c
// Retrieve an existing Documenttypechecklist
//
// 
//
documenttypechecklist_get_object_v2_response_t* ObjectDocumenttypechecklistAPI_documenttypechecklistGetObjectV2(apiClient_t *apiClient, int *pkiDocumenttypechecklistID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDocumenttypechecklistID** | **int \*** | The unique ID of the Documenttypechecklist | 

### Return type

[documenttypechecklist_get_object_v2_response_t](documenttypechecklist_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

