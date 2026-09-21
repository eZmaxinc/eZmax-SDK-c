# ObjectOfficetaxreportAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectOfficetaxreportAPI_officetaxreportBatchDownloadV1**](ObjectOfficetaxreportAPI.md#ObjectOfficetaxreportAPI_officetaxreportBatchDownloadV1) | **POST** /1/object/officetaxreport/{pkiOfficetaxreportID}/batchDownload | Download multiples attachments from an Officetaxreport
[**ObjectOfficetaxreportAPI_officetaxreportGetAttachmentsV1**](ObjectOfficetaxreportAPI.md#ObjectOfficetaxreportAPI_officetaxreportGetAttachmentsV1) | **GET** /1/object/officetaxreport/{pkiOfficetaxreportID}/getAttachments | Retrieve Officetaxreport&#39;s attachments
[**ObjectOfficetaxreportAPI_officetaxreportGetCommunicationCountV1**](ObjectOfficetaxreportAPI.md#ObjectOfficetaxreportAPI_officetaxreportGetCommunicationCountV1) | **GET** /1/object/officetaxreport/{pkiOfficetaxreportID}/getCommunicationCount | Retrieve Communication count
[**ObjectOfficetaxreportAPI_officetaxreportGetCommunicationListV1**](ObjectOfficetaxreportAPI.md#ObjectOfficetaxreportAPI_officetaxreportGetCommunicationListV1) | **GET** /1/object/officetaxreport/{pkiOfficetaxreportID}/getCommunicationList | Retrieve Communication list
[**ObjectOfficetaxreportAPI_officetaxreportGetCommunicationrecipientsV1**](ObjectOfficetaxreportAPI.md#ObjectOfficetaxreportAPI_officetaxreportGetCommunicationrecipientsV1) | **GET** /1/object/officetaxreport/{pkiOfficetaxreportID}/getCommunicationrecipients | Retrieve Communication recipients
[**ObjectOfficetaxreportAPI_officetaxreportGetCommunicationsendersV1**](ObjectOfficetaxreportAPI.md#ObjectOfficetaxreportAPI_officetaxreportGetCommunicationsendersV1) | **GET** /1/object/officetaxreport/{pkiOfficetaxreportID}/getCommunicationsenders | Retrieve Communication senders
[**ObjectOfficetaxreportAPI_officetaxreportGetListV1**](ObjectOfficetaxreportAPI.md#ObjectOfficetaxreportAPI_officetaxreportGetListV1) | **GET** /1/object/officetaxreport/getList | Retrieve Officetaxreport list
[**ObjectOfficetaxreportAPI_officetaxreportImportIntoEDMV1**](ObjectOfficetaxreportAPI.md#ObjectOfficetaxreportAPI_officetaxreportImportIntoEDMV1) | **POST** /1/object/officetaxreport/{pkiOfficetaxreportID}/importIntoEDM | Import attachments into the Officetaxreport


# **ObjectOfficetaxreportAPI_officetaxreportBatchDownloadV1**
```c
// Download multiples attachments from an Officetaxreport
//
binary_t** ObjectOfficetaxreportAPI_officetaxreportBatchDownloadV1(apiClient_t *apiClient, int *pkiOfficetaxreportID, officetaxreport_batch_download_v1_request_t *officetaxreport_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiOfficetaxreportID** | **int \*** |  | 
**officetaxreport_batch_download_v1_request** | **[officetaxreport_batch_download_v1_request_t](officetaxreport_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectOfficetaxreportAPI_officetaxreportGetAttachmentsV1**
```c
// Retrieve Officetaxreport's attachments
//
officetaxreport_get_attachments_v1_response_t* ObjectOfficetaxreportAPI_officetaxreportGetAttachmentsV1(apiClient_t *apiClient, int *pkiOfficetaxreportID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiOfficetaxreportID** | **int \*** |  | 

### Return type

[officetaxreport_get_attachments_v1_response_t](officetaxreport_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectOfficetaxreportAPI_officetaxreportGetCommunicationCountV1**
```c
// Retrieve Communication count
//
officetaxreport_get_communication_count_v1_response_t* ObjectOfficetaxreportAPI_officetaxreportGetCommunicationCountV1(apiClient_t *apiClient, int *pkiOfficetaxreportID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiOfficetaxreportID** | **int \*** |  | 

### Return type

[officetaxreport_get_communication_count_v1_response_t](officetaxreport_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectOfficetaxreportAPI_officetaxreportGetCommunicationListV1**
```c
// Retrieve Communication list
//
officetaxreport_get_communication_list_v1_response_t* ObjectOfficetaxreportAPI_officetaxreportGetCommunicationListV1(apiClient_t *apiClient, int *pkiOfficetaxreportID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiOfficetaxreportID** | **int \*** |  | 

### Return type

[officetaxreport_get_communication_list_v1_response_t](officetaxreport_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectOfficetaxreportAPI_officetaxreportGetCommunicationrecipientsV1**
```c
// Retrieve Communication recipients
//
officetaxreport_get_communicationrecipients_v1_response_t* ObjectOfficetaxreportAPI_officetaxreportGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiOfficetaxreportID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiOfficetaxreportID** | **int \*** |  | 

### Return type

[officetaxreport_get_communicationrecipients_v1_response_t](officetaxreport_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectOfficetaxreportAPI_officetaxreportGetCommunicationsendersV1**
```c
// Retrieve Communication senders
//
officetaxreport_get_communicationsenders_v1_response_t* ObjectOfficetaxreportAPI_officetaxreportGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiOfficetaxreportID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiOfficetaxreportID** | **int \*** |  | 

### Return type

[officetaxreport_get_communicationsenders_v1_response_t](officetaxreport_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectOfficetaxreportAPI_officetaxreportGetListV1**
```c
// Retrieve Officetaxreport list
//
// 
//
officetaxreport_get_list_v1_response_t* ObjectOfficetaxreportAPI_officetaxreportGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_officetaxreportGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_officetaxreportGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[officetaxreport_get_list_v1_response_t](officetaxreport_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectOfficetaxreportAPI_officetaxreportImportIntoEDMV1**
```c
// Import attachments into the Officetaxreport
//
officetaxreport_import_into_edm_v1_response_t* ObjectOfficetaxreportAPI_officetaxreportImportIntoEDMV1(apiClient_t *apiClient, int *pkiOfficetaxreportID, officetaxreport_import_into_edm_v1_request_t *officetaxreport_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiOfficetaxreportID** | **int \*** |  | 
**officetaxreport_import_into_edm_v1_request** | **[officetaxreport_import_into_edm_v1_request_t](officetaxreport_import_into_edm_v1_request.md) \*** |  | 

### Return type

[officetaxreport_import_into_edm_v1_response_t](officetaxreport_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

