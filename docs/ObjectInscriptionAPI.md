# ObjectInscriptionAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectInscriptionAPI_inscriptionGetCommunicationListV1**](ObjectInscriptionAPI.md#ObjectInscriptionAPI_inscriptionGetCommunicationListV1) | **GET** /1/object/inscription/{pkiInscriptionID}/getCommunicationList | Retrieve Communication list


# **ObjectInscriptionAPI_inscriptionGetCommunicationListV1**
```c
// Retrieve Communication list
//
// 
//
inscription_get_communication_list_v1_response_t* ObjectInscriptionAPI_inscriptionGetCommunicationListV1(apiClient_t *apiClient, int pkiInscriptionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionID** | **int** |  | 

### Return type

[inscription_get_communication_list_v1_response_t](inscription_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

