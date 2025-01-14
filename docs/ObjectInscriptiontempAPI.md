# ObjectInscriptiontempAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectInscriptiontempAPI_inscriptiontempGetCommunicationCountV1**](ObjectInscriptiontempAPI.md#ObjectInscriptiontempAPI_inscriptiontempGetCommunicationCountV1) | **GET** /1/object/inscriptiontemp/{pkiInscriptiontempID}/getCommunicationCount | Retrieve Communication count
[**ObjectInscriptiontempAPI_inscriptiontempGetCommunicationListV1**](ObjectInscriptiontempAPI.md#ObjectInscriptiontempAPI_inscriptiontempGetCommunicationListV1) | **GET** /1/object/inscriptiontemp/{pkiInscriptiontempID}/getCommunicationList | Retrieve Communication list
[**ObjectInscriptiontempAPI_inscriptiontempGetCommunicationrecipientsV1**](ObjectInscriptiontempAPI.md#ObjectInscriptiontempAPI_inscriptiontempGetCommunicationrecipientsV1) | **GET** /1/object/inscriptiontemp/{pkiInscriptiontempID}/getCommunicationrecipients | Retrieve Inscriptiontemp&#39;s Communicationrecipient
[**ObjectInscriptiontempAPI_inscriptiontempGetCommunicationsendersV1**](ObjectInscriptiontempAPI.md#ObjectInscriptiontempAPI_inscriptiontempGetCommunicationsendersV1) | **GET** /1/object/inscriptiontemp/{pkiInscriptiontempID}/getCommunicationsenders | Retrieve Inscriptiontemp&#39;s Communicationsender


# **ObjectInscriptiontempAPI_inscriptiontempGetCommunicationCountV1**
```c
// Retrieve Communication count
//
// 
//
inscriptiontemp_get_communication_count_v1_response_t* ObjectInscriptiontempAPI_inscriptiontempGetCommunicationCountV1(apiClient_t *apiClient, int *pkiInscriptiontempID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptiontempID** | **int \*** |  | 

### Return type

[inscriptiontemp_get_communication_count_v1_response_t](inscriptiontemp_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptiontempAPI_inscriptiontempGetCommunicationListV1**
```c
// Retrieve Communication list
//
// 
//
inscriptiontemp_get_communication_list_v1_response_t* ObjectInscriptiontempAPI_inscriptiontempGetCommunicationListV1(apiClient_t *apiClient, int *pkiInscriptiontempID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptiontempID** | **int \*** |  | 

### Return type

[inscriptiontemp_get_communication_list_v1_response_t](inscriptiontemp_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptiontempAPI_inscriptiontempGetCommunicationrecipientsV1**
```c
// Retrieve Inscriptiontemp's Communicationrecipient
//
// 
//
inscriptiontemp_get_communicationrecipients_v1_response_t* ObjectInscriptiontempAPI_inscriptiontempGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiInscriptiontempID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptiontempID** | **int \*** |  | 

### Return type

[inscriptiontemp_get_communicationrecipients_v1_response_t](inscriptiontemp_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptiontempAPI_inscriptiontempGetCommunicationsendersV1**
```c
// Retrieve Inscriptiontemp's Communicationsender
//
// 
//
inscriptiontemp_get_communicationsenders_v1_response_t* ObjectInscriptiontempAPI_inscriptiontempGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiInscriptiontempID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptiontempID** | **int \*** |  | 

### Return type

[inscriptiontemp_get_communicationsenders_v1_response_t](inscriptiontemp_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

