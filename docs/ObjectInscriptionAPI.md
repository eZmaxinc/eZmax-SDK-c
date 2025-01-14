# ObjectInscriptionAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectInscriptionAPI_inscriptionGetAttachmentsV1**](ObjectInscriptionAPI.md#ObjectInscriptionAPI_inscriptionGetAttachmentsV1) | **GET** /1/object/inscription/{pkiInscriptionID}/getAttachments | Retrieve Inscription&#39;s Attachments
[**ObjectInscriptionAPI_inscriptionGetCommunicationCountV1**](ObjectInscriptionAPI.md#ObjectInscriptionAPI_inscriptionGetCommunicationCountV1) | **GET** /1/object/inscription/{pkiInscriptionID}/getCommunicationCount | Retrieve Communication count
[**ObjectInscriptionAPI_inscriptionGetCommunicationListV1**](ObjectInscriptionAPI.md#ObjectInscriptionAPI_inscriptionGetCommunicationListV1) | **GET** /1/object/inscription/{pkiInscriptionID}/getCommunicationList | Retrieve Communication list
[**ObjectInscriptionAPI_inscriptionGetCommunicationrecipientsV1**](ObjectInscriptionAPI.md#ObjectInscriptionAPI_inscriptionGetCommunicationrecipientsV1) | **GET** /1/object/inscription/{pkiInscriptionID}/getCommunicationrecipients | Retrieve Inscription&#39;s Communicationrecipient
[**ObjectInscriptionAPI_inscriptionGetCommunicationsendersV1**](ObjectInscriptionAPI.md#ObjectInscriptionAPI_inscriptionGetCommunicationsendersV1) | **GET** /1/object/inscription/{pkiInscriptionID}/getCommunicationsenders | Retrieve Inscription&#39;s Communicationsender


# **ObjectInscriptionAPI_inscriptionGetAttachmentsV1**
```c
// Retrieve Inscription's Attachments
//
// 
//
inscription_get_attachments_v1_response_t* ObjectInscriptionAPI_inscriptionGetAttachmentsV1(apiClient_t *apiClient, int *pkiInscriptionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionID** | **int \*** |  | 

### Return type

[inscription_get_attachments_v1_response_t](inscription_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionAPI_inscriptionGetCommunicationCountV1**
```c
// Retrieve Communication count
//
// 
//
inscription_get_communication_count_v1_response_t* ObjectInscriptionAPI_inscriptionGetCommunicationCountV1(apiClient_t *apiClient, int *pkiInscriptionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionID** | **int \*** |  | 

### Return type

[inscription_get_communication_count_v1_response_t](inscription_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionAPI_inscriptionGetCommunicationListV1**
```c
// Retrieve Communication list
//
// 
//
inscription_get_communication_list_v1_response_t* ObjectInscriptionAPI_inscriptionGetCommunicationListV1(apiClient_t *apiClient, int *pkiInscriptionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionID** | **int \*** |  | 

### Return type

[inscription_get_communication_list_v1_response_t](inscription_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionAPI_inscriptionGetCommunicationrecipientsV1**
```c
// Retrieve Inscription's Communicationrecipient
//
// 
//
inscription_get_communicationrecipients_v1_response_t* ObjectInscriptionAPI_inscriptionGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiInscriptionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionID** | **int \*** |  | 

### Return type

[inscription_get_communicationrecipients_v1_response_t](inscription_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionAPI_inscriptionGetCommunicationsendersV1**
```c
// Retrieve Inscription's Communicationsender
//
// 
//
inscription_get_communicationsenders_v1_response_t* ObjectInscriptionAPI_inscriptionGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiInscriptionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionID** | **int \*** |  | 

### Return type

[inscription_get_communicationsenders_v1_response_t](inscription_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

