# ObjectPaymentpreparationAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectPaymentpreparationAPI_paymentpreparationBatchDownloadV1**](ObjectPaymentpreparationAPI.md#ObjectPaymentpreparationAPI_paymentpreparationBatchDownloadV1) | **POST** /1/object/paymentpreparation/{pkiPaymentpreparationID}/batchDownload | Download multiples attachments from an Paymentpreparation
[**ObjectPaymentpreparationAPI_paymentpreparationGetAttachmentsV1**](ObjectPaymentpreparationAPI.md#ObjectPaymentpreparationAPI_paymentpreparationGetAttachmentsV1) | **GET** /1/object/paymentpreparation/{pkiPaymentpreparationID}/getAttachments | Retrieve Paymentpreparation&#39;s attachments
[**ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationCountV1**](ObjectPaymentpreparationAPI.md#ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationCountV1) | **GET** /1/object/paymentpreparation/{pkiPaymentpreparationID}/getCommunicationCount | Retrieve Communication count
[**ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationListV1**](ObjectPaymentpreparationAPI.md#ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationListV1) | **GET** /1/object/paymentpreparation/{pkiPaymentpreparationID}/getCommunicationList | Retrieve Communication list
[**ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationrecipientsV1**](ObjectPaymentpreparationAPI.md#ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationrecipientsV1) | **GET** /1/object/paymentpreparation/{pkiPaymentpreparationID}/getCommunicationrecipients | Retrieve Communication recipients
[**ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationsendersV1**](ObjectPaymentpreparationAPI.md#ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationsendersV1) | **GET** /1/object/paymentpreparation/{pkiPaymentpreparationID}/getCommunicationsenders | Retrieve Communication senders
[**ObjectPaymentpreparationAPI_paymentpreparationImportIntoEDMV1**](ObjectPaymentpreparationAPI.md#ObjectPaymentpreparationAPI_paymentpreparationImportIntoEDMV1) | **POST** /1/object/paymentpreparation/{pkiPaymentpreparationID}/importIntoEDM | Import attachments into the Paymentpreparation


# **ObjectPaymentpreparationAPI_paymentpreparationBatchDownloadV1**
```c
// Download multiples attachments from an Paymentpreparation
//
binary_t** ObjectPaymentpreparationAPI_paymentpreparationBatchDownloadV1(apiClient_t *apiClient, int *pkiPaymentpreparationID, paymentpreparation_batch_download_v1_request_t *paymentpreparation_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiPaymentpreparationID** | **int \*** |  | 
**paymentpreparation_batch_download_v1_request** | **[paymentpreparation_batch_download_v1_request_t](paymentpreparation_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPaymentpreparationAPI_paymentpreparationGetAttachmentsV1**
```c
// Retrieve Paymentpreparation's attachments
//
paymentpreparation_get_attachments_v1_response_t* ObjectPaymentpreparationAPI_paymentpreparationGetAttachmentsV1(apiClient_t *apiClient, int *pkiPaymentpreparationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiPaymentpreparationID** | **int \*** |  | 

### Return type

[paymentpreparation_get_attachments_v1_response_t](paymentpreparation_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationCountV1**
```c
// Retrieve Communication count
//
paymentpreparation_get_communication_count_v1_response_t* ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationCountV1(apiClient_t *apiClient, int *pkiPaymentpreparationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiPaymentpreparationID** | **int \*** |  | 

### Return type

[paymentpreparation_get_communication_count_v1_response_t](paymentpreparation_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationListV1**
```c
// Retrieve Communication list
//
paymentpreparation_get_communication_list_v1_response_t* ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationListV1(apiClient_t *apiClient, int *pkiPaymentpreparationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiPaymentpreparationID** | **int \*** |  | 

### Return type

[paymentpreparation_get_communication_list_v1_response_t](paymentpreparation_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationrecipientsV1**
```c
// Retrieve Communication recipients
//
paymentpreparation_get_communicationrecipients_v1_response_t* ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiPaymentpreparationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiPaymentpreparationID** | **int \*** |  | 

### Return type

[paymentpreparation_get_communicationrecipients_v1_response_t](paymentpreparation_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationsendersV1**
```c
// Retrieve Communication senders
//
paymentpreparation_get_communicationsenders_v1_response_t* ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiPaymentpreparationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiPaymentpreparationID** | **int \*** |  | 

### Return type

[paymentpreparation_get_communicationsenders_v1_response_t](paymentpreparation_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPaymentpreparationAPI_paymentpreparationImportIntoEDMV1**
```c
// Import attachments into the Paymentpreparation
//
paymentpreparation_import_into_edm_v1_response_t* ObjectPaymentpreparationAPI_paymentpreparationImportIntoEDMV1(apiClient_t *apiClient, int *pkiPaymentpreparationID, paymentpreparation_import_into_edm_v1_request_t *paymentpreparation_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiPaymentpreparationID** | **int \*** |  | 
**paymentpreparation_import_into_edm_v1_request** | **[paymentpreparation_import_into_edm_v1_request_t](paymentpreparation_import_into_edm_v1_request.md) \*** |  | 

### Return type

[paymentpreparation_import_into_edm_v1_response_t](paymentpreparation_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

