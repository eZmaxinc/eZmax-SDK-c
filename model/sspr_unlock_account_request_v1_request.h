/*
 * sspr_unlock_account_request_v1_request.h
 *
 * Request for the /1/module/sspr/unlockAccountRequest API Request
 */

#ifndef _sspr_unlock_account_request_v1_request_H_
#define _sspr_unlock_account_request_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sspr_unlock_account_request_v1_request_t sspr_unlock_account_request_v1_request_t;

#include "field_e_user_type_sspr.h"

// Enum  for sspr_unlock_account_request_v1_request

typedef enum  { ezmax_api_definition_sspr_unlock_account_request_v1_request__NULL = 0, ezmax_api_definition_sspr_unlock_account_request_v1_request__EzsignUser, ezmax_api_definition_sspr_unlock_account_request_v1_request__Native } ezmax_api_definition_sspr_unlock_account_request_v1_request__e;

char* sspr_unlock_account_request_v1_request_e_user_type_sspr_ToString(ezmax_api_definition_sspr_unlock_account_request_v1_request__e e_user_type_sspr);

ezmax_api_definition_sspr_unlock_account_request_v1_request__e sspr_unlock_account_request_v1_request_e_user_type_sspr_FromString(char* e_user_type_sspr);



typedef struct sspr_unlock_account_request_v1_request_t {
    char *pks_customer_code; // string
    int fki_language_id; //numeric
    field_e_user_type_sspr_t *e_user_type_sspr; // custom
    char *s_email_address; // string
    char *s_user_loginname; // string

} sspr_unlock_account_request_v1_request_t;

sspr_unlock_account_request_v1_request_t *sspr_unlock_account_request_v1_request_create(
    char *pks_customer_code,
    int fki_language_id,
    field_e_user_type_sspr_t *e_user_type_sspr,
    char *s_email_address,
    char *s_user_loginname
);

void sspr_unlock_account_request_v1_request_free(sspr_unlock_account_request_v1_request_t *sspr_unlock_account_request_v1_request);

sspr_unlock_account_request_v1_request_t *sspr_unlock_account_request_v1_request_parseFromJSON(cJSON *sspr_unlock_account_request_v1_requestJSON);

cJSON *sspr_unlock_account_request_v1_request_convertToJSON(sspr_unlock_account_request_v1_request_t *sspr_unlock_account_request_v1_request);

#endif /* _sspr_unlock_account_request_v1_request_H_ */

