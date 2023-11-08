# ObjectOtherincomeAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectOtherincomeAPI_otherincomeGetCommunicationListV1**](ObjectOtherincomeAPI.md#ObjectOtherincomeAPI_otherincomeGetCommunicationListV1) | **GET** /1/object/otherincome/{pkiOtherincomeID}/getCommunicationList | Retrieve Communication list


# **ObjectOtherincomeAPI_otherincomeGetCommunicationListV1**
```c
// Retrieve Communication list
//
// 
//
otherincome_get_communication_list_v1_response_t* ObjectOtherincomeAPI_otherincomeGetCommunicationListV1(apiClient_t *apiClient, int pkiOtherincomeID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiOtherincomeID** | **int** |  | 

### Return type

[otherincome_get_communication_list_v1_response_t](otherincome_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

