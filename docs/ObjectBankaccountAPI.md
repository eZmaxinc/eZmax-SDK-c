# ObjectBankaccountAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectBankaccountAPI_bankaccountBatchDownloadV1**](ObjectBankaccountAPI.md#ObjectBankaccountAPI_bankaccountBatchDownloadV1) | **POST** /1/object/bankaccount/{pkiBankaccountID}/batchDownload | Download multiples attachments from a Bankaccount
[**ObjectBankaccountAPI_bankaccountGetAttachmentsV1**](ObjectBankaccountAPI.md#ObjectBankaccountAPI_bankaccountGetAttachmentsV1) | **GET** /1/object/bankaccount/{pkiBankaccountID}/getAttachments | Retrieve Bankaccount&#39;s attachments
[**ObjectBankaccountAPI_bankaccountGetAutocompleteV2**](ObjectBankaccountAPI.md#ObjectBankaccountAPI_bankaccountGetAutocompleteV2) | **GET** /2/object/bankaccount/getAutocomplete/{sSelector} | Retrieve Bankaccounts and IDs
[**ObjectBankaccountAPI_bankaccountImportIntoEDMV1**](ObjectBankaccountAPI.md#ObjectBankaccountAPI_bankaccountImportIntoEDMV1) | **POST** /1/object/bankaccount/{pkiBankaccountID}/importIntoEDM | Import attachments into the Bankaccount


# **ObjectBankaccountAPI_bankaccountBatchDownloadV1**
```c
// Download multiples attachments from a Bankaccount
//
binary_t** ObjectBankaccountAPI_bankaccountBatchDownloadV1(apiClient_t *apiClient, int *pkiBankaccountID, bankaccount_batch_download_v1_request_t *bankaccount_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBankaccountID** | **int \*** |  | 
**bankaccount_batch_download_v1_request** | **[bankaccount_batch_download_v1_request_t](bankaccount_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBankaccountAPI_bankaccountGetAttachmentsV1**
```c
// Retrieve Bankaccount's attachments
//
bankaccount_get_attachments_v1_response_t* ObjectBankaccountAPI_bankaccountGetAttachmentsV1(apiClient_t *apiClient, int *pkiBankaccountID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBankaccountID** | **int \*** |  | 

### Return type

[bankaccount_get_attachments_v1_response_t](bankaccount_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBankaccountAPI_bankaccountGetAutocompleteV2**
```c
// Retrieve Bankaccounts and IDs
//
// Get the list of Bankaccount to be used in a dropdown or autocomplete control.
//
bankaccount_get_autocomplete_v2_response_t* ObjectBankaccountAPI_bankaccountGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_bankaccountGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_bankaccountGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_bankaccountGetAutocompleteV2_sSelector_e** | The type of Bankaccounts to return | 
**eFilterActive** | **ezmax_api_definition__full_bankaccountGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[bankaccount_get_autocomplete_v2_response_t](bankaccount_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBankaccountAPI_bankaccountImportIntoEDMV1**
```c
// Import attachments into the Bankaccount
//
bankaccount_import_into_edm_v1_response_t* ObjectBankaccountAPI_bankaccountImportIntoEDMV1(apiClient_t *apiClient, int *pkiBankaccountID, bankaccount_import_into_edm_v1_request_t *bankaccount_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBankaccountID** | **int \*** |  | 
**bankaccount_import_into_edm_v1_request** | **[bankaccount_import_into_edm_v1_request_t](bankaccount_import_into_edm_v1_request.md) \*** |  | 

### Return type

[bankaccount_import_into_edm_v1_response_t](bankaccount_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

