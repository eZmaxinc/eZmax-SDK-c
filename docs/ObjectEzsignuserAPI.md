# ObjectEzsignuserAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignuserAPI_ezsignuserEditObjectV1**](ObjectEzsignuserAPI.md#ObjectEzsignuserAPI_ezsignuserEditObjectV1) | **PUT** /1/object/ezsignuser/{pkiEzsignuserID} | Edit an existing Ezsignuser
[**ObjectEzsignuserAPI_ezsignuserGetObjectV2**](ObjectEzsignuserAPI.md#ObjectEzsignuserAPI_ezsignuserGetObjectV2) | **GET** /2/object/ezsignuser/{pkiEzsignuserID} | Retrieve an existing Ezsignuser


# **ObjectEzsignuserAPI_ezsignuserEditObjectV1**
```c
// Edit an existing Ezsignuser
//
// 
//
ezsignuser_edit_object_v1_response_t* ObjectEzsignuserAPI_ezsignuserEditObjectV1(apiClient_t *apiClient, int *pkiEzsignuserID, ezsignuser_edit_object_v1_request_t *ezsignuser_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignuserID** | **int \*** | The unique ID of the Ezsignuser | 
**ezsignuser_edit_object_v1_request** | **[ezsignuser_edit_object_v1_request_t](ezsignuser_edit_object_v1_request.md) \*** |  | 

### Return type

[ezsignuser_edit_object_v1_response_t](ezsignuser_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignuserAPI_ezsignuserGetObjectV2**
```c
// Retrieve an existing Ezsignuser
//
// 
//
ezsignuser_get_object_v2_response_t* ObjectEzsignuserAPI_ezsignuserGetObjectV2(apiClient_t *apiClient, int *pkiEzsignuserID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignuserID** | **int \*** | The unique ID of the Ezsignuser | 

### Return type

[ezsignuser_get_object_v2_response_t](ezsignuser_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

