# ObjectNotaryAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectNotaryAPI_notaryBatchDownloadV1**](ObjectNotaryAPI.md#ObjectNotaryAPI_notaryBatchDownloadV1) | **POST** /1/object/notary/{pkiNotaryID}/batchDownload | Download multiples attachments from a Notary
[**ObjectNotaryAPI_notaryGetAttachmentsV1**](ObjectNotaryAPI.md#ObjectNotaryAPI_notaryGetAttachmentsV1) | **GET** /1/object/notary/{pkiNotaryID}/getAttachments | Retrieve Notary&#39;s attachments
[**ObjectNotaryAPI_notaryGetCommunicationCountV1**](ObjectNotaryAPI.md#ObjectNotaryAPI_notaryGetCommunicationCountV1) | **GET** /1/object/notary/{pkiNotaryID}/getCommunicationCount | Retrieve Communication count
[**ObjectNotaryAPI_notaryGetCommunicationListV1**](ObjectNotaryAPI.md#ObjectNotaryAPI_notaryGetCommunicationListV1) | **GET** /1/object/notary/{pkiNotaryID}/getCommunicationList | Retrieve Communication list
[**ObjectNotaryAPI_notaryGetCommunicationrecipientsV1**](ObjectNotaryAPI.md#ObjectNotaryAPI_notaryGetCommunicationrecipientsV1) | **GET** /1/object/notary/{pkiNotaryID}/getCommunicationrecipients | Retrieve Communication recipients
[**ObjectNotaryAPI_notaryGetCommunicationsendersV1**](ObjectNotaryAPI.md#ObjectNotaryAPI_notaryGetCommunicationsendersV1) | **GET** /1/object/notary/{pkiNotaryID}/getCommunicationsenders | Retrieve Communication senders
[**ObjectNotaryAPI_notaryGetListV1**](ObjectNotaryAPI.md#ObjectNotaryAPI_notaryGetListV1) | **GET** /1/object/notary/getList | Retrieve Notary list
[**ObjectNotaryAPI_notaryImportIntoEDMV1**](ObjectNotaryAPI.md#ObjectNotaryAPI_notaryImportIntoEDMV1) | **POST** /1/object/notary/{pkiNotaryID}/importIntoEDM | Import attachments into the Notary


# **ObjectNotaryAPI_notaryBatchDownloadV1**
```c
// Download multiples attachments from a Notary
//
binary_t** ObjectNotaryAPI_notaryBatchDownloadV1(apiClient_t *apiClient, int *pkiNotaryID, notary_batch_download_v1_request_t *notary_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiNotaryID** | **int \*** |  | 
**notary_batch_download_v1_request** | **[notary_batch_download_v1_request_t](notary_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectNotaryAPI_notaryGetAttachmentsV1**
```c
// Retrieve Notary's attachments
//
notary_get_attachments_v1_response_t* ObjectNotaryAPI_notaryGetAttachmentsV1(apiClient_t *apiClient, int *pkiNotaryID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiNotaryID** | **int \*** |  | 

### Return type

[notary_get_attachments_v1_response_t](notary_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectNotaryAPI_notaryGetCommunicationCountV1**
```c
// Retrieve Communication count
//
notary_get_communication_count_v1_response_t* ObjectNotaryAPI_notaryGetCommunicationCountV1(apiClient_t *apiClient, int *pkiNotaryID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiNotaryID** | **int \*** |  | 

### Return type

[notary_get_communication_count_v1_response_t](notary_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectNotaryAPI_notaryGetCommunicationListV1**
```c
// Retrieve Communication list
//
notary_get_communication_list_v1_response_t* ObjectNotaryAPI_notaryGetCommunicationListV1(apiClient_t *apiClient, int *pkiNotaryID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiNotaryID** | **int \*** |  | 

### Return type

[notary_get_communication_list_v1_response_t](notary_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectNotaryAPI_notaryGetCommunicationrecipientsV1**
```c
// Retrieve Communication recipients
//
notary_get_communicationrecipients_v1_response_t* ObjectNotaryAPI_notaryGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiNotaryID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiNotaryID** | **int \*** |  | 

### Return type

[notary_get_communicationrecipients_v1_response_t](notary_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectNotaryAPI_notaryGetCommunicationsendersV1**
```c
// Retrieve Communication senders
//
notary_get_communicationsenders_v1_response_t* ObjectNotaryAPI_notaryGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiNotaryID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiNotaryID** | **int \*** |  | 

### Return type

[notary_get_communicationsenders_v1_response_t](notary_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectNotaryAPI_notaryGetListV1**
```c
// Retrieve Notary list
//
// 
//
notary_get_list_v1_response_t* ObjectNotaryAPI_notaryGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_notaryGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_notaryGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[notary_get_list_v1_response_t](notary_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectNotaryAPI_notaryImportIntoEDMV1**
```c
// Import attachments into the Notary
//
notary_import_into_edm_v1_response_t* ObjectNotaryAPI_notaryImportIntoEDMV1(apiClient_t *apiClient, int *pkiNotaryID, notary_import_into_edm_v1_request_t *notary_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiNotaryID** | **int \*** |  | 
**notary_import_into_edm_v1_request** | **[notary_import_into_edm_v1_request_t](notary_import_into_edm_v1_request.md) \*** |  | 

### Return type

[notary_import_into_edm_v1_response_t](notary_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

