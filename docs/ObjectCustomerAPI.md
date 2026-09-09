# ObjectCustomerAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectCustomerAPI_customerBatchDownloadV1**](ObjectCustomerAPI.md#ObjectCustomerAPI_customerBatchDownloadV1) | **POST** /1/object/customer/{pkiCustomerID}/batchDownload | Download multiples attachments from a Customer
[**ObjectCustomerAPI_customerGetAttachmentsV1**](ObjectCustomerAPI.md#ObjectCustomerAPI_customerGetAttachmentsV1) | **GET** /1/object/customer/{pkiCustomerID}/getAttachments | Retrieve Customer&#39;s attachments
[**ObjectCustomerAPI_customerGetAutocompleteV2**](ObjectCustomerAPI.md#ObjectCustomerAPI_customerGetAutocompleteV2) | **GET** /2/object/customer/getAutocomplete/{sSelector} | Retrieve Customers and IDs
[**ObjectCustomerAPI_customerGetObjectV2**](ObjectCustomerAPI.md#ObjectCustomerAPI_customerGetObjectV2) | **GET** /2/object/customer/{pkiCustomerID} | Retrieve an existing Customer
[**ObjectCustomerAPI_customerImportIntoEDMV1**](ObjectCustomerAPI.md#ObjectCustomerAPI_customerImportIntoEDMV1) | **POST** /1/object/customer/{pkiCustomerID}/importIntoEDM | Import attachments into the Customer


# **ObjectCustomerAPI_customerBatchDownloadV1**
```c
// Download multiples attachments from a Customer
//
binary_t** ObjectCustomerAPI_customerBatchDownloadV1(apiClient_t *apiClient, int *pkiCustomerID, customer_batch_download_v1_request_t *customer_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCustomerID** | **int \*** |  | 
**customer_batch_download_v1_request** | **[customer_batch_download_v1_request_t](customer_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCustomerAPI_customerGetAttachmentsV1**
```c
// Retrieve Customer's attachments
//
customer_get_attachments_v1_response_t* ObjectCustomerAPI_customerGetAttachmentsV1(apiClient_t *apiClient, int *pkiCustomerID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCustomerID** | **int \*** |  | 

### Return type

[customer_get_attachments_v1_response_t](customer_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCustomerAPI_customerGetAutocompleteV2**
```c
// Retrieve Customers and IDs
//
// Get the list of Customer to be used in a dropdown or autocomplete control.
//
customer_get_autocomplete_v2_response_t* ObjectCustomerAPI_customerGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_customerGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_customerGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_customerGetAutocompleteV2_sSelector_e** | The type of Customers to return | 
**eFilterActive** | **ezmax_api_definition__full_customerGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[customer_get_autocomplete_v2_response_t](customer_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCustomerAPI_customerGetObjectV2**
```c
// Retrieve an existing Customer
//
// 
//
customer_get_object_v2_response_t* ObjectCustomerAPI_customerGetObjectV2(apiClient_t *apiClient, int *pkiCustomerID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCustomerID** | **int \*** | The unique ID of the Customer | 

### Return type

[customer_get_object_v2_response_t](customer_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCustomerAPI_customerImportIntoEDMV1**
```c
// Import attachments into the Customer
//
// 
//
customer_import_into_edm_v1_response_t* ObjectCustomerAPI_customerImportIntoEDMV1(apiClient_t *apiClient, int *pkiCustomerID, customer_import_into_edm_v1_request_t *customer_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCustomerID** | **int \*** |  | 
**customer_import_into_edm_v1_request** | **[customer_import_into_edm_v1_request_t](customer_import_into_edm_v1_request.md) \*** |  | 

### Return type

[customer_import_into_edm_v1_response_t](customer_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

