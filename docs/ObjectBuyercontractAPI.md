# ObjectBuyercontractAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectBuyercontractAPI_buyercontractGetCommunicationListV1**](ObjectBuyercontractAPI.md#ObjectBuyercontractAPI_buyercontractGetCommunicationListV1) | **GET** /1/object/buyercontract/{pkiBuyercontractID}/getCommunicationList | Retrieve Communication list


# **ObjectBuyercontractAPI_buyercontractGetCommunicationListV1**
```c
// Retrieve Communication list
//
// 
//
buyercontract_get_communication_list_v1_response_t* ObjectBuyercontractAPI_buyercontractGetCommunicationListV1(apiClient_t *apiClient, int *pkiBuyercontractID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBuyercontractID** | **int \*** |  | 

### Return type

[buyercontract_get_communication_list_v1_response_t](buyercontract_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

