# GlobalCustomerAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**GlobalCustomerAPI_globalCustomerGetEndpointV1**](GlobalCustomerAPI.md#GlobalCustomerAPI_globalCustomerGetEndpointV1) | **GET** /1/customer/{pksCustomerCode}/endpoint | Get customer endpoint


# **GlobalCustomerAPI_globalCustomerGetEndpointV1**
```c
// Get customer endpoint
//
// Retrieve the customer's specific server endpoint where to send requests. This will help locate the proper region (ie: sInfrastructureregionCode) and the proper environment (ie: sInfrastructureenvironmenttypeDescription) where the customer's data is stored.
//
global_customer_get_endpoint_v1_response_t* GlobalCustomerAPI_globalCustomerGetEndpointV1(apiClient_t *apiClient, char * pksCustomerCode, ezmax_api_definition__full_globalCustomerGetEndpointV1_sInfrastructureproductCode_e sInfrastructureproductCode);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pksCustomerCode** | **char \*** |  | 
**sInfrastructureproductCode** | **ezmax_api_definition__full_globalCustomerGetEndpointV1_sInfrastructureproductCode_e** | The infrastructure product Code  If undefined, \&quot;appcluster01\&quot; is assumed | [optional] 

### Return type

[global_customer_get_endpoint_v1_response_t](global_customer_get_endpoint_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

