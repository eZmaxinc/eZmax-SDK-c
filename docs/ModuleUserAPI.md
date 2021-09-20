# ModuleUserAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ModuleUserAPI_userCreateEzsignuserV1**](ModuleUserAPI.md#ModuleUserAPI_userCreateEzsignuserV1) | **POST** /1/module/user/createezsignuser | Create a new User of type Ezsignuser


# **ModuleUserAPI_userCreateEzsignuserV1**
```c
// Create a new User of type Ezsignuser
//
// The endpoint allows to initiate the creation or a user of type Ezsignuser.  The user will be created only once the email verification process will be completed
//
user_create_ezsignuser_v1_response_t* ModuleUserAPI_userCreateEzsignuserV1(apiClient_t *apiClient, list_t * user_create_ezsignuser_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**user_create_ezsignuser_v1_request** | **[list_t](user_create_ezsignuser_v1_request.md) \*** |  | 

### Return type

[user_create_ezsignuser_v1_response_t](user_create_ezsignuser_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

