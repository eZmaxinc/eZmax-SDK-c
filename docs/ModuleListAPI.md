# ModuleListAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ModuleListAPI_listListpresentationV1**](ModuleListAPI.md#ModuleListAPI_listListpresentationV1) | **POST** /1/module/list/listpresentation/{sListName} | Save all Listpresentation for a specific list


# **ModuleListAPI_listListpresentationV1**
```c
// Save all Listpresentation for a specific list
//
// Users can create many Listpresentations for lists in the system. They can customize orber by, filters, numbers of rows, etc.
//
list_save_listpresentation_v1_response_t* ModuleListAPI_listListpresentationV1(apiClient_t *apiClient, char * sListName, list_save_listpresentation_v1_request_t * list_save_listpresentation_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sListName** | **char \*** | The list Name | 
**list_save_listpresentation_v1_request** | **[list_save_listpresentation_v1_request_t](list_save_listpresentation_v1_request.md) \*** |  | 

### Return type

[list_save_listpresentation_v1_response_t](list_save_listpresentation_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

