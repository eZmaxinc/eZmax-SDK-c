# ObjectDocumenttypechecklistAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectDocumenttypechecklistAPI_documenttypechecklistDeleteObjectV1**](ObjectDocumenttypechecklistAPI.md#ObjectDocumenttypechecklistAPI_documenttypechecklistDeleteObjectV1) | **DELETE** /1/object/documenttypechecklist/{pkiDocumenttypechecklistID} | Delete an existing Documenttypechecklist
[**ObjectDocumenttypechecklistAPI_documenttypechecklistPatchObjectV1**](ObjectDocumenttypechecklistAPI.md#ObjectDocumenttypechecklistAPI_documenttypechecklistPatchObjectV1) | **PATCH** /1/object/documenttypechecklist/{pkiDocumenttypechecklistID} | Patch an existing Documenttypechecklist


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

# **ObjectDocumenttypechecklistAPI_documenttypechecklistPatchObjectV1**
```c
// Patch an existing Documenttypechecklist
//
// 
//
documenttypechecklist_patch_object_v1_response_t* ObjectDocumenttypechecklistAPI_documenttypechecklistPatchObjectV1(apiClient_t *apiClient, int *pkiDocumenttypechecklistID, documenttypechecklist_patch_object_v1_request_t *documenttypechecklist_patch_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDocumenttypechecklistID** | **int \*** | The unique ID of the Documenttypechecklist | 
**documenttypechecklist_patch_object_v1_request** | **[documenttypechecklist_patch_object_v1_request_t](documenttypechecklist_patch_object_v1_request.md) \*** |  | 

### Return type

[documenttypechecklist_patch_object_v1_response_t](documenttypechecklist_patch_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

