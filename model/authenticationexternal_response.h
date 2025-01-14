/*
 * authenticationexternal_response.h
 *
 * A Authenticationexternal Object
 */

#ifndef _authenticationexternal_response_H_
#define _authenticationexternal_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticationexternal_response_t authenticationexternal_response_t;

#include "common_audit.h"
#include "field_e_authenticationexternal_type.h"

// Enum  for authenticationexternal_response

typedef enum  { ezmax_api_definition__full_authenticationexternal_response__NULL = 0, ezmax_api_definition__full_authenticationexternal_response__Salesforce, ezmax_api_definition__full_authenticationexternal_response__SalesforceSandbox } ezmax_api_definition__full_authenticationexternal_response__e;

char* authenticationexternal_response_e_authenticationexternal_type_ToString(ezmax_api_definition__full_authenticationexternal_response__e e_authenticationexternal_type);

ezmax_api_definition__full_authenticationexternal_response__e authenticationexternal_response_e_authenticationexternal_type_FromString(char* e_authenticationexternal_type);



typedef struct authenticationexternal_response_t {
    int pki_authenticationexternal_id; //numeric
    char *s_authenticationexternal_description; // string
    field_e_authenticationexternal_type_t *e_authenticationexternal_type; // custom
    int b_authenticationexternal_connected; //boolean
    char *s_authenticationexternal_authorizationurl; // string
    struct common_audit_t *obj_audit; //model

} authenticationexternal_response_t;

authenticationexternal_response_t *authenticationexternal_response_create(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    field_e_authenticationexternal_type_t *e_authenticationexternal_type,
    int b_authenticationexternal_connected,
    char *s_authenticationexternal_authorizationurl,
    common_audit_t *obj_audit
);

void authenticationexternal_response_free(authenticationexternal_response_t *authenticationexternal_response);

authenticationexternal_response_t *authenticationexternal_response_parseFromJSON(cJSON *authenticationexternal_responseJSON);

cJSON *authenticationexternal_response_convertToJSON(authenticationexternal_response_t *authenticationexternal_response);

#endif /* _authenticationexternal_response_H_ */

