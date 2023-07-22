# ModuleReportAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ModuleReportAPI_reportGetReportFromCacheV1**](ModuleReportAPI.md#ModuleReportAPI_reportGetReportFromCacheV1) | **GET** /1/module/report/getReportFromCache/{sReportgroupCacheID} | Retrieve report from cache


# **ModuleReportAPI_reportGetReportFromCacheV1**
```c
// Retrieve report from cache
//
// Retrieve a report that was previously generated and cached
//
common_get_report_v1_response_t* ModuleReportAPI_reportGetReportFromCacheV1(apiClient_t *apiClient, char * sReportgroupCacheID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sReportgroupCacheID** | **char \*** |  | 

### Return type

[common_get_report_v1_response_t](common_get_report_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization), [Presigned](../README.md#Presigned)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/pdf, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet, application/zip, text/html

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

