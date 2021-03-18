# ModuleSsprAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ModuleSsprAPI_ssprResetPasswordRequestV1**](ModuleSsprAPI.md#ModuleSsprAPI_ssprResetPasswordRequestV1) | **POST** /1/module/sspr/resetPasswordRequest | Reset Password Request
[**ModuleSsprAPI_ssprResetPasswordV1**](ModuleSsprAPI.md#ModuleSsprAPI_ssprResetPasswordV1) | **POST** /1/module/sspr/resetPassword | Reset Password
[**ModuleSsprAPI_ssprSendUsernamesV1**](ModuleSsprAPI.md#ModuleSsprAPI_ssprSendUsernamesV1) | **POST** /1/module/sspr/sendUsernames | Send username(s)
[**ModuleSsprAPI_ssprUnlockAccountRequestV1**](ModuleSsprAPI.md#ModuleSsprAPI_ssprUnlockAccountRequestV1) | **POST** /1/module/sspr/unlockAccountRequest | Unlock Account Request
[**ModuleSsprAPI_ssprUnlockAccountV1**](ModuleSsprAPI.md#ModuleSsprAPI_ssprUnlockAccountV1) | **POST** /1/module/sspr/unlockAccount | Unlock Account
[**ModuleSsprAPI_ssprValidateTokenV1**](ModuleSsprAPI.md#ModuleSsprAPI_ssprValidateTokenV1) | **POST** /1/module/sspr/validateToken | Validate Token


# **ModuleSsprAPI_ssprResetPasswordRequestV1**
```c
// Reset Password Request
//
// This endpoint sends an email with a link to reset the user's password.  sEmailAddress must be set if eUserTypeSSPR = EzsignUser  sUserLoginname must be set if eUserTypeSSPR = Native
//
void ModuleSsprAPI_ssprResetPasswordRequestV1(apiClient_t *apiClient, sspr_reset_password_request_v1_request_t * sspr_reset_password_request_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration | 
**sspr_reset_password_request_v1_request** | **[sspr_reset_password_request_v1_request_t](sspr_reset_password_request_v1_request.md) \*** |  | 

### Return type

void

### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ModuleSsprAPI_ssprResetPasswordV1**
```c
// Reset Password
//
// This endpoint resets the user's password.  sEmailAddress must be set if eUserTypeSSPR = EzsignUser  sUserLoginname must be set if eUserTypeSSPR = Native
//
void ModuleSsprAPI_ssprResetPasswordV1(apiClient_t *apiClient, sspr_reset_password_v1_request_t * sspr_reset_password_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration | 
**sspr_reset_password_v1_request** | **[sspr_reset_password_v1_request_t](sspr_reset_password_v1_request.md) \*** |  | 

### Return type

void

### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ModuleSsprAPI_ssprSendUsernamesV1**
```c
// Send username(s)
//
// This endpoint returns an email with the username(s) matching the email address provided in case of forgotten username
//
void ModuleSsprAPI_ssprSendUsernamesV1(apiClient_t *apiClient, sspr_send_usernames_v1_request_t * sspr_send_usernames_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration | 
**sspr_send_usernames_v1_request** | **[sspr_send_usernames_v1_request_t](sspr_send_usernames_v1_request.md) \*** |  | 

### Return type

void

### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ModuleSsprAPI_ssprUnlockAccountRequestV1**
```c
// Unlock Account Request
//
// This endpoint sends an email with a link to unlock the user account.  sEmailAddress must be set if eUserTypeSSPR = EzsignUser  sUserLoginname must be set if eUserTypeSSPR = Native
//
void ModuleSsprAPI_ssprUnlockAccountRequestV1(apiClient_t *apiClient, sspr_unlock_account_request_v1_request_t * sspr_unlock_account_request_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration | 
**sspr_unlock_account_request_v1_request** | **[sspr_unlock_account_request_v1_request_t](sspr_unlock_account_request_v1_request.md) \*** |  | 

### Return type

void

### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ModuleSsprAPI_ssprUnlockAccountV1**
```c
// Unlock Account
//
// This endpoint unlocks the user account.  sEmailAddress must be set if eUserTypeSSPR = EzsignUser  sUserLoginname must be set if eUserTypeSSPR = Native
//
void ModuleSsprAPI_ssprUnlockAccountV1(apiClient_t *apiClient, sspr_unlock_account_v1_request_t * sspr_unlock_account_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration | 
**sspr_unlock_account_v1_request** | **[sspr_unlock_account_v1_request_t](sspr_unlock_account_v1_request.md) \*** |  | 

### Return type

void

### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ModuleSsprAPI_ssprValidateTokenV1**
```c
// Validate Token
//
// This endpoint validates if a Token is valid and not expired.  sEmailAddress must be set if eUserTypeSSPR = EzsignUser  sUserLoginname must be set if eUserTypeSSPR = Native
//
void ModuleSsprAPI_ssprValidateTokenV1(apiClient_t *apiClient, sspr_validate_token_v1_request_t * sspr_validate_token_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration | 
**sspr_validate_token_v1_request** | **[sspr_validate_token_v1_request_t](sspr_validate_token_v1_request.md) \*** |  | 

### Return type

void

### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

