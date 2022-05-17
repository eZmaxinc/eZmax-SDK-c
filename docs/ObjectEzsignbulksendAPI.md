# ObjectEzsignbulksendAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignbulksendAPI_ezsignbulksendCreateEzsignbulksendtransmissionV1**](ObjectEzsignbulksendAPI.md#ObjectEzsignbulksendAPI_ezsignbulksendCreateEzsignbulksendtransmissionV1) | **POST** /1/object/ezsignbulksend/{pkiEzsignbulksendID}/createEzsignbulksendtransmission | Create a new Ezsignbulksendtransmission in the Ezsignbulksend
[**ObjectEzsignbulksendAPI_ezsignbulksendCreateObjectV1**](ObjectEzsignbulksendAPI.md#ObjectEzsignbulksendAPI_ezsignbulksendCreateObjectV1) | **POST** /1/object/ezsignbulksend | Create a new Ezsignbulksend
[**ObjectEzsignbulksendAPI_ezsignbulksendDeleteObjectV1**](ObjectEzsignbulksendAPI.md#ObjectEzsignbulksendAPI_ezsignbulksendDeleteObjectV1) | **DELETE** /1/object/ezsignbulksend/{pkiEzsignbulksendID} | Delete an existing Ezsignbulksend
[**ObjectEzsignbulksendAPI_ezsignbulksendEditObjectV1**](ObjectEzsignbulksendAPI.md#ObjectEzsignbulksendAPI_ezsignbulksendEditObjectV1) | **PUT** /1/object/ezsignbulksend/{pkiEzsignbulksendID} | Edit an existing Ezsignbulksend
[**ObjectEzsignbulksendAPI_ezsignbulksendGetCsvTemplateV1**](ObjectEzsignbulksendAPI.md#ObjectEzsignbulksendAPI_ezsignbulksendGetCsvTemplateV1) | **GET** /1/object/ezsignbulksend/{pkiEzsignbulksendID}/getCsvTemplate | Retrieve an existing Ezsignbulksend&#39;s empty Csv template
[**ObjectEzsignbulksendAPI_ezsignbulksendGetEzsignbulksendtransmissionsV1**](ObjectEzsignbulksendAPI.md#ObjectEzsignbulksendAPI_ezsignbulksendGetEzsignbulksendtransmissionsV1) | **GET** /1/object/ezsignbulksend/{pkiEzsignbulksendID}/getEzsignbulksendtransmissions | Retrieve an existing Ezsignbulksend&#39;s Ezsignbulksendtransmissions
[**ObjectEzsignbulksendAPI_ezsignbulksendGetFormsDataV1**](ObjectEzsignbulksendAPI.md#ObjectEzsignbulksendAPI_ezsignbulksendGetFormsDataV1) | **GET** /1/object/ezsignbulksend/{pkiEzsignbulksendID}/getFormsData | Retrieve an existing Ezsignbulksend&#39;s forms data
[**ObjectEzsignbulksendAPI_ezsignbulksendGetListV1**](ObjectEzsignbulksendAPI.md#ObjectEzsignbulksendAPI_ezsignbulksendGetListV1) | **GET** /1/object/ezsignbulksend/getList | Retrieve Ezsignbulksend list
[**ObjectEzsignbulksendAPI_ezsignbulksendGetObjectV1**](ObjectEzsignbulksendAPI.md#ObjectEzsignbulksendAPI_ezsignbulksendGetObjectV1) | **GET** /1/object/ezsignbulksend/{pkiEzsignbulksendID} | Retrieve an existing Ezsignbulksend
[**ObjectEzsignbulksendAPI_ezsignbulksendReorderV1**](ObjectEzsignbulksendAPI.md#ObjectEzsignbulksendAPI_ezsignbulksendReorderV1) | **POST** /1/object/ezsignbulksend/{pkiEzsignbulksendID}/reorder | Reorder Ezsignbulksenddocumentmappings in the Ezsignbulksend


# **ObjectEzsignbulksendAPI_ezsignbulksendCreateEzsignbulksendtransmissionV1**
```c
// Create a new Ezsignbulksendtransmission in the Ezsignbulksend
//
ezsignbulksend_create_ezsignbulksendtransmission_v1_response_t* ObjectEzsignbulksendAPI_ezsignbulksendCreateEzsignbulksendtransmissionV1(apiClient_t *apiClient, int pkiEzsignbulksendID, ezsignbulksend_create_ezsignbulksendtransmission_v1_request_t * ezsignbulksend_create_ezsignbulksendtransmission_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignbulksendID** | **int** |  | 
**ezsignbulksend_create_ezsignbulksendtransmission_v1_request** | **[ezsignbulksend_create_ezsignbulksendtransmission_v1_request_t](ezsignbulksend_create_ezsignbulksendtransmission_v1_request.md) \*** |  | 

### Return type

[ezsignbulksend_create_ezsignbulksendtransmission_v1_response_t](ezsignbulksend_create_ezsignbulksendtransmission_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignbulksendAPI_ezsignbulksendCreateObjectV1**
```c
// Create a new Ezsignbulksend
//
// The endpoint allows to create one or many elements at once.
//
ezsignbulksend_create_object_v1_response_t* ObjectEzsignbulksendAPI_ezsignbulksendCreateObjectV1(apiClient_t *apiClient, ezsignbulksend_create_object_v1_request_t * ezsignbulksend_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsignbulksend_create_object_v1_request** | **[ezsignbulksend_create_object_v1_request_t](ezsignbulksend_create_object_v1_request.md) \*** |  | 

### Return type

[ezsignbulksend_create_object_v1_response_t](ezsignbulksend_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignbulksendAPI_ezsignbulksendDeleteObjectV1**
```c
// Delete an existing Ezsignbulksend
//
// 
//
ezsignbulksend_delete_object_v1_response_t* ObjectEzsignbulksendAPI_ezsignbulksendDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignbulksendID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignbulksendID** | **int** |  | 

### Return type

[ezsignbulksend_delete_object_v1_response_t](ezsignbulksend_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignbulksendAPI_ezsignbulksendEditObjectV1**
```c
// Edit an existing Ezsignbulksend
//
// 
//
ezsignbulksend_edit_object_v1_response_t* ObjectEzsignbulksendAPI_ezsignbulksendEditObjectV1(apiClient_t *apiClient, int pkiEzsignbulksendID, ezsignbulksend_edit_object_v1_request_t * ezsignbulksend_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignbulksendID** | **int** |  | 
**ezsignbulksend_edit_object_v1_request** | **[ezsignbulksend_edit_object_v1_request_t](ezsignbulksend_edit_object_v1_request.md) \*** |  | 

### Return type

[ezsignbulksend_edit_object_v1_response_t](ezsignbulksend_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignbulksendAPI_ezsignbulksendGetCsvTemplateV1**
```c
// Retrieve an existing Ezsignbulksend's empty Csv template
//
// 
//
char* ObjectEzsignbulksendAPI_ezsignbulksendGetCsvTemplateV1(apiClient_t *apiClient, int pkiEzsignbulksendID, ezmax_api_definition__full_ezsignbulksendGetCsvTemplateV1_eCsvSeparator_e eCsvSeparator);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignbulksendID** | **int** |  | 
**eCsvSeparator** | **ezmax_api_definition__full_ezsignbulksendGetCsvTemplateV1_eCsvSeparator_e** | Separator that will be used to separate fields | 

### Return type

char*



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/csv, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignbulksendAPI_ezsignbulksendGetEzsignbulksendtransmissionsV1**
```c
// Retrieve an existing Ezsignbulksend's Ezsignbulksendtransmissions
//
// 
//
ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_t* ObjectEzsignbulksendAPI_ezsignbulksendGetEzsignbulksendtransmissionsV1(apiClient_t *apiClient, int pkiEzsignbulksendID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignbulksendID** | **int** |  | 

### Return type

[ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_t](ezsignbulksend_get_ezsignbulksendtransmissions_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignbulksendAPI_ezsignbulksendGetFormsDataV1**
```c
// Retrieve an existing Ezsignbulksend's forms data
//
// 
//
ezsignbulksend_get_forms_data_v1_response_t* ObjectEzsignbulksendAPI_ezsignbulksendGetFormsDataV1(apiClient_t *apiClient, int pkiEzsignbulksendID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignbulksendID** | **int** |  | 

### Return type

[ezsignbulksend_get_forms_data_v1_response_t](ezsignbulksend_get_forms_data_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/zip

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignbulksendAPI_ezsignbulksendGetListV1**
```c
// Retrieve Ezsignbulksend list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eEzsignfoldertypePrivacylevel | User<br>Usergroup |
//
ezsignbulksend_get_list_v1_response_t* ObjectEzsignbulksendAPI_ezsignbulksendGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsignbulksendGetListV1_eOrderBy_e eOrderBy, int iRowMax, int iRowOffset, header_accept_language_e Accept_Language, char * sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_ezsignbulksendGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int** |  | [optional] 
**iRowOffset** | **int** |  | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[ezsignbulksend_get_list_v1_response_t](ezsignbulksend_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignbulksendAPI_ezsignbulksendGetObjectV1**
```c
// Retrieve an existing Ezsignbulksend
//
// 
//
ezsignbulksend_get_object_v1_response_t* ObjectEzsignbulksendAPI_ezsignbulksendGetObjectV1(apiClient_t *apiClient, int pkiEzsignbulksendID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignbulksendID** | **int** |  | 

### Return type

[ezsignbulksend_get_object_v1_response_t](ezsignbulksend_get_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignbulksendAPI_ezsignbulksendReorderV1**
```c
// Reorder Ezsignbulksenddocumentmappings in the Ezsignbulksend
//
ezsignbulksend_reorder_v1_response_t* ObjectEzsignbulksendAPI_ezsignbulksendReorderV1(apiClient_t *apiClient, int pkiEzsignbulksendID, ezsignbulksend_reorder_v1_request_t * ezsignbulksend_reorder_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignbulksendID** | **int** |  | 
**ezsignbulksend_reorder_v1_request** | **[ezsignbulksend_reorder_v1_request_t](ezsignbulksend_reorder_v1_request.md) \*** |  | 

### Return type

[ezsignbulksend_reorder_v1_response_t](ezsignbulksend_reorder_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

