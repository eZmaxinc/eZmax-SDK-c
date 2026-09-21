# ObjectDeposittransitchequeAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectDeposittransitchequeAPI_deposittransitchequeBatchDownloadV1**](ObjectDeposittransitchequeAPI.md#ObjectDeposittransitchequeAPI_deposittransitchequeBatchDownloadV1) | **POST** /1/object/deposittransitcheque/{pkiDeposittransitchequeID}/batchDownload | Download multiples attachments from a Deposittransitcheque
[**ObjectDeposittransitchequeAPI_deposittransitchequeGetAttachmentsV1**](ObjectDeposittransitchequeAPI.md#ObjectDeposittransitchequeAPI_deposittransitchequeGetAttachmentsV1) | **GET** /1/object/deposittransitcheque/{pkiDeposittransitchequeID}/getAttachments | Retrieve Deposittransitcheque&#39;s attachments
[**ObjectDeposittransitchequeAPI_deposittransitchequeGetCommunicationCountV1**](ObjectDeposittransitchequeAPI.md#ObjectDeposittransitchequeAPI_deposittransitchequeGetCommunicationCountV1) | **GET** /1/object/deposittransitcheque/{pkiDeposittransitchequeID}/getCommunicationCount | Retrieve Communication count
[**ObjectDeposittransitchequeAPI_deposittransitchequeGetCommunicationListV1**](ObjectDeposittransitchequeAPI.md#ObjectDeposittransitchequeAPI_deposittransitchequeGetCommunicationListV1) | **GET** /1/object/deposittransitcheque/{pkiDeposittransitchequeID}/getCommunicationList | Retrieve Communication list
[**ObjectDeposittransitchequeAPI_deposittransitchequeGetCommunicationrecipientsV1**](ObjectDeposittransitchequeAPI.md#ObjectDeposittransitchequeAPI_deposittransitchequeGetCommunicationrecipientsV1) | **GET** /1/object/deposittransitcheque/{pkiDeposittransitchequeID}/getCommunicationrecipients | Retrieve Communication recipients
[**ObjectDeposittransitchequeAPI_deposittransitchequeGetCommunicationsendersV1**](ObjectDeposittransitchequeAPI.md#ObjectDeposittransitchequeAPI_deposittransitchequeGetCommunicationsendersV1) | **GET** /1/object/deposittransitcheque/{pkiDeposittransitchequeID}/getCommunicationsenders | Retrieve Communication senders
[**ObjectDeposittransitchequeAPI_deposittransitchequeGetListV1**](ObjectDeposittransitchequeAPI.md#ObjectDeposittransitchequeAPI_deposittransitchequeGetListV1) | **GET** /1/object/deposittransitcheque/getList | Retrieve Deposittransitcheque list
[**ObjectDeposittransitchequeAPI_deposittransitchequeImportIntoEDMV1**](ObjectDeposittransitchequeAPI.md#ObjectDeposittransitchequeAPI_deposittransitchequeImportIntoEDMV1) | **POST** /1/object/deposittransitcheque/{pkiDeposittransitchequeID}/importIntoEDM | Import attachments into the Deposittransitcheque


# **ObjectDeposittransitchequeAPI_deposittransitchequeBatchDownloadV1**
```c
// Download multiples attachments from a Deposittransitcheque
//
binary_t** ObjectDeposittransitchequeAPI_deposittransitchequeBatchDownloadV1(apiClient_t *apiClient, int *pkiDeposittransitchequeID, deposittransitcheque_batch_download_v1_request_t *deposittransitcheque_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDeposittransitchequeID** | **int \*** |  | 
**deposittransitcheque_batch_download_v1_request** | **[deposittransitcheque_batch_download_v1_request_t](deposittransitcheque_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDeposittransitchequeAPI_deposittransitchequeGetAttachmentsV1**
```c
// Retrieve Deposittransitcheque's attachments
//
deposittransitcheque_get_attachments_v1_response_t* ObjectDeposittransitchequeAPI_deposittransitchequeGetAttachmentsV1(apiClient_t *apiClient, int *pkiDeposittransitchequeID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDeposittransitchequeID** | **int \*** |  | 

### Return type

[deposittransitcheque_get_attachments_v1_response_t](deposittransitcheque_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDeposittransitchequeAPI_deposittransitchequeGetCommunicationCountV1**
```c
// Retrieve Communication count
//
deposittransitcheque_get_communication_count_v1_response_t* ObjectDeposittransitchequeAPI_deposittransitchequeGetCommunicationCountV1(apiClient_t *apiClient, int *pkiDeposittransitchequeID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDeposittransitchequeID** | **int \*** |  | 

### Return type

[deposittransitcheque_get_communication_count_v1_response_t](deposittransitcheque_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDeposittransitchequeAPI_deposittransitchequeGetCommunicationListV1**
```c
// Retrieve Communication list
//
deposittransitcheque_get_communication_list_v1_response_t* ObjectDeposittransitchequeAPI_deposittransitchequeGetCommunicationListV1(apiClient_t *apiClient, int *pkiDeposittransitchequeID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDeposittransitchequeID** | **int \*** |  | 

### Return type

[deposittransitcheque_get_communication_list_v1_response_t](deposittransitcheque_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDeposittransitchequeAPI_deposittransitchequeGetCommunicationrecipientsV1**
```c
// Retrieve Communication recipients
//
deposittransitcheque_get_communicationrecipients_v1_response_t* ObjectDeposittransitchequeAPI_deposittransitchequeGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiDeposittransitchequeID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDeposittransitchequeID** | **int \*** |  | 

### Return type

[deposittransitcheque_get_communicationrecipients_v1_response_t](deposittransitcheque_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDeposittransitchequeAPI_deposittransitchequeGetCommunicationsendersV1**
```c
// Retrieve Communication senders
//
deposittransitcheque_get_communicationsenders_v1_response_t* ObjectDeposittransitchequeAPI_deposittransitchequeGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiDeposittransitchequeID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDeposittransitchequeID** | **int \*** |  | 

### Return type

[deposittransitcheque_get_communicationsenders_v1_response_t](deposittransitcheque_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDeposittransitchequeAPI_deposittransitchequeGetListV1**
```c
// Retrieve Deposittransitcheque list
//
// 
//
deposittransitcheque_get_list_v1_response_t* ObjectDeposittransitchequeAPI_deposittransitchequeGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_deposittransitchequeGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_deposittransitchequeGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[deposittransitcheque_get_list_v1_response_t](deposittransitcheque_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDeposittransitchequeAPI_deposittransitchequeImportIntoEDMV1**
```c
// Import attachments into the Deposittransitcheque
//
deposittransitcheque_import_into_edm_v1_response_t* ObjectDeposittransitchequeAPI_deposittransitchequeImportIntoEDMV1(apiClient_t *apiClient, int *pkiDeposittransitchequeID, deposittransitcheque_import_into_edm_v1_request_t *deposittransitcheque_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDeposittransitchequeID** | **int \*** |  | 
**deposittransitcheque_import_into_edm_v1_request** | **[deposittransitcheque_import_into_edm_v1_request_t](deposittransitcheque_import_into_edm_v1_request.md) \*** |  | 

### Return type

[deposittransitcheque_import_into_edm_v1_response_t](deposittransitcheque_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

