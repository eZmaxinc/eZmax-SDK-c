# ObjectEzsignbulksendAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignbulksendAPI_ezsignbulksendGetListV1**](ObjectEzsignbulksendAPI.md#ObjectEzsignbulksendAPI_ezsignbulksendGetListV1) | **GET** /1/object/ezsignbulksend/getList | Retrieve Ezsignbulksend list
[**ObjectEzsignbulksendAPI_ezsignbulksendGetObjectV1**](ObjectEzsignbulksendAPI.md#ObjectEzsignbulksendAPI_ezsignbulksendGetObjectV1) | **GET** /1/object/ezsignbulksend/{pkiEzsignbulksendID} | Retrieve an existing Ezsignbulksend


# **ObjectEzsignbulksendAPI_ezsignbulksendGetListV1**
```c
// Retrieve Ezsignbulksend list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eEzsignfoldertypePrivacylevel | User<br>Usergroup |
//
ezsignbulksend_get_list_v1_response_t* ObjectEzsignbulksendAPI_ezsignbulksendGetListV1(apiClient_t *apiClient, ezmax_api_definition_ezsignbulksendGetListV1_eOrderBy_e eOrderBy, int iRowMax, int iRowOffset, header_accept_language_e Accept_Language, char * sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition_ezsignbulksendGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
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

