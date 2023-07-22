# ObjectModulegroupAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectModulegroupAPI_modulegroupGetAllV1**](ObjectModulegroupAPI.md#ObjectModulegroupAPI_modulegroupGetAllV1) | **GET** /1/object/modulegroup/getAll/{eContext} | Retrieve all Modulegroups


# **ObjectModulegroupAPI_modulegroupGetAllV1**
```c
// Retrieve all Modulegroups
//
modulegroup_get_all_v1_response_t* ObjectModulegroupAPI_modulegroupGetAllV1(apiClient_t *apiClient, ezmax_api_definition__full_modulegroupGetAllV1_eContext_e eContext);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eContext** | **ezmax_api_definition__full_modulegroupGetAllV1_eContext_e** | The context of the Modulegroup | 

### Return type

[modulegroup_get_all_v1_response_t](modulegroup_get_all_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

