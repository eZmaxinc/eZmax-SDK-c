# ObjectInvoiceAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectInvoiceAPI_invoiceGetAttachmentsV1**](ObjectInvoiceAPI.md#ObjectInvoiceAPI_invoiceGetAttachmentsV1) | **GET** /1/object/invoice/{pkiInvoiceID}/getAttachments | Retrieve Invoice&#39;s Attachments
[**ObjectInvoiceAPI_invoiceGetCommunicationCountV1**](ObjectInvoiceAPI.md#ObjectInvoiceAPI_invoiceGetCommunicationCountV1) | **GET** /1/object/invoice/{pkiInvoiceID}/getCommunicationCount | Retrieve Communication count
[**ObjectInvoiceAPI_invoiceGetCommunicationListV1**](ObjectInvoiceAPI.md#ObjectInvoiceAPI_invoiceGetCommunicationListV1) | **GET** /1/object/invoice/{pkiInvoiceID}/getCommunicationList | Retrieve Communication list
[**ObjectInvoiceAPI_invoiceGetCommunicationrecipientsV1**](ObjectInvoiceAPI.md#ObjectInvoiceAPI_invoiceGetCommunicationrecipientsV1) | **GET** /1/object/invoice/{pkiInvoiceID}/getCommunicationrecipients | Retrieve Invoice&#39;s Communicationrecipient
[**ObjectInvoiceAPI_invoiceGetCommunicationsendersV1**](ObjectInvoiceAPI.md#ObjectInvoiceAPI_invoiceGetCommunicationsendersV1) | **GET** /1/object/invoice/{pkiInvoiceID}/getCommunicationsenders | Retrieve Invoice&#39;s Communicationsender


# **ObjectInvoiceAPI_invoiceGetAttachmentsV1**
```c
// Retrieve Invoice's Attachments
//
// 
//
invoice_get_attachments_v1_response_t* ObjectInvoiceAPI_invoiceGetAttachmentsV1(apiClient_t *apiClient, int *pkiInvoiceID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInvoiceID** | **int \*** |  | 

### Return type

[invoice_get_attachments_v1_response_t](invoice_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInvoiceAPI_invoiceGetCommunicationCountV1**
```c
// Retrieve Communication count
//
// 
//
invoice_get_communication_count_v1_response_t* ObjectInvoiceAPI_invoiceGetCommunicationCountV1(apiClient_t *apiClient, int *pkiInvoiceID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInvoiceID** | **int \*** |  | 

### Return type

[invoice_get_communication_count_v1_response_t](invoice_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInvoiceAPI_invoiceGetCommunicationListV1**
```c
// Retrieve Communication list
//
// 
//
invoice_get_communication_list_v1_response_t* ObjectInvoiceAPI_invoiceGetCommunicationListV1(apiClient_t *apiClient, int *pkiInvoiceID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInvoiceID** | **int \*** |  | 

### Return type

[invoice_get_communication_list_v1_response_t](invoice_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInvoiceAPI_invoiceGetCommunicationrecipientsV1**
```c
// Retrieve Invoice's Communicationrecipient
//
// 
//
invoice_get_communicationrecipients_v1_response_t* ObjectInvoiceAPI_invoiceGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiInvoiceID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInvoiceID** | **int \*** |  | 

### Return type

[invoice_get_communicationrecipients_v1_response_t](invoice_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInvoiceAPI_invoiceGetCommunicationsendersV1**
```c
// Retrieve Invoice's Communicationsender
//
// 
//
invoice_get_communicationsenders_v1_response_t* ObjectInvoiceAPI_invoiceGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiInvoiceID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInvoiceID** | **int \*** |  | 

### Return type

[invoice_get_communicationsenders_v1_response_t](invoice_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

