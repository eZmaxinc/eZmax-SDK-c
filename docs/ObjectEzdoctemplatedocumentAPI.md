# ObjectEzdoctemplatedocumentAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentCreateObjectV1**](ObjectEzdoctemplatedocumentAPI.md#ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentCreateObjectV1) | **POST** /1/object/ezdoctemplatedocument | Create a new Ezdoctemplatedocument
[**ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentDownloadV1**](ObjectEzdoctemplatedocumentAPI.md#ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentDownloadV1) | **GET** /1/object/ezdoctemplatedocument/{pkiEzdoctemplatedocumentID}/download | Retrieve the content
[**ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentEditObjectV1**](ObjectEzdoctemplatedocumentAPI.md#ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentEditObjectV1) | **PUT** /1/object/ezdoctemplatedocument/{pkiEzdoctemplatedocumentID} | Edit an existing Ezdoctemplatedocument
[**ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetAutocompleteV2**](ObjectEzdoctemplatedocumentAPI.md#ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetAutocompleteV2) | **GET** /2/object/ezdoctemplatedocument/getAutocomplete/{sSelector} | Retrieve Ezdoctemplatedocuments and IDs
[**ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetListV1**](ObjectEzdoctemplatedocumentAPI.md#ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetListV1) | **GET** /1/object/ezdoctemplatedocument/getList | Retrieve Ezdoctemplatedocument list
[**ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetObjectV2**](ObjectEzdoctemplatedocumentAPI.md#ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetObjectV2) | **GET** /2/object/ezdoctemplatedocument/{pkiEzdoctemplatedocumentID} | Retrieve an existing Ezdoctemplatedocument
[**ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentPatchObjectV1**](ObjectEzdoctemplatedocumentAPI.md#ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentPatchObjectV1) | **PATCH** /1/object/ezdoctemplatedocument/{pkiEzdoctemplatedocumentID} | Patch an existing Ezdoctemplatedocument


# **ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentCreateObjectV1**
```c
// Create a new Ezdoctemplatedocument
//
// The endpoint allows to create one or many elements at once.
//
ezdoctemplatedocument_create_object_v1_response_t* ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentCreateObjectV1(apiClient_t *apiClient, ezdoctemplatedocument_create_object_v1_request_t *ezdoctemplatedocument_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezdoctemplatedocument_create_object_v1_request** | **[ezdoctemplatedocument_create_object_v1_request_t](ezdoctemplatedocument_create_object_v1_request.md) \*** |  | 

### Return type

[ezdoctemplatedocument_create_object_v1_response_t](ezdoctemplatedocument_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentDownloadV1**
```c
// Retrieve the content
//
// Using this endpoint, you can retrieve the content of an ezdoctemplatedocument.
//
void ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentDownloadV1(apiClient_t *apiClient, int *pkiEzdoctemplatedocumentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzdoctemplatedocumentID** | **int \*** |  | 

### Return type

void

### Authorization

[Authorization](../README.md#Authorization), [Presigned](../README.md#Presigned)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentEditObjectV1**
```c
// Edit an existing Ezdoctemplatedocument
//
// 
//
common_response_t* ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentEditObjectV1(apiClient_t *apiClient, int *pkiEzdoctemplatedocumentID, ezdoctemplatedocument_edit_object_v1_request_t *ezdoctemplatedocument_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzdoctemplatedocumentID** | **int \*** | The unique ID of the Ezdoctemplatedocument | 
**ezdoctemplatedocument_edit_object_v1_request** | **[ezdoctemplatedocument_edit_object_v1_request_t](ezdoctemplatedocument_edit_object_v1_request.md) \*** |  | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetAutocompleteV2**
```c
// Retrieve Ezdoctemplatedocuments and IDs
//
// Get the list of Ezdoctemplatedocument to be used in a dropdown or autocomplete control.
//
ezdoctemplatedocument_get_autocomplete_v2_response_t* ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_eType_e eType, char *fkiEzsignfoldertypeID, ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_sSelector_e** | The type of Ezdoctemplatedocuments to return | 
**eType** | **ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_eType_e** | The type of Ezdoctemplatedocument | [default to &#39;CompanyEzsignfoldertype&#39;]
**fkiEzsignfoldertypeID** | **char \*** | Specify which fkiEzsignfoldertypeID we want to display. only used when eType &#x3D; Ezsignfoldertype | [optional] 
**eFilterActive** | **ezmax_api_definition__full_ezdoctemplatedocumentGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[ezdoctemplatedocument_get_autocomplete_v2_response_t](ezdoctemplatedocument_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetListV1**
```c
// Retrieve Ezdoctemplatedocument list
//
// 
//
ezdoctemplatedocument_get_list_v1_response_t* ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_ezdoctemplatedocumentGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_ezdoctemplatedocumentGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[ezdoctemplatedocument_get_list_v1_response_t](ezdoctemplatedocument_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetObjectV2**
```c
// Retrieve an existing Ezdoctemplatedocument
//
// 
//
ezdoctemplatedocument_get_object_v2_response_t* ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentGetObjectV2(apiClient_t *apiClient, int *pkiEzdoctemplatedocumentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzdoctemplatedocumentID** | **int \*** | The unique ID of the Ezdoctemplatedocument | 

### Return type

[ezdoctemplatedocument_get_object_v2_response_t](ezdoctemplatedocument_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentPatchObjectV1**
```c
// Patch an existing Ezdoctemplatedocument
//
// 
//
common_response_t* ObjectEzdoctemplatedocumentAPI_ezdoctemplatedocumentPatchObjectV1(apiClient_t *apiClient, int *pkiEzdoctemplatedocumentID, ezdoctemplatedocument_patch_object_v1_request_t *ezdoctemplatedocument_patch_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzdoctemplatedocumentID** | **int \*** | The unique ID of the Ezdoctemplatedocument | 
**ezdoctemplatedocument_patch_object_v1_request** | **[ezdoctemplatedocument_patch_object_v1_request_t](ezdoctemplatedocument_patch_object_v1_request.md) \*** |  | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

