# ObjectBuyercontractAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectBuyercontractAPI_buyercontractGetCommunicationCountV1**](ObjectBuyercontractAPI.md#ObjectBuyercontractAPI_buyercontractGetCommunicationCountV1) | **GET** /1/object/buyercontract/{pkiBuyercontractID}/getCommunicationCount | Retrieve Communication count
[**ObjectBuyercontractAPI_buyercontractGetCommunicationListV1**](ObjectBuyercontractAPI.md#ObjectBuyercontractAPI_buyercontractGetCommunicationListV1) | **GET** /1/object/buyercontract/{pkiBuyercontractID}/getCommunicationList | Retrieve Communication list
[**ObjectBuyercontractAPI_buyercontractGetCommunicationrecipientsV1**](ObjectBuyercontractAPI.md#ObjectBuyercontractAPI_buyercontractGetCommunicationrecipientsV1) | **GET** /1/object/buyercontract/{pkiBuyercontractID}/getCommunicationrecipients | Retrieve Buyercontract&#39;s Communicationrecipient
[**ObjectBuyercontractAPI_buyercontractGetCommunicationsendersV1**](ObjectBuyercontractAPI.md#ObjectBuyercontractAPI_buyercontractGetCommunicationsendersV1) | **GET** /1/object/buyercontract/{pkiBuyercontractID}/getCommunicationsenders | Retrieve Buyercontract&#39;s Communicationsender


# **ObjectBuyercontractAPI_buyercontractGetCommunicationCountV1**
```c
// Retrieve Communication count
//
// 
//
buyercontract_get_communication_count_v1_response_t* ObjectBuyercontractAPI_buyercontractGetCommunicationCountV1(apiClient_t *apiClient, int *pkiBuyercontractID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBuyercontractID** | **int \*** |  | 

### Return type

[buyercontract_get_communication_count_v1_response_t](buyercontract_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

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

# **ObjectBuyercontractAPI_buyercontractGetCommunicationrecipientsV1**
```c
// Retrieve Buyercontract's Communicationrecipient
//
// 
//
buyercontract_get_communicationrecipients_v1_response_t* ObjectBuyercontractAPI_buyercontractGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiBuyercontractID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBuyercontractID** | **int \*** |  | 

### Return type

[buyercontract_get_communicationrecipients_v1_response_t](buyercontract_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBuyercontractAPI_buyercontractGetCommunicationsendersV1**
```c
// Retrieve Buyercontract's Communicationsender
//
// 
//
buyercontract_get_communicationsenders_v1_response_t* ObjectBuyercontractAPI_buyercontractGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiBuyercontractID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBuyercontractID** | **int \*** |  | 

### Return type

[buyercontract_get_communicationsenders_v1_response_t](buyercontract_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

