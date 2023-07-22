# GlobalEzmaxcustomerAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GlobalEzmaxcustomerAPI_globalEzmaxcustomerGetConfigurationV1**](GlobalEzmaxcustomerAPI.md#GlobalEzmaxcustomerAPI_globalEzmaxcustomerGetConfigurationV1) | **GET** /1/ezmaxcustomer/{pksEzmaxcustomerCode}/getConfiguration | Get ezmaxcustomer configuration


# **GlobalEzmaxcustomerAPI_globalEzmaxcustomerGetConfigurationV1**
```c
// Get ezmaxcustomer configuration
//
// Retrieve the ezmaxcustomer's specific configuration. This will help locate the proper region (ie: sInfrastructureregionCode) and the proper environment (ie: sInfrastructureenvironmenttypeDescription) where the customer's data is stored.
//
global_ezmaxcustomer_get_configuration_v1_response_t* GlobalEzmaxcustomerAPI_globalEzmaxcustomerGetConfigurationV1(apiClient_t *apiClient, char * pksEzmaxcustomerCode);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pksEzmaxcustomerCode** | **char \*** |  | 

### Return type

[global_ezmaxcustomer_get_configuration_v1_response_t](global_ezmaxcustomer_get_configuration_v1_response.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

