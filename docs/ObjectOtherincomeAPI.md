# ObjectOtherincomeAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectOtherincomeAPI_otherincomeBatchDownloadV1**](ObjectOtherincomeAPI.md#ObjectOtherincomeAPI_otherincomeBatchDownloadV1) | **POST** /1/object/otherincome/{pkiOtherincomeID}/batchDownload | Download multiples attachments from a Otherincome
[**ObjectOtherincomeAPI_otherincomeGetAttachmentsV1**](ObjectOtherincomeAPI.md#ObjectOtherincomeAPI_otherincomeGetAttachmentsV1) | **GET** /1/object/otherincome/{pkiOtherincomeID}/getAttachments | Retrieve Otherincome&#39;s attachments
[**ObjectOtherincomeAPI_otherincomeGetCommunicationCountV1**](ObjectOtherincomeAPI.md#ObjectOtherincomeAPI_otherincomeGetCommunicationCountV1) | **GET** /1/object/otherincome/{pkiOtherincomeID}/getCommunicationCount | Retrieve Communication count
[**ObjectOtherincomeAPI_otherincomeGetCommunicationListV1**](ObjectOtherincomeAPI.md#ObjectOtherincomeAPI_otherincomeGetCommunicationListV1) | **GET** /1/object/otherincome/{pkiOtherincomeID}/getCommunicationList | Retrieve Communication list
[**ObjectOtherincomeAPI_otherincomeGetCommunicationrecipientsV1**](ObjectOtherincomeAPI.md#ObjectOtherincomeAPI_otherincomeGetCommunicationrecipientsV1) | **GET** /1/object/otherincome/{pkiOtherincomeID}/getCommunicationrecipients | Retrieve Otherincome&#39;s Communicationrecipient
[**ObjectOtherincomeAPI_otherincomeGetCommunicationsendersV1**](ObjectOtherincomeAPI.md#ObjectOtherincomeAPI_otherincomeGetCommunicationsendersV1) | **GET** /1/object/otherincome/{pkiOtherincomeID}/getCommunicationsenders | Retrieve Otherincome&#39;s Communicationsender
[**ObjectOtherincomeAPI_otherincomeGetListV1**](ObjectOtherincomeAPI.md#ObjectOtherincomeAPI_otherincomeGetListV1) | **GET** /1/object/otherincome/getList | Retrieve Otherincome list
[**ObjectOtherincomeAPI_otherincomeImportIntoEDMV1**](ObjectOtherincomeAPI.md#ObjectOtherincomeAPI_otherincomeImportIntoEDMV1) | **POST** /1/object/otherincome/{pkiOtherincomeID}/importIntoEDM | Import attachments into the Otherincome


# **ObjectOtherincomeAPI_otherincomeBatchDownloadV1**
```c
// Download multiples attachments from a Otherincome
//
binary_t** ObjectOtherincomeAPI_otherincomeBatchDownloadV1(apiClient_t *apiClient, int *pkiOtherincomeID, otherincome_batch_download_v1_request_t *otherincome_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiOtherincomeID** | **int \*** |  | 
**otherincome_batch_download_v1_request** | **[otherincome_batch_download_v1_request_t](otherincome_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectOtherincomeAPI_otherincomeGetAttachmentsV1**
```c
// Retrieve Otherincome's attachments
//
otherincome_get_attachments_v1_response_t* ObjectOtherincomeAPI_otherincomeGetAttachmentsV1(apiClient_t *apiClient, int *pkiOtherincomeID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiOtherincomeID** | **int \*** |  | 

### Return type

[otherincome_get_attachments_v1_response_t](otherincome_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectOtherincomeAPI_otherincomeGetCommunicationCountV1**
```c
// Retrieve Communication count
//
// 
//
otherincome_get_communication_count_v1_response_t* ObjectOtherincomeAPI_otherincomeGetCommunicationCountV1(apiClient_t *apiClient, int *pkiOtherincomeID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiOtherincomeID** | **int \*** |  | 

### Return type

[otherincome_get_communication_count_v1_response_t](otherincome_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectOtherincomeAPI_otherincomeGetCommunicationListV1**
```c
// Retrieve Communication list
//
// 
//
otherincome_get_communication_list_v1_response_t* ObjectOtherincomeAPI_otherincomeGetCommunicationListV1(apiClient_t *apiClient, int *pkiOtherincomeID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiOtherincomeID** | **int \*** |  | 

### Return type

[otherincome_get_communication_list_v1_response_t](otherincome_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectOtherincomeAPI_otherincomeGetCommunicationrecipientsV1**
```c
// Retrieve Otherincome's Communicationrecipient
//
// 
//
otherincome_get_communicationrecipients_v1_response_t* ObjectOtherincomeAPI_otherincomeGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiOtherincomeID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiOtherincomeID** | **int \*** |  | 

### Return type

[otherincome_get_communicationrecipients_v1_response_t](otherincome_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectOtherincomeAPI_otherincomeGetCommunicationsendersV1**
```c
// Retrieve Otherincome's Communicationsender
//
// 
//
otherincome_get_communicationsenders_v1_response_t* ObjectOtherincomeAPI_otherincomeGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiOtherincomeID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiOtherincomeID** | **int \*** |  | 

### Return type

[otherincome_get_communicationsenders_v1_response_t](otherincome_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectOtherincomeAPI_otherincomeGetListV1**
```c
// Retrieve Otherincome list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eOtherincomeRemunerationtype | Dollars<br>DollarsTaxesIncluded |
//
otherincome_get_list_v1_response_t* ObjectOtherincomeAPI_otherincomeGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_otherincomeGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_otherincomeGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[otherincome_get_list_v1_response_t](otherincome_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectOtherincomeAPI_otherincomeImportIntoEDMV1**
```c
// Import attachments into the Otherincome
//
// 
//
otherincome_import_into_edm_v1_response_t* ObjectOtherincomeAPI_otherincomeImportIntoEDMV1(apiClient_t *apiClient, int *pkiOtherincomeID, otherincome_import_into_edm_v1_request_t *otherincome_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiOtherincomeID** | **int \*** |  | 
**otherincome_import_into_edm_v1_request** | **[otherincome_import_into_edm_v1_request_t](otherincome_import_into_edm_v1_request.md) \*** |  | 

### Return type

[otherincome_import_into_edm_v1_response_t](otherincome_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

