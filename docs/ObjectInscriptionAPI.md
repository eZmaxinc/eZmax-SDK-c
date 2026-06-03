# ObjectInscriptionAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectInscriptionAPI_inscriptionGetAttachmentsV1**](ObjectInscriptionAPI.md#ObjectInscriptionAPI_inscriptionGetAttachmentsV1) | **GET** /1/object/inscription/{pkiInscriptionID}/getAttachments | Retrieve Inscription&#39;s Attachments
[**ObjectInscriptionAPI_inscriptionGetCommunicationCountV1**](ObjectInscriptionAPI.md#ObjectInscriptionAPI_inscriptionGetCommunicationCountV1) | **GET** /1/object/inscription/{pkiInscriptionID}/getCommunicationCount | Retrieve Communication count
[**ObjectInscriptionAPI_inscriptionGetCommunicationListV1**](ObjectInscriptionAPI.md#ObjectInscriptionAPI_inscriptionGetCommunicationListV1) | **GET** /1/object/inscription/{pkiInscriptionID}/getCommunicationList | Retrieve Communication list
[**ObjectInscriptionAPI_inscriptionGetCommunicationrecipientsV1**](ObjectInscriptionAPI.md#ObjectInscriptionAPI_inscriptionGetCommunicationrecipientsV1) | **GET** /1/object/inscription/{pkiInscriptionID}/getCommunicationrecipients | Retrieve Inscription&#39;s Communicationrecipient
[**ObjectInscriptionAPI_inscriptionGetCommunicationsendersV1**](ObjectInscriptionAPI.md#ObjectInscriptionAPI_inscriptionGetCommunicationsendersV1) | **GET** /1/object/inscription/{pkiInscriptionID}/getCommunicationsenders | Retrieve Inscription&#39;s Communicationsender
[**ObjectInscriptionAPI_inscriptionGetListV1**](ObjectInscriptionAPI.md#ObjectInscriptionAPI_inscriptionGetListV1) | **GET** /1/object/inscription/getList | Retrieve Inscription list
[**ObjectInscriptionAPI_inscriptionImportIntoEDMV1**](ObjectInscriptionAPI.md#ObjectInscriptionAPI_inscriptionImportIntoEDMV1) | **POST** /1/object/inscription/{pkiInscriptionID}/importIntoEDM | Import attachments into the Inscription
[**ObjectInscriptionAPI_inscriptionPrepareFilesTransferV1**](ObjectInscriptionAPI.md#ObjectInscriptionAPI_inscriptionPrepareFilesTransferV1) | **POST** /1/object/inscription/{pkiInscriptionID}/prepareFilesTransfer | Prepares file transfer into EDM


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

# **ObjectInscriptionAPI_inscriptionGetListV1**
```c
// Retrieve Inscription list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eInscriptionStep | TemporaryNotAuthenticated<br>ImportedInscription<br>Inscription<br>ModifiedInscription<br>ContractEnded<br>ExpiredInscription<br>Out-market<br>ImportedNotauthenticated<br>NotAuthenticated<br>ModifiedNotauthenticated<br>Authenticated |  Advanced filters that can be used in query parameter *sFilter*:  | Variable | |---| | sBrokerNameInscriptor | | sBrokerNameSeller | | sContactFirstnameAgentInscriptor | | sContactLastnameAgentInscriptor | | sContactFirstnameAgentSeller | | sContactLastnameAgentSeller |         | sContactFirstnameBuyer | | sContactLastnameBuyer | | sContactFirstnameSeller | | sContactLastnameSeller |  | sContactFirstnameNotaryBuyer | | sContactLastnameNotaryBuyer |  | sContactFirstnameNotarySeller | | sContactLastnameNotarySeller |         
//
inscription_get_list_v1_response_t* ObjectInscriptionAPI_inscriptionGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_inscriptionGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_inscriptionGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[inscription_get_list_v1_response_t](inscription_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionAPI_inscriptionImportIntoEDMV1**
```c
// Import attachments into the Inscription
//
// 
//
inscription_import_into_edm_v1_response_t* ObjectInscriptionAPI_inscriptionImportIntoEDMV1(apiClient_t *apiClient, int *pkiInscriptionID, inscription_import_into_edm_v1_request_t *inscription_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionID** | **int \*** |  | 
**inscription_import_into_edm_v1_request** | **[inscription_import_into_edm_v1_request_t](inscription_import_into_edm_v1_request.md) \*** |  | 

### Return type

[inscription_import_into_edm_v1_response_t](inscription_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionAPI_inscriptionPrepareFilesTransferV1**
```c
// Prepares file transfer into EDM
//
// 
//
inscription_prepare_files_transfer_v1_response_t* ObjectInscriptionAPI_inscriptionPrepareFilesTransferV1(apiClient_t *apiClient, int *pkiInscriptionID, inscription_prepare_files_transfer_v1_request_t *inscription_prepare_files_transfer_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionID** | **int \*** |  | 
**inscription_prepare_files_transfer_v1_request** | **[inscription_prepare_files_transfer_v1_request_t](inscription_prepare_files_transfer_v1_request.md) \*** |  | 

### Return type

[inscription_prepare_files_transfer_v1_response_t](inscription_prepare_files_transfer_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

