/*
 * permission_response.h
 *
 * A Permission Object
 */

#ifndef _permission_response_H_
#define _permission_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct permission_response_t permission_response_t;




typedef struct permission_response_t {
    int pki_permission_id; //numeric
    int fki_user_id; //numeric
    int fki_apikey_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_company_id; //numeric
    int fki_modulesection_id; //numeric
    char *s_company_name_x; // string

} permission_response_t;

permission_response_t *permission_response_create(
    int pki_permission_id,
    int fki_user_id,
    int fki_apikey_id,
    int fki_usergroup_id,
    int fki_company_id,
    int fki_modulesection_id,
    char *s_company_name_x
);

void permission_response_free(permission_response_t *permission_response);

permission_response_t *permission_response_parseFromJSON(cJSON *permission_responseJSON);

cJSON *permission_response_convertToJSON(permission_response_t *permission_response);

#endif /* _permission_response_H_ */

