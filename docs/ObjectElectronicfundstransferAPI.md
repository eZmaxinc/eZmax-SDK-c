# ObjectElectronicfundstransferAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationCountV1**](ObjectElectronicfundstransferAPI.md#ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationCountV1) | **GET** /1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationCount | Retrieve Communication count
[**ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationListV1**](ObjectElectronicfundstransferAPI.md#ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationListV1) | **GET** /1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationList | Retrieve Communication list
[**ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationrecipientsV1**](ObjectElectronicfundstransferAPI.md#ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationrecipientsV1) | **GET** /1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationrecipients | Retrieve Electronicfundstransfer&#39;s Communicationrecipient
[**ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationsendersV1**](ObjectElectronicfundstransferAPI.md#ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationsendersV1) | **GET** /1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationsenders | Retrieve Electronicfundstransfer&#39;s Communicationsender


# **ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationCountV1**
```c
// Retrieve Communication count
//
// 
//
electronicfundstransfer_get_communication_count_v1_response_t* ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationCountV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiElectronicfundstransferID** | **int \*** |  | 

### Return type

[electronicfundstransfer_get_communication_count_v1_response_t](electronicfundstransfer_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationListV1**
```c
// Retrieve Communication list
//
// 
//
electronicfundstransfer_get_communication_list_v1_response_t* ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationListV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiElectronicfundstransferID** | **int \*** |  | 

### Return type

[electronicfundstransfer_get_communication_list_v1_response_t](electronicfundstransfer_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationrecipientsV1**
```c
// Retrieve Electronicfundstransfer's Communicationrecipient
//
// 
//
electronicfundstransfer_get_communicationrecipients_v1_response_t* ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiElectronicfundstransferID** | **int \*** |  | 

### Return type

[electronicfundstransfer_get_communicationrecipients_v1_response_t](electronicfundstransfer_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationsendersV1**
```c
// Retrieve Electronicfundstransfer's Communicationsender
//
// 
//
electronicfundstransfer_get_communicationsenders_v1_response_t* ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiElectronicfundstransferID** | **int \*** |  | 

### Return type

[electronicfundstransfer_get_communicationsenders_v1_response_t](electronicfundstransfer_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

