/*
 * authenticationexternal_response_compound.h
 *
 * A Authenticationexternal Object
 */

#ifndef _authenticationexternal_response_compound_H_
#define _authenticationexternal_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticationexternal_response_compound_t authenticationexternal_response_compound_t;

#include "common_audit.h"
#include "field_e_authenticationexternal_type.h"



typedef struct authenticationexternal_response_compound_t {
    int pki_authenticationexternal_id; //numeric
    char *s_authenticationexternal_description; // string
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type; //referenced enum
    int b_authenticationexternal_connected; //boolean
    char *s_authenticationexternal_authorizationurl; // string
    struct common_audit_t *obj_audit; //model

    int _library_owned; // Is the library responsible for freeing this object?
} authenticationexternal_response_compound_t;

__attribute__((deprecated)) authenticationexternal_response_compound_t *authenticationexternal_response_compound_create(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type,
    int b_authenticationexternal_connected,
    char *s_authenticationexternal_authorizationurl,
    common_audit_t *obj_audit
);

void authenticationexternal_response_compound_free(authenticationexternal_response_compound_t *authenticationexternal_response_compound);

authenticationexternal_response_compound_t *authenticationexternal_response_compound_parseFromJSON(cJSON *authenticationexternal_response_compoundJSON);

cJSON *authenticationexternal_response_compound_convertToJSON(authenticationexternal_response_compound_t *authenticationexternal_response_compound);

#endif /* _authenticationexternal_response_compound_H_ */

