# ObjectEzsignimportfolderAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignimportfolderAPI_ezsignimportfolderDeleteObjectV1**](ObjectEzsignimportfolderAPI.md#ObjectEzsignimportfolderAPI_ezsignimportfolderDeleteObjectV1) | **DELETE** /1/object/ezsignimportfolder/{pkiEzsignimportfolderID} | Delete an existing Ezsignimportfolder
[**ObjectEzsignimportfolderAPI_ezsignimportfolderGetListV1**](ObjectEzsignimportfolderAPI.md#ObjectEzsignimportfolderAPI_ezsignimportfolderGetListV1) | **GET** /1/object/ezsignimportfolder/getList | Retrieve Ezsignimportfolder list
[**ObjectEzsignimportfolderAPI_ezsignimportfolderGetObjectV2**](ObjectEzsignimportfolderAPI.md#ObjectEzsignimportfolderAPI_ezsignimportfolderGetObjectV2) | **GET** /2/object/ezsignimportfolder/{pkiEzsignimportfolderID} | Retrieve an existing Ezsignimportfolder


# **ObjectEzsignimportfolderAPI_ezsignimportfolderDeleteObjectV1**
```c
// Delete an existing Ezsignimportfolder
//
// 
//
ezsignimportfolder_delete_object_v1_response_t* ObjectEzsignimportfolderAPI_ezsignimportfolderDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignimportfolderID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignimportfolderID** | **int \*** | The unique ID of the Ezsignimportfolder | 

### Return type

[ezsignimportfolder_delete_object_v1_response_t](ezsignimportfolder_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignimportfolderAPI_ezsignimportfolderGetListV1**
```c
// Retrieve Ezsignimportfolder list
//
// 
//
ezsignimportfolder_get_list_v1_response_t* ObjectEzsignimportfolderAPI_ezsignimportfolderGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsignimportfolderGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_ezsignimportfolderGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[ezsignimportfolder_get_list_v1_response_t](ezsignimportfolder_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignimportfolderAPI_ezsignimportfolderGetObjectV2**
```c
// Retrieve an existing Ezsignimportfolder
//
// 
//
ezsignimportfolder_get_object_v2_response_t* ObjectEzsignimportfolderAPI_ezsignimportfolderGetObjectV2(apiClient_t *apiClient, int *pkiEzsignimportfolderID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignimportfolderID** | **int \*** | The unique ID of the Ezsignimportfolder | 

### Return type

[ezsignimportfolder_get_object_v2_response_t](ezsignimportfolder_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

