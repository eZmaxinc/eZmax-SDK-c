/*
 * authenticationexternal_request.h
 *
 * A Authenticationexternal Object
 */

#ifndef _authenticationexternal_request_H_
#define _authenticationexternal_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticationexternal_request_t authenticationexternal_request_t;

#include "field_e_authenticationexternal_type.h"



typedef struct authenticationexternal_request_t {
    int pki_authenticationexternal_id; //numeric
    char *s_authenticationexternal_description; // string
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} authenticationexternal_request_t;

__attribute__((deprecated)) authenticationexternal_request_t *authenticationexternal_request_create(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type
);

void authenticationexternal_request_free(authenticationexternal_request_t *authenticationexternal_request);

authenticationexternal_request_t *authenticationexternal_request_parseFromJSON(cJSON *authenticationexternal_requestJSON);

cJSON *authenticationexternal_request_convertToJSON(authenticationexternal_request_t *authenticationexternal_request);

#endif /* _authenticationexternal_request_H_ */

