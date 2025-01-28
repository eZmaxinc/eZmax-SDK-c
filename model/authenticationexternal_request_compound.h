/*
 * authenticationexternal_request_compound.h
 *
 * A Authenticationexternal Object and children
 */

#ifndef _authenticationexternal_request_compound_H_
#define _authenticationexternal_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticationexternal_request_compound_t authenticationexternal_request_compound_t;

#include "field_e_authenticationexternal_type.h"



typedef struct authenticationexternal_request_compound_t {
    int pki_authenticationexternal_id; //numeric
    char *s_authenticationexternal_description; // string
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} authenticationexternal_request_compound_t;

__attribute__((deprecated)) authenticationexternal_request_compound_t *authenticationexternal_request_compound_create(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type
);

void authenticationexternal_request_compound_free(authenticationexternal_request_compound_t *authenticationexternal_request_compound);

authenticationexternal_request_compound_t *authenticationexternal_request_compound_parseFromJSON(cJSON *authenticationexternal_request_compoundJSON);

cJSON *authenticationexternal_request_compound_convertToJSON(authenticationexternal_request_compound_t *authenticationexternal_request_compound);

#endif /* _authenticationexternal_request_compound_H_ */

