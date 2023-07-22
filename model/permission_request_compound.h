/*
 * permission_request_compound.h
 *
 * A Permission Object and children to create a complete structure
 */

#ifndef _permission_request_compound_H_
#define _permission_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct permission_request_compound_t permission_request_compound_t;




typedef struct permission_request_compound_t {
    int pki_permission_id; //numeric
    int fki_user_id; //numeric
    int fki_apikey_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_company_id; //numeric
    int fki_modulesection_id; //numeric

} permission_request_compound_t;

permission_request_compound_t *permission_request_compound_create(
    int pki_permission_id,
    int fki_user_id,
    int fki_apikey_id,
    int fki_usergroup_id,
    int fki_company_id,
    int fki_modulesection_id
);

void permission_request_compound_free(permission_request_compound_t *permission_request_compound);

permission_request_compound_t *permission_request_compound_parseFromJSON(cJSON *permission_request_compoundJSON);

cJSON *permission_request_compound_convertToJSON(permission_request_compound_t *permission_request_compound);

#endif /* _permission_request_compound_H_ */

