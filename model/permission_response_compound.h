/*
 * permission_response_compound.h
 *
 * A Permission Object and children to create a complete structure
 */

#ifndef _permission_response_compound_H_
#define _permission_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct permission_response_compound_t permission_response_compound_t;




typedef struct permission_response_compound_t {
    int pki_permission_id; //numeric
    int fki_user_id; //numeric
    int fki_apikey_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_company_id; //numeric
    int fki_modulesection_id; //numeric
    char *s_company_name_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} permission_response_compound_t;

__attribute__((deprecated)) permission_response_compound_t *permission_response_compound_create(
    int pki_permission_id,
    int fki_user_id,
    int fki_apikey_id,
    int fki_usergroup_id,
    int fki_company_id,
    int fki_modulesection_id,
    char *s_company_name_x
);

void permission_response_compound_free(permission_response_compound_t *permission_response_compound);

permission_response_compound_t *permission_response_compound_parseFromJSON(cJSON *permission_response_compoundJSON);

cJSON *permission_response_compound_convertToJSON(permission_response_compound_t *permission_response_compound);

#endif /* _permission_response_compound_H_ */

