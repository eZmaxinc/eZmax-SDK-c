# ObjectActivesessionAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectActivesessionAPI_activesessionGetCurrentV1**](ObjectActivesessionAPI.md#ObjectActivesessionAPI_activesessionGetCurrentV1) | **GET** /1/object/activesession/getCurrent | Get Current Activesession


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

