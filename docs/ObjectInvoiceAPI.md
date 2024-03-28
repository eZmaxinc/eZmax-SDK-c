# ObjectInvoiceAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectInvoiceAPI_invoiceGetAttachmentsV1**](ObjectInvoiceAPI.md#ObjectInvoiceAPI_invoiceGetAttachmentsV1) | **GET** /1/object/invoice/{pkiInvoiceID}/getAttachments | Retrieve Invoice&#39;s Attachments
[**ObjectInvoiceAPI_invoiceGetCommunicationListV1**](ObjectInvoiceAPI.md#ObjectInvoiceAPI_invoiceGetCommunicationListV1) | **GET** /1/object/invoice/{pkiInvoiceID}/getCommunicationList | Retrieve Communication list


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

