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

// Enum  for authenticationexternal_response_compound

typedef enum  { ezmax_api_definition__full_authenticationexternal_response_compound__NULL = 0, ezmax_api_definition__full_authenticationexternal_response_compound__Salesforce, ezmax_api_definition__full_authenticationexternal_response_compound__SalesforceSandbox } ezmax_api_definition__full_authenticationexternal_response_compound__e;

char* authenticationexternal_response_compound_e_authenticationexternal_type_ToString(ezmax_api_definition__full_authenticationexternal_response_compound__e e_authenticationexternal_type);

ezmax_api_definition__full_authenticationexternal_response_compound__e authenticationexternal_response_compound_e_authenticationexternal_type_FromString(char* e_authenticationexternal_type);



typedef struct authenticationexternal_response_compound_t {
    int pki_authenticationexternal_id; //numeric
    char *s_authenticationexternal_description; // string
    field_e_authenticationexternal_type_t *e_authenticationexternal_type; // custom
    int b_authenticationexternal_connected; //boolean
    char *s_authenticationexternal_authorizationurl; // string
    struct common_audit_t *obj_audit; //model

} authenticationexternal_response_compound_t;

authenticationexternal_response_compound_t *authenticationexternal_response_compound_create(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    field_e_authenticationexternal_type_t *e_authenticationexternal_type,
    int b_authenticationexternal_connected,
    char *s_authenticationexternal_authorizationurl,
    common_audit_t *obj_audit
);

void authenticationexternal_response_compound_free(authenticationexternal_response_compound_t *authenticationexternal_response_compound);

authenticationexternal_response_compound_t *authenticationexternal_response_compound_parseFromJSON(cJSON *authenticationexternal_response_compoundJSON);

cJSON *authenticationexternal_response_compound_convertToJSON(authenticationexternal_response_compound_t *authenticationexternal_response_compound);

#endif /* _authenticationexternal_response_compound_H_ */

