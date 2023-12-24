# ObjectEzsigntemplatedocumentAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentCreateObjectV1**](ObjectEzsigntemplatedocumentAPI.md#ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentCreateObjectV1) | **POST** /1/object/ezsigntemplatedocument | Create a new Ezsigntemplatedocument
[**ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1**](ObjectEzsigntemplatedocumentAPI.md#ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1) | **PUT** /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/editEzsigntemplateformfieldgroups | Edit multiple Ezsigntemplateformfieldgroups
[**ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditEzsigntemplatesignaturesV1**](ObjectEzsigntemplatedocumentAPI.md#ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditEzsigntemplatesignaturesV1) | **PUT** /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/editEzsigntemplatesignatures | Edit multiple Ezsigntemplatesignatures
[**ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditObjectV1**](ObjectEzsigntemplatedocumentAPI.md#ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditObjectV1) | **PUT** /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID} | Edit an existing Ezsigntemplatedocument
[**ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentFlattenV1**](ObjectEzsigntemplatedocumentAPI.md#ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentFlattenV1) | **POST** /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/flatten | Flatten
[**ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1**](ObjectEzsigntemplatedocumentAPI.md#ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1) | **GET** /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/getEzsigntemplatedocumentpages | Retrieve an existing Ezsigntemplatedocument&#39;s Ezsigntemplatedocumentpages
[**ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1**](ObjectEzsigntemplatedocumentAPI.md#ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1) | **GET** /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/getEzsigntemplateformfieldgroups | Retrieve an existing Ezsigntemplatedocument&#39;s Ezsigntemplateformfieldgroups
[**ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplatesignaturesV1**](ObjectEzsigntemplatedocumentAPI.md#ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplatesignaturesV1) | **GET** /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/getEzsigntemplatesignatures | Retrieve an existing Ezsigntemplatedocument&#39;s Ezsigntemplatesignatures
[**ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetObjectV2**](ObjectEzsigntemplatedocumentAPI.md#ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetObjectV2) | **GET** /2/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID} | Retrieve an existing Ezsigntemplatedocument
[**ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetWordsPositionsV1**](ObjectEzsigntemplatedocumentAPI.md#ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetWordsPositionsV1) | **POST** /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/getWordsPositions | Retrieve positions X,Y of given words from a Ezsigntemplatedocument
[**ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentPatchObjectV1**](ObjectEzsigntemplatedocumentAPI.md#ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentPatchObjectV1) | **PATCH** /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID} | Patch an existing Ezsigntemplatedocument


# **ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentCreateObjectV1**
```c
// Create a new Ezsigntemplatedocument
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatedocument_create_object_v1_response_t* ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentCreateObjectV1(apiClient_t *apiClient, ezsigntemplatedocument_create_object_v1_request_t * ezsigntemplatedocument_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsigntemplatedocument_create_object_v1_request** | **[ezsigntemplatedocument_create_object_v1_request_t](ezsigntemplatedocument_create_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatedocument_create_object_v1_response_t](ezsigntemplatedocument_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1**
```c
// Edit multiple Ezsigntemplateformfieldgroups
//
// Using this endpoint, you can edit multiple Ezsigntemplateformfieldgroups at the same time.
//
ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_t* ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1(apiClient_t *apiClient, int pkiEzsigntemplatedocumentID, ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_t * ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatedocumentID** | **int \*** |  | 
**ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request** | **[ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_t](ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_t](ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditEzsigntemplatesignaturesV1**
```c
// Edit multiple Ezsigntemplatesignatures
//
// Using this endpoint, you can edit multiple Ezsigntemplatesignatures at the same time.
//
ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_t* ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditEzsigntemplatesignaturesV1(apiClient_t *apiClient, int pkiEzsigntemplatedocumentID, ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t * ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatedocumentID** | **int \*** |  | 
**ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request** | **[ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t](ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_t](ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditObjectV1**
```c
// Edit an existing Ezsigntemplatedocument
//
// 
//
ezsigntemplatedocument_edit_object_v1_response_t* ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditObjectV1(apiClient_t *apiClient, int pkiEzsigntemplatedocumentID, ezsigntemplatedocument_edit_object_v1_request_t * ezsigntemplatedocument_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatedocumentID** | **int \*** |  | 
**ezsigntemplatedocument_edit_object_v1_request** | **[ezsigntemplatedocument_edit_object_v1_request_t](ezsigntemplatedocument_edit_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatedocument_edit_object_v1_response_t](ezsigntemplatedocument_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentFlattenV1**
```c
// Flatten
//
// Flatten an Ezsigntemplatedocument signatures, forms and annotations. This process finalizes the PDF so that the forms and annotations become part of the document content and cannot be edited.
//
ezsigntemplatedocument_flatten_v1_response_t* ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentFlattenV1(apiClient_t *apiClient, int pkiEzsigntemplatedocumentID, object_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatedocumentID** | **int \*** |  | 
**body** | **[object_t](object.md) \*** |  | 

### Return type

[ezsigntemplatedocument_flatten_v1_response_t](ezsigntemplatedocument_flatten_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1**
```c
// Retrieve an existing Ezsigntemplatedocument's Ezsigntemplatedocumentpages
//
// 
//
ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_t* ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1(apiClient_t *apiClient, int pkiEzsigntemplatedocumentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatedocumentID** | **int \*** |  | 

### Return type

[ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_t](ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1**
```c
// Retrieve an existing Ezsigntemplatedocument's Ezsigntemplateformfieldgroups
//
// 
//
ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_t* ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1(apiClient_t *apiClient, int pkiEzsigntemplatedocumentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatedocumentID** | **int \*** |  | 

### Return type

[ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_t](ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplatesignaturesV1**
```c
// Retrieve an existing Ezsigntemplatedocument's Ezsigntemplatesignatures
//
// 
//
ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_t* ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplatesignaturesV1(apiClient_t *apiClient, int pkiEzsigntemplatedocumentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatedocumentID** | **int \*** |  | 

### Return type

[ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_t](ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetObjectV2**
```c
// Retrieve an existing Ezsigntemplatedocument
//
// 
//
ezsigntemplatedocument_get_object_v2_response_t* ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetObjectV2(apiClient_t *apiClient, int pkiEzsigntemplatedocumentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatedocumentID** | **int \*** |  | 

### Return type

[ezsigntemplatedocument_get_object_v2_response_t](ezsigntemplatedocument_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetWordsPositionsV1**
```c
// Retrieve positions X,Y of given words from a Ezsigntemplatedocument
//
// 
//
ezsigntemplatedocument_get_words_positions_v1_response_t* ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetWordsPositionsV1(apiClient_t *apiClient, int pkiEzsigntemplatedocumentID, ezsigntemplatedocument_get_words_positions_v1_request_t * ezsigntemplatedocument_get_words_positions_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatedocumentID** | **int \*** |  | 
**ezsigntemplatedocument_get_words_positions_v1_request** | **[ezsigntemplatedocument_get_words_positions_v1_request_t](ezsigntemplatedocument_get_words_positions_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatedocument_get_words_positions_v1_response_t](ezsigntemplatedocument_get_words_positions_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentPatchObjectV1**
```c
// Patch an existing Ezsigntemplatedocument
//
// 
//
ezsigntemplatedocument_patch_object_v1_response_t* ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentPatchObjectV1(apiClient_t *apiClient, int pkiEzsigntemplatedocumentID, ezsigntemplatedocument_patch_object_v1_request_t * ezsigntemplatedocument_patch_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatedocumentID** | **int \*** |  | 
**ezsigntemplatedocument_patch_object_v1_request** | **[ezsigntemplatedocument_patch_object_v1_request_t](ezsigntemplatedocument_patch_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatedocument_patch_object_v1_response_t](ezsigntemplatedocument_patch_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

