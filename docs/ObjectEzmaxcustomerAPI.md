# ObjectEzmaxcustomerAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzmaxcustomerAPI_ezmaxcustomerPatchObjectV1**](ObjectEzmaxcustomerAPI.md#ObjectEzmaxcustomerAPI_ezmaxcustomerPatchObjectV1) | **PATCH** /1/object/ezmaxcustomer/{pkiEzmaxcustomerID} | Patch an existing Ezmaxcustomer


# **ObjectEzmaxcustomerAPI_ezmaxcustomerPatchObjectV1**
```c
// Patch an existing Ezmaxcustomer
//
// 
//
ezmaxcustomer_patch_object_v1_response_t* ObjectEzmaxcustomerAPI_ezmaxcustomerPatchObjectV1(apiClient_t *apiClient, int *pkiEzmaxcustomerID, ezmaxcustomer_patch_object_v1_request_t *ezmaxcustomer_patch_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzmaxcustomerID** | **int \*** | The unique ID of the Ezmaxcustomer | 
**ezmaxcustomer_patch_object_v1_request** | **[ezmaxcustomer_patch_object_v1_request_t](ezmaxcustomer_patch_object_v1_request.md) \*** |  | 

### Return type

[ezmaxcustomer_patch_object_v1_response_t](ezmaxcustomer_patch_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

