# GlobalEzmaxclientAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GlobalEzmaxclientAPI_globalEzmaxclientVersionV1**](GlobalEzmaxclientAPI.md#GlobalEzmaxclientAPI_globalEzmaxclientVersionV1) | **GET** /1/ezmaxclient/{pksEzmaxclientOs}/version | Retrieve the latest version of the Ezmaxclient


# **GlobalEzmaxclientAPI_globalEzmaxclientVersionV1**
```c
// Retrieve the latest version of the Ezmaxclient
//
// Retrieve the latest version of the Ezmaxclient that is available on the store.
//
global_ezmaxclient_version_v1_response_t* GlobalEzmaxclientAPI_globalEzmaxclientVersionV1(apiClient_t *apiClient, field_pks_ezmaxclient_os_e pksEzmaxclientOs);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pksEzmaxclientOs** | **field_pks_ezmaxclient_os_e** |  | 

### Return type

[global_ezmaxclient_version_v1_response_t](global_ezmaxclient_version_v1_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

