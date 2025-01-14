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

// Enum  for authenticationexternal_request

typedef enum  { ezmax_api_definition__full_authenticationexternal_request__NULL = 0, ezmax_api_definition__full_authenticationexternal_request__Salesforce, ezmax_api_definition__full_authenticationexternal_request__SalesforceSandbox } ezmax_api_definition__full_authenticationexternal_request__e;

char* authenticationexternal_request_e_authenticationexternal_type_ToString(ezmax_api_definition__full_authenticationexternal_request__e e_authenticationexternal_type);

ezmax_api_definition__full_authenticationexternal_request__e authenticationexternal_request_e_authenticationexternal_type_FromString(char* e_authenticationexternal_type);



typedef struct authenticationexternal_request_t {
    int pki_authenticationexternal_id; //numeric
    char *s_authenticationexternal_description; // string
    field_e_authenticationexternal_type_t *e_authenticationexternal_type; // custom

} authenticationexternal_request_t;

authenticationexternal_request_t *authenticationexternal_request_create(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    field_e_authenticationexternal_type_t *e_authenticationexternal_type
);

void authenticationexternal_request_free(authenticationexternal_request_t *authenticationexternal_request);

authenticationexternal_request_t *authenticationexternal_request_parseFromJSON(cJSON *authenticationexternal_requestJSON);

cJSON *authenticationexternal_request_convertToJSON(authenticationexternal_request_t *authenticationexternal_request);

#endif /* _authenticationexternal_request_H_ */

