# ObjectNotificationsectionAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectNotificationsectionAPI_notificationsectionGetNotificationtestsV1**](ObjectNotificationsectionAPI.md#ObjectNotificationsectionAPI_notificationsectionGetNotificationtestsV1) | **GET** /1/object/notificationsection/{pkiNotificationsectionID}/getNotificationtests | Retrieve an existing Notificationsection&#39;s Notificationtests


# **ObjectNotificationsectionAPI_notificationsectionGetNotificationtestsV1**
```c
// Retrieve an existing Notificationsection's Notificationtests
//
// 
//
notificationsection_get_notificationtests_v1_response_t* ObjectNotificationsectionAPI_notificationsectionGetNotificationtestsV1(apiClient_t *apiClient, int pkiNotificationsectionID, int bShowHidden);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiNotificationsectionID** | **int \*** |  | 
**bShowHidden** | **int \*** | Whether or not to return the hidden Notificationtests | 

### Return type

[notificationsection_get_notificationtests_v1_response_t](notificationsection_get_notificationtests_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

