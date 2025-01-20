# ObjectEzsignpageAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignpageAPI_ezsignpageConsultV1**](ObjectEzsignpageAPI.md#ObjectEzsignpageAPI_ezsignpageConsultV1) | **POST** /1/object/ezsignpage/{pkiEzsignpageID}/consult | Consult an Ezsignpage


# **ObjectEzsignpageAPI_ezsignpageConsultV1**
```c
// Consult an Ezsignpage
//
common_response_t* ObjectEzsignpageAPI_ezsignpageConsultV1(apiClient_t *apiClient, int *pkiEzsignpageID, object_t *body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignpageID** | **int \*** |  | 
**body** | **[object_t](object.md) \*** |  | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

