/*
 * authenticate_authenticate_v2_request.h
 *
 * Request for the /2/module/authenticate/authenticate API Request
 */

#ifndef _authenticate_authenticate_v2_request_H_
#define _authenticate_authenticate_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticate_authenticate_v2_request_t authenticate_authenticate_v2_request_t;




typedef struct authenticate_authenticate_v2_request_t {
    char *pks_customer_code; // string
    char *s_email_address; // string
    char *s_user_loginname; // string
    char *s_password; // string

} authenticate_authenticate_v2_request_t;

authenticate_authenticate_v2_request_t *authenticate_authenticate_v2_request_create(
    char *pks_customer_code,
    char *s_email_address,
    char *s_user_loginname,
    char *s_password
);

void authenticate_authenticate_v2_request_free(authenticate_authenticate_v2_request_t *authenticate_authenticate_v2_request);

authenticate_authenticate_v2_request_t *authenticate_authenticate_v2_request_parseFromJSON(cJSON *authenticate_authenticate_v2_requestJSON);

cJSON *authenticate_authenticate_v2_request_convertToJSON(authenticate_authenticate_v2_request_t *authenticate_authenticate_v2_request);

#endif /* _authenticate_authenticate_v2_request_H_ */

