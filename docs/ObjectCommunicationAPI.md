# ObjectCommunicationAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectCommunicationAPI_communicationGetCommunicationBodyV1**](ObjectCommunicationAPI.md#ObjectCommunicationAPI_communicationGetCommunicationBodyV1) | **GET** /1/object/communication/{pkiCommunicationID}/getCommunicationBody | Retrieve the communication body.
[**ObjectCommunicationAPI_communicationSendV1**](ObjectCommunicationAPI.md#ObjectCommunicationAPI_communicationSendV1) | **POST** /1/object/communication/send | Send a new Communication


# **ObjectCommunicationAPI_communicationGetCommunicationBodyV1**
```c
// Retrieve the communication body.
//
// This endpoint returns the communication body.
//
void ObjectCommunicationAPI_communicationGetCommunicationBodyV1(apiClient_t *apiClient, int *pkiCommunicationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCommunicationID** | **int \*** |  | 

### Return type

void

### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCommunicationAPI_communicationSendV1**
```c
// Send a new Communication
//
// The endpoint allows to send one or many elements at once.
//
communication_send_v1_response_t* ObjectCommunicationAPI_communicationSendV1(apiClient_t *apiClient, communication_send_v1_request_t *communication_send_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**communication_send_v1_request** | **[communication_send_v1_request_t](communication_send_v1_request.md) \*** |  | 

### Return type

[communication_send_v1_response_t](communication_send_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

