#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/sspr_reset_password_request_v1_request.h"
#include "../model/sspr_reset_password_v1_request.h"
#include "../model/sspr_send_usernames_v1_request.h"
#include "../model/sspr_unlock_account_request_v1_request.h"
#include "../model/sspr_unlock_account_v1_request.h"


// Reset Password Request
//
// This endpoint sends an email with a link to reset the user's password.  sEmailAddress must be set if eUserTypeSSPR = EzsignUser  sUserLoginname must be set if eUserTypeSSPR = Native
//
void
ModuleSsprAPI_ssprResetPasswordRequestV1(apiClient_t *apiClient, sspr_reset_password_request_v1_request_t * sspr_reset_password_request_v1_request );


// Reset Password
//
// This endpoint resets the user's password.  sEmailAddress must be set if eUserTypeSSPR = EzsignUser  sUserLoginname must be set if eUserTypeSSPR = Native
//
void
ModuleSsprAPI_ssprResetPasswordV1(apiClient_t *apiClient, sspr_reset_password_v1_request_t * sspr_reset_password_v1_request );


// Send username(s)
//
// This endpoint returns an email with the username(s) matching the email address provided in case of forgotten username
//
void
ModuleSsprAPI_ssprSendUsernamesV1(apiClient_t *apiClient, sspr_send_usernames_v1_request_t * sspr_send_usernames_v1_request );


// Unlock Account Request
//
// This endpoint sends an email with a link to unlock the user account.  sEmailAddress must be set if eUserTypeSSPR = EzsignUser  sUserLoginname must be set if eUserTypeSSPR = Native
//
void
ModuleSsprAPI_ssprUnlockAccountRequestV1(apiClient_t *apiClient, sspr_unlock_account_request_v1_request_t * sspr_unlock_account_request_v1_request );


// Unlock Account
//
// This endpoint unlocks the user account.  sEmailAddress must be set if eUserTypeSSPR = EzsignUser  sUserLoginname must be set if eUserTypeSSPR = Native
//
void
ModuleSsprAPI_ssprUnlockAccountV1(apiClient_t *apiClient, sspr_unlock_account_v1_request_t * sspr_unlock_account_v1_request );


