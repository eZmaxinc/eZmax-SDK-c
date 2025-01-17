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

#include "authenticationexternal_request.h"
#include "field_e_authenticationexternal_type.h"

// Enum  for authenticationexternal_request_compound

typedef enum  { ezmax_api_definition__full_authenticationexternal_request_compound__NULL = 0, ezmax_api_definition__full_authenticationexternal_request_compound__Salesforce, ezmax_api_definition__full_authenticationexternal_request_compound__SalesforceSandbox } ezmax_api_definition__full_authenticationexternal_request_compound__e;

char* authenticationexternal_request_compound_e_authenticationexternal_type_ToString(ezmax_api_definition__full_authenticationexternal_request_compound__e e_authenticationexternal_type);

ezmax_api_definition__full_authenticationexternal_request_compound__e authenticationexternal_request_compound_e_authenticationexternal_type_FromString(char* e_authenticationexternal_type);



typedef struct authenticationexternal_request_compound_t {
    int pki_authenticationexternal_id; //numeric
    char *s_authenticationexternal_description; // string
    field_e_authenticationexternal_type_t *e_authenticationexternal_type; // custom

} authenticationexternal_request_compound_t;

authenticationexternal_request_compound_t *authenticationexternal_request_compound_create(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    field_e_authenticationexternal_type_t *e_authenticationexternal_type
);

void authenticationexternal_request_compound_free(authenticationexternal_request_compound_t *authenticationexternal_request_compound);

authenticationexternal_request_compound_t *authenticationexternal_request_compound_parseFromJSON(cJSON *authenticationexternal_request_compoundJSON);

cJSON *authenticationexternal_request_compound_convertToJSON(authenticationexternal_request_compound_t *authenticationexternal_request_compound);

#endif /* _authenticationexternal_request_compound_H_ */

