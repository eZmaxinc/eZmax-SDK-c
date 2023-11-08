# ObjectElectronicfundstransferAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectElectronicfundstransferAPI_eletronicfundstransferGetCommunicationListV1**](ObjectElectronicfundstransferAPI.md#ObjectElectronicfundstransferAPI_eletronicfundstransferGetCommunicationListV1) | **GET** /1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationList | Retrieve Communication list


# **ObjectElectronicfundstransferAPI_eletronicfundstransferGetCommunicationListV1**
```c
// Retrieve Communication list
//
// 
//
electronicfundstransfer_get_communication_list_v1_response_t* ObjectElectronicfundstransferAPI_eletronicfundstransferGetCommunicationListV1(apiClient_t *apiClient, int pkiElectronicfundstransferID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiElectronicfundstransferID** | **int** |  | 

### Return type

[electronicfundstransfer_get_communication_list_v1_response_t](electronicfundstransfer_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

