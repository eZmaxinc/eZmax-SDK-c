/*
 * permission_request.h
 *
 * A Permission Object
 */

#ifndef _permission_request_H_
#define _permission_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct permission_request_t permission_request_t;




typedef struct permission_request_t {
    int pki_permission_id; //numeric
    int fki_user_id; //numeric
    int fki_apikey_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_company_id; //numeric
    int fki_modulesection_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} permission_request_t;

__attribute__((deprecated)) permission_request_t *permission_request_create(
    int pki_permission_id,
    int fki_user_id,
    int fki_apikey_id,
    int fki_usergroup_id,
    int fki_company_id,
    int fki_modulesection_id
);

void permission_request_free(permission_request_t *permission_request);

permission_request_t *permission_request_parseFromJSON(cJSON *permission_requestJSON);

cJSON *permission_request_convertToJSON(permission_request_t *permission_request);

#endif /* _permission_request_H_ */

