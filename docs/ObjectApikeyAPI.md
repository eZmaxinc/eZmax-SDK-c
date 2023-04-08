# ObjectApikeyAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectApikeyAPI_apikeyCreateObjectV2**](ObjectApikeyAPI.md#ObjectApikeyAPI_apikeyCreateObjectV2) | **POST** /2/object/apikey | Create a new Apikey


# **ObjectApikeyAPI_apikeyCreateObjectV2**
```c
// Create a new Apikey
//
// The endpoint allows to create one or many elements at once.
//
apikey_create_object_v2_response_t* ObjectApikeyAPI_apikeyCreateObjectV2(apiClient_t *apiClient, apikey_create_object_v2_request_t * apikey_create_object_v2_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**apikey_create_object_v2_request** | **[apikey_create_object_v2_request_t](apikey_create_object_v2_request.md) \*** |  | 

### Return type

[apikey_create_object_v2_response_t](apikey_create_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

