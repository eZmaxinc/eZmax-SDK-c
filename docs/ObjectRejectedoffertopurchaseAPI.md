# ObjectRejectedoffertopurchaseAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationCountV1**](ObjectRejectedoffertopurchaseAPI.md#ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationCountV1) | **GET** /1/object/rejectedoffertopurchase/{pkiRejectedoffertopurchaseID}/getCommunicationCount | Retrieve Communication count
[**ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationListV1**](ObjectRejectedoffertopurchaseAPI.md#ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationListV1) | **GET** /1/object/rejectedoffertopurchase/{pkiRejectedoffertopurchaseID}/getCommunicationList | Retrieve Communication list
[**ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationrecipientsV1**](ObjectRejectedoffertopurchaseAPI.md#ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationrecipientsV1) | **GET** /1/object/rejectedoffertopurchase/{pkiRejectedoffertopurchaseID}/getCommunicationrecipients | Retrieve Rejectedoffertopurchase&#39;s Communicationrecipient
[**ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationsendersV1**](ObjectRejectedoffertopurchaseAPI.md#ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationsendersV1) | **GET** /1/object/rejectedoffertopurchase/{pkiRejectedoffertopurchaseID}/getCommunicationsenders | Retrieve Rejectedoffertopurchase&#39;s Communicationsender


# **ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationCountV1**
```c
// Retrieve Communication count
//
// 
//
rejectedoffertopurchase_get_communication_count_v1_response_t* ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationCountV1(apiClient_t *apiClient, int *pkiRejectedoffertopurchaseID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiRejectedoffertopurchaseID** | **int \*** |  | 

### Return type

[rejectedoffertopurchase_get_communication_count_v1_response_t](rejectedoffertopurchase_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationListV1**
```c
// Retrieve Communication list
//
// 
//
rejectedoffertopurchase_get_communication_list_v1_response_t* ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationListV1(apiClient_t *apiClient, int *pkiRejectedoffertopurchaseID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiRejectedoffertopurchaseID** | **int \*** |  | 

### Return type

[rejectedoffertopurchase_get_communication_list_v1_response_t](rejectedoffertopurchase_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationrecipientsV1**
```c
// Retrieve Rejectedoffertopurchase's Communicationrecipient
//
// 
//
rejectedoffertopurchase_get_communicationrecipients_v1_response_t* ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiRejectedoffertopurchaseID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiRejectedoffertopurchaseID** | **int \*** |  | 

### Return type

[rejectedoffertopurchase_get_communicationrecipients_v1_response_t](rejectedoffertopurchase_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationsendersV1**
```c
// Retrieve Rejectedoffertopurchase's Communicationsender
//
// 
//
rejectedoffertopurchase_get_communicationsenders_v1_response_t* ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiRejectedoffertopurchaseID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiRejectedoffertopurchaseID** | **int \*** |  | 

### Return type

[rejectedoffertopurchase_get_communicationsenders_v1_response_t](rejectedoffertopurchase_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

