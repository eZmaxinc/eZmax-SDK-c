# ObjectSystemconfigurationAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectSystemconfigurationAPI_systemconfigurationEditObjectV1**](ObjectSystemconfigurationAPI.md#ObjectSystemconfigurationAPI_systemconfigurationEditObjectV1) | **PUT** /1/object/systemconfiguration/{pkiSystemconfigurationID} | Edit an existing Systemconfiguration
[**ObjectSystemconfigurationAPI_systemconfigurationGetObjectV2**](ObjectSystemconfigurationAPI.md#ObjectSystemconfigurationAPI_systemconfigurationGetObjectV2) | **GET** /2/object/systemconfiguration/{pkiSystemconfigurationID} | Retrieve an existing Systemconfiguration


# **ObjectSystemconfigurationAPI_systemconfigurationEditObjectV1**
```c
// Edit an existing Systemconfiguration
//
// 
//
systemconfiguration_edit_object_v1_response_t* ObjectSystemconfigurationAPI_systemconfigurationEditObjectV1(apiClient_t *apiClient, int *pkiSystemconfigurationID, systemconfiguration_edit_object_v1_request_t *systemconfiguration_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiSystemconfigurationID** | **int \*** | The unique ID of the Systemconfiguration | 
**systemconfiguration_edit_object_v1_request** | **[systemconfiguration_edit_object_v1_request_t](systemconfiguration_edit_object_v1_request.md) \*** |  | 

### Return type

[systemconfiguration_edit_object_v1_response_t](systemconfiguration_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectSystemconfigurationAPI_systemconfigurationGetObjectV2**
```c
// Retrieve an existing Systemconfiguration
//
// 
//
systemconfiguration_get_object_v2_response_t* ObjectSystemconfigurationAPI_systemconfigurationGetObjectV2(apiClient_t *apiClient, int *pkiSystemconfigurationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiSystemconfigurationID** | **int \*** | The unique ID of the Systemconfiguration | 

### Return type

[systemconfiguration_get_object_v2_response_t](systemconfiguration_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

