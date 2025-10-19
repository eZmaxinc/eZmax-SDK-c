# ObjectEzmaxcustomeruserAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzmaxcustomeruserAPI_ezmaxcustomeruserPatchObjectV1**](ObjectEzmaxcustomeruserAPI.md#ObjectEzmaxcustomeruserAPI_ezmaxcustomeruserPatchObjectV1) | **PATCH** /1/object/ezmaxcustomeruser/{pkiEzmaxcustomeruserID} | Patch an existing Ezmaxcustomeruser


# **ObjectEzmaxcustomeruserAPI_ezmaxcustomeruserPatchObjectV1**
```c
// Patch an existing Ezmaxcustomeruser
//
// 
//
ezmaxcustomeruser_patch_object_v1_response_t* ObjectEzmaxcustomeruserAPI_ezmaxcustomeruserPatchObjectV1(apiClient_t *apiClient, int *pkiEzmaxcustomeruserID, ezmaxcustomeruser_patch_object_v1_request_t *ezmaxcustomeruser_patch_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzmaxcustomeruserID** | **int \*** | The unique ID of the Ezmaxcustomeruser | 
**ezmaxcustomeruser_patch_object_v1_request** | **[ezmaxcustomeruser_patch_object_v1_request_t](ezmaxcustomeruser_patch_object_v1_request.md) \*** |  | 

### Return type

[ezmaxcustomeruser_patch_object_v1_response_t](ezmaxcustomeruser_patch_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

