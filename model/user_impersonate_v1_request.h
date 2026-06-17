/*
 * user_impersonate_v1_request.h
 *
 * Request for POST /1/object/user/{pkiUserID}/impersonate
 */

#ifndef _user_impersonate_v1_request_H_
#define _user_impersonate_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_impersonate_v1_request_t user_impersonate_v1_request_t;




typedef struct user_impersonate_v1_request_t {
    int *i_expiration_minutes; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} user_impersonate_v1_request_t;

__attribute__((deprecated)) user_impersonate_v1_request_t *user_impersonate_v1_request_create(
    int *i_expiration_minutes
);

void user_impersonate_v1_request_free(user_impersonate_v1_request_t *user_impersonate_v1_request);

user_impersonate_v1_request_t *user_impersonate_v1_request_parseFromJSON(cJSON *user_impersonate_v1_requestJSON);

cJSON *user_impersonate_v1_request_convertToJSON(user_impersonate_v1_request_t *user_impersonate_v1_request);

#endif /* _user_impersonate_v1_request_H_ */

