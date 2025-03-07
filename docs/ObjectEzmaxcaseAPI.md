# ObjectEzmaxcaseAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzmaxcaseAPI_ezmaxcasePatchObjectV1**](ObjectEzmaxcaseAPI.md#ObjectEzmaxcaseAPI_ezmaxcasePatchObjectV1) | **PATCH** /1/object/ezmaxcase/{pkiEzmaxcaseID} | Patch an existing Ezmaxcase


# **ObjectEzmaxcaseAPI_ezmaxcasePatchObjectV1**
```c
// Patch an existing Ezmaxcase
//
// 
//
ezmaxcase_patch_object_v1_response_t* ObjectEzmaxcaseAPI_ezmaxcasePatchObjectV1(apiClient_t *apiClient, int *pkiEzmaxcaseID, ezmaxcase_patch_object_v1_request_t *ezmaxcase_patch_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzmaxcaseID** | **int \*** | The unique ID of the Ezmaxcase | 
**ezmaxcase_patch_object_v1_request** | **[ezmaxcase_patch_object_v1_request_t](ezmaxcase_patch_object_v1_request.md) \*** |  | 

### Return type

[ezmaxcase_patch_object_v1_response_t](ezmaxcase_patch_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

