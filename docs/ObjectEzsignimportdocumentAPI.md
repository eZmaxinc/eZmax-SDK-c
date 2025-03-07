# ObjectEzsignimportdocumentAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignimportdocumentAPI_ezsignimportdocumentDownloadV1**](ObjectEzsignimportdocumentAPI.md#ObjectEzsignimportdocumentAPI_ezsignimportdocumentDownloadV1) | **GET** /1/object/ezsignimportdocument/{pkiEzsignimportdocumentID}/download | Retrieve the content


# **ObjectEzsignimportdocumentAPI_ezsignimportdocumentDownloadV1**
```c
// Retrieve the content
//
ezsignimportdocument_download_v1_response_t* ObjectEzsignimportdocumentAPI_ezsignimportdocumentDownloadV1(apiClient_t *apiClient, int *pkiEzsignimportdocumentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignimportdocumentID** | **int \*** |  | 

### Return type

[ezsignimportdocument_download_v1_response_t](ezsignimportdocument_download_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

