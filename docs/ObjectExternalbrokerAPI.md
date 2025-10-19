# ObjectExternalbrokerAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectExternalbrokerAPI_externalbrokerImportIntoEDMV1**](ObjectExternalbrokerAPI.md#ObjectExternalbrokerAPI_externalbrokerImportIntoEDMV1) | **POST** /1/object/externalbroker/{pkiExternalbrokerID}/importIntoEDM | Import attachments into the Externalbroker


# **ObjectExternalbrokerAPI_externalbrokerImportIntoEDMV1**
```c
// Import attachments into the Externalbroker
//
// 
//
externalbroker_import_into_edm_v1_response_t* ObjectExternalbrokerAPI_externalbrokerImportIntoEDMV1(apiClient_t *apiClient, int *pkiExternalbrokerID, externalbroker_import_into_edm_v1_request_t *externalbroker_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiExternalbrokerID** | **int \*** |  | 
**externalbroker_import_into_edm_v1_request** | **[externalbroker_import_into_edm_v1_request_t](externalbroker_import_into_edm_v1_request.md) \*** |  | 

### Return type

[externalbroker_import_into_edm_v1_response_t](externalbroker_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

