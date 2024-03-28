# ObjectVersionhistoryAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectVersionhistoryAPI_versionhistoryGetObjectV2**](ObjectVersionhistoryAPI.md#ObjectVersionhistoryAPI_versionhistoryGetObjectV2) | **GET** /2/object/versionhistory/{pkiVersionhistoryID} | Retrieve an existing Versionhistory


# **ObjectVersionhistoryAPI_versionhistoryGetObjectV2**
```c
// Retrieve an existing Versionhistory
//
// 
//
versionhistory_get_object_v2_response_t* ObjectVersionhistoryAPI_versionhistoryGetObjectV2(apiClient_t *apiClient, int *pkiVersionhistoryID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiVersionhistoryID** | **int \*** |  | 

### Return type

[versionhistory_get_object_v2_response_t](versionhistory_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

