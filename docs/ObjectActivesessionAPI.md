# ObjectActivesessionAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectActivesessionAPI_activesessionGetCurrentV1**](ObjectActivesessionAPI.md#ObjectActivesessionAPI_activesessionGetCurrentV1) | **GET** /1/object/activesession/getCurrent | Get Current Activesession
[**ObjectActivesessionAPI_activesessionGetListV1**](ObjectActivesessionAPI.md#ObjectActivesessionAPI_activesessionGetListV1) | **GET** /1/object/activesession/getList | Retrieve Activesession list


# **ObjectActivesessionAPI_activesessionGetCurrentV1**
```c
// Get Current Activesession
//
// Retrieve the details about the current activesession
//
activesession_get_current_v1_response_t* ObjectActivesessionAPI_activesessionGetCurrentV1(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[activesession_get_current_v1_response_t](activesession_get_current_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectActivesessionAPI_activesessionGetListV1**
```c
// Retrieve Activesession list
//
activesession_get_list_v1_response_t* ObjectActivesessionAPI_activesessionGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_activesessionGetListV1_eOrderBy_e eOrderBy, int iRowMax, int iRowOffset, header_accept_language_e Accept_Language, char * sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_activesessionGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int** |  | [optional] 
**iRowOffset** | **int** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[activesession_get_list_v1_response_t](activesession_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

