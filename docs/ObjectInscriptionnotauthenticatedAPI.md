# ObjectInscriptionnotauthenticatedAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationCountV1**](ObjectInscriptionnotauthenticatedAPI.md#ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationCountV1) | **GET** /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getCommunicationCount | Retrieve Communication count
[**ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationListV1**](ObjectInscriptionnotauthenticatedAPI.md#ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationListV1) | **GET** /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getCommunicationList | Retrieve Communication list
[**ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationrecipientsV1**](ObjectInscriptionnotauthenticatedAPI.md#ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationrecipientsV1) | **GET** /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getCommunicationrecipients | Retrieve Inscriptionnotauthenticated&#39;s Communicationrecipient
[**ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationsendersV1**](ObjectInscriptionnotauthenticatedAPI.md#ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationsendersV1) | **GET** /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getCommunicationsenders | Retrieve Inscriptionnotauthenticated&#39;s Communicationsender


# **ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationCountV1**
```c
// Retrieve Communication count
//
// 
//
inscriptionnotauthenticated_get_communication_count_v1_response_t* ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationCountV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionnotauthenticatedID** | **int \*** |  | 

### Return type

[inscriptionnotauthenticated_get_communication_count_v1_response_t](inscriptionnotauthenticated_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationListV1**
```c
// Retrieve Communication list
//
// 
//
inscriptionnotauthenticated_get_communication_list_v1_response_t* ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationListV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionnotauthenticatedID** | **int \*** |  | 

### Return type

[inscriptionnotauthenticated_get_communication_list_v1_response_t](inscriptionnotauthenticated_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationrecipientsV1**
```c
// Retrieve Inscriptionnotauthenticated's Communicationrecipient
//
// 
//
inscriptionnotauthenticated_get_communicationrecipients_v1_response_t* ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionnotauthenticatedID** | **int \*** |  | 

### Return type

[inscriptionnotauthenticated_get_communicationrecipients_v1_response_t](inscriptionnotauthenticated_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationsendersV1**
```c
// Retrieve Inscriptionnotauthenticated's Communicationsender
//
// 
//
inscriptionnotauthenticated_get_communicationsenders_v1_response_t* ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionnotauthenticatedID** | **int \*** |  | 

### Return type

[inscriptionnotauthenticated_get_communicationsenders_v1_response_t](inscriptionnotauthenticated_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

