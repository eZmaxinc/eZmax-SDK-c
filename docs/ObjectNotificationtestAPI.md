# ObjectNotificationtestAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectNotificationtestAPI_notificationtestGetElementsV1**](ObjectNotificationtestAPI.md#ObjectNotificationtestAPI_notificationtestGetElementsV1) | **GET** /1/object/notificationtest/{pkiNotificationtestID}/getElements | Retrieve an existing Notificationtest&#39;s Elements


# **ObjectNotificationtestAPI_notificationtestGetElementsV1**
```c
// Retrieve an existing Notificationtest's Elements
//
// 
//
notificationtest_get_elements_v1_response_t* ObjectNotificationtestAPI_notificationtestGetElementsV1(apiClient_t *apiClient, int pkiNotificationtestID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiNotificationtestID** | **int \*** |  | 

### Return type

[notificationtest_get_elements_v1_response_t](notificationtest_get_elements_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

