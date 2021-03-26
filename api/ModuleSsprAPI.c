#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ModuleSsprAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Reset Password Request
//
// This endpoint sends an email with a link to reset the user's password.  sEmailAddress must be set if eUserTypeSSPR = EzsignUser  sUserLoginname must be set if eUserTypeSSPR = Native
//
void
ModuleSsprAPI_ssprResetPasswordRequestV1(apiClient_t *apiClient, sspr_reset_password_request_v1_request_t * sspr_reset_password_request_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/module/sspr/resetPasswordRequest")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/module/sspr/resetPasswordRequest");




    // Body Param
    cJSON *localVarSingleItemJSON_sspr_reset_password_request_v1_request = NULL;
    if (sspr_reset_password_request_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_sspr_reset_password_request_v1_request = sspr_reset_password_request_v1_request_convertToJSON(sspr_reset_password_request_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_sspr_reset_password_request_v1_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 204) {
        printf("%s\n","The request was accepted.  Do not misinterpret as \&quot;the account exists\&quot;. It only means an email will be sent if (and only if) an account exists.");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","You are not allowed to call this function");
    }
    if (apiClient->response_code == 422) {
        printf("%s\n","The syntax of the request is valid but the request cannot be completed. Look for detail in body.");
    }
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_sspr_reset_password_request_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_sspr_reset_password_request_v1_request);
        localVarSingleItemJSON_sspr_reset_password_request_v1_request = NULL;
    }
    free(localVarBodyParameters);

}

// Reset Password
//
// This endpoint resets the user's password.  sEmailAddress must be set if eUserTypeSSPR = EzsignUser  sUserLoginname must be set if eUserTypeSSPR = Native
//
void
ModuleSsprAPI_ssprResetPasswordV1(apiClient_t *apiClient, sspr_reset_password_v1_request_t * sspr_reset_password_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/module/sspr/resetPassword")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/module/sspr/resetPassword");




    // Body Param
    cJSON *localVarSingleItemJSON_sspr_reset_password_v1_request = NULL;
    if (sspr_reset_password_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_sspr_reset_password_v1_request = sspr_reset_password_v1_request_convertToJSON(sspr_reset_password_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_sspr_reset_password_v1_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 204) {
        printf("%s\n","The password was reset Successfully");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","You are not allowed to call this function");
    }
    if (apiClient->response_code == 422) {
        printf("%s\n","The syntax of the request is valid but the request cannot be completed. Look for detail in body.");
    }
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_sspr_reset_password_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_sspr_reset_password_v1_request);
        localVarSingleItemJSON_sspr_reset_password_v1_request = NULL;
    }
    free(localVarBodyParameters);

}

// Send username(s)
//
// This endpoint returns an email with the username(s) matching the email address provided in case of forgotten username
//
void
ModuleSsprAPI_ssprSendUsernamesV1(apiClient_t *apiClient, sspr_send_usernames_v1_request_t * sspr_send_usernames_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/module/sspr/sendUsernames")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/module/sspr/sendUsernames");




    // Body Param
    cJSON *localVarSingleItemJSON_sspr_send_usernames_v1_request = NULL;
    if (sspr_send_usernames_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_sspr_send_usernames_v1_request = sspr_send_usernames_v1_request_convertToJSON(sspr_send_usernames_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_sspr_send_usernames_v1_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 204) {
        printf("%s\n","The request was accepted.  Do not misinterpret as \&quot;the email address has an account attached to it\&quot;. It only means an email will be sent if (and only if) an account exists for that email address.");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","You are not allowed to call this function");
    }
    if (apiClient->response_code == 422) {
        printf("%s\n","The syntax of the request is valid but the request cannot be completed. Look for detail in body.");
    }
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_sspr_send_usernames_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_sspr_send_usernames_v1_request);
        localVarSingleItemJSON_sspr_send_usernames_v1_request = NULL;
    }
    free(localVarBodyParameters);

}

// Unlock Account Request
//
// This endpoint sends an email with a link to unlock the user account.  sEmailAddress must be set if eUserTypeSSPR = EzsignUser  sUserLoginname must be set if eUserTypeSSPR = Native
//
void
ModuleSsprAPI_ssprUnlockAccountRequestV1(apiClient_t *apiClient, sspr_unlock_account_request_v1_request_t * sspr_unlock_account_request_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/module/sspr/unlockAccountRequest")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/module/sspr/unlockAccountRequest");




    // Body Param
    cJSON *localVarSingleItemJSON_sspr_unlock_account_request_v1_request = NULL;
    if (sspr_unlock_account_request_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_sspr_unlock_account_request_v1_request = sspr_unlock_account_request_v1_request_convertToJSON(sspr_unlock_account_request_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_sspr_unlock_account_request_v1_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 204) {
        printf("%s\n","The request was accepted.  Do not misinterpret as \&quot;the account exists\&quot;. It only means an email will be sent if (and only if) an account exists.");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","You are not allowed to call this function");
    }
    if (apiClient->response_code == 422) {
        printf("%s\n","The syntax of the request is valid but the request cannot be completed. Look for detail in body.");
    }
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_sspr_unlock_account_request_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_sspr_unlock_account_request_v1_request);
        localVarSingleItemJSON_sspr_unlock_account_request_v1_request = NULL;
    }
    free(localVarBodyParameters);

}

// Unlock Account
//
// This endpoint unlocks the user account.  sEmailAddress must be set if eUserTypeSSPR = EzsignUser  sUserLoginname must be set if eUserTypeSSPR = Native
//
void
ModuleSsprAPI_ssprUnlockAccountV1(apiClient_t *apiClient, sspr_unlock_account_v1_request_t * sspr_unlock_account_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/module/sspr/unlockAccount")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/module/sspr/unlockAccount");




    // Body Param
    cJSON *localVarSingleItemJSON_sspr_unlock_account_v1_request = NULL;
    if (sspr_unlock_account_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_sspr_unlock_account_v1_request = sspr_unlock_account_v1_request_convertToJSON(sspr_unlock_account_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_sspr_unlock_account_v1_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 204) {
        printf("%s\n","The account was unlocked Successfully");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","You are not allowed to call this function");
    }
    if (apiClient->response_code == 422) {
        printf("%s\n","The syntax of the request is valid but the request cannot be completed. Look for detail in body.");
    }
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_sspr_unlock_account_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_sspr_unlock_account_v1_request);
        localVarSingleItemJSON_sspr_unlock_account_v1_request = NULL;
    }
    free(localVarBodyParameters);

}

// Validate Token
//
// This endpoint validates if a Token is valid and not expired.  sEmailAddress must be set if eUserTypeSSPR = EzsignUser  sUserLoginname must be set if eUserTypeSSPR = Native
//
void
ModuleSsprAPI_ssprValidateTokenV1(apiClient_t *apiClient, sspr_validate_token_v1_request_t * sspr_validate_token_v1_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/1/module/sspr/validateToken")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/1/module/sspr/validateToken");




    // Body Param
    cJSON *localVarSingleItemJSON_sspr_validate_token_v1_request = NULL;
    if (sspr_validate_token_v1_request != NULL)
    {
        //string
        localVarSingleItemJSON_sspr_validate_token_v1_request = sspr_validate_token_v1_request_convertToJSON(sspr_validate_token_v1_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_sspr_validate_token_v1_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 204) {
        printf("%s\n","The token is valid");
    }
    if (apiClient->response_code == 403) {
        printf("%s\n","You are not allowed to call this function");
    }
    if (apiClient->response_code == 422) {
        printf("%s\n","The syntax of the request is valid but the request cannot be completed. Look for detail in body.");
    }
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    list_free(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_sspr_validate_token_v1_request) {
        cJSON_Delete(localVarSingleItemJSON_sspr_validate_token_v1_request);
        localVarSingleItemJSON_sspr_validate_token_v1_request = NULL;
    }
    free(localVarBodyParameters);

}

