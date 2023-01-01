# ObjectCommunicationAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectCommunicationAPI_communicationGetObjectV2**](ObjectCommunicationAPI.md#ObjectCommunicationAPI_communicationGetObjectV2) | **GET** /2/object/communication/{pkiCommunicationID} | Retrieve an existing Communication


# **ObjectCommunicationAPI_communicationGetObjectV2**
```c
// Retrieve an existing Communication
//
// 
//
communication_get_object_v2_response_t* ObjectCommunicationAPI_communicationGetObjectV2(apiClient_t *apiClient, int pkiCommunicationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCommunicationID** | **int** |  | 

### Return type

[communication_get_object_v2_response_t](communication_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

