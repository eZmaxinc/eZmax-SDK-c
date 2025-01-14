# ObjectTranqcontractAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectTranqcontractAPI_tranqcontractGetCommunicationCountV1**](ObjectTranqcontractAPI.md#ObjectTranqcontractAPI_tranqcontractGetCommunicationCountV1) | **GET** /1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationCount | Retrieve Communication count
[**ObjectTranqcontractAPI_tranqcontractGetCommunicationListV1**](ObjectTranqcontractAPI.md#ObjectTranqcontractAPI_tranqcontractGetCommunicationListV1) | **GET** /1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationList | Retrieve Communication list
[**ObjectTranqcontractAPI_tranqcontractGetCommunicationrecipientsV1**](ObjectTranqcontractAPI.md#ObjectTranqcontractAPI_tranqcontractGetCommunicationrecipientsV1) | **GET** /1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationrecipients | Retrieve Tranqcontract&#39;s Communicationrecipient
[**ObjectTranqcontractAPI_tranqcontractGetCommunicationsendersV1**](ObjectTranqcontractAPI.md#ObjectTranqcontractAPI_tranqcontractGetCommunicationsendersV1) | **GET** /1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationsenders | Retrieve Tranqcontract&#39;s Communicationsender


# **ObjectTranqcontractAPI_tranqcontractGetCommunicationCountV1**
```c
// Retrieve Communication count
//
// 
//
tranqcontract_get_communication_count_v1_response_t* ObjectTranqcontractAPI_tranqcontractGetCommunicationCountV1(apiClient_t *apiClient, int *pkiTranqcontractID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiTranqcontractID** | **int \*** |  | 

### Return type

[tranqcontract_get_communication_count_v1_response_t](tranqcontract_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectTranqcontractAPI_tranqcontractGetCommunicationListV1**
```c
// Retrieve Communication list
//
// 
//
tranqcontract_get_communication_list_v1_response_t* ObjectTranqcontractAPI_tranqcontractGetCommunicationListV1(apiClient_t *apiClient, int *pkiTranqcontractID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiTranqcontractID** | **int \*** |  | 

### Return type

[tranqcontract_get_communication_list_v1_response_t](tranqcontract_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectTranqcontractAPI_tranqcontractGetCommunicationrecipientsV1**
```c
// Retrieve Tranqcontract's Communicationrecipient
//
// 
//
tranqcontract_get_communicationrecipients_v1_response_t* ObjectTranqcontractAPI_tranqcontractGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiTranqcontractID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiTranqcontractID** | **int \*** |  | 

### Return type

[tranqcontract_get_communicationrecipients_v1_response_t](tranqcontract_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectTranqcontractAPI_tranqcontractGetCommunicationsendersV1**
```c
// Retrieve Tranqcontract's Communicationsender
//
// 
//
tranqcontract_get_communicationsenders_v1_response_t* ObjectTranqcontractAPI_tranqcontractGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiTranqcontractID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiTranqcontractID** | **int \*** |  | 

### Return type

[tranqcontract_get_communicationsenders_v1_response_t](tranqcontract_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

