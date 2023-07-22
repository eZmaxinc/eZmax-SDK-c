/*
 * scim_authentication_scheme.h
 *
 * 
 */

#ifndef _scim_authentication_scheme_H_
#define _scim_authentication_scheme_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scim_authentication_scheme_t scim_authentication_scheme_t;


// Enum TYPE for scim_authentication_scheme

typedef enum  { ezmax_api_definition__full_scim_authentication_scheme_TYPE_NULL = 0, ezmax_api_definition__full_scim_authentication_scheme_TYPE_oauth, ezmax_api_definition__full_scim_authentication_scheme_TYPE_oauth2, ezmax_api_definition__full_scim_authentication_scheme_TYPE_oauthbearertoken, ezmax_api_definition__full_scim_authentication_scheme_TYPE_httpbasic, ezmax_api_definition__full_scim_authentication_scheme_TYPE_httpdigest } ezmax_api_definition__full_scim_authentication_scheme_TYPE_e;

char* scim_authentication_scheme_type_ToString(ezmax_api_definition__full_scim_authentication_scheme_TYPE_e type);

ezmax_api_definition__full_scim_authentication_scheme_TYPE_e scim_authentication_scheme_type_FromString(char* type);



typedef struct scim_authentication_scheme_t {
    char *description; // string
    char *name; // string
    ezmax_api_definition__full_scim_authentication_scheme_TYPE_e type; //enum

} scim_authentication_scheme_t;

scim_authentication_scheme_t *scim_authentication_scheme_create(
    char *description,
    char *name,
    ezmax_api_definition__full_scim_authentication_scheme_TYPE_e type
);

void scim_authentication_scheme_free(scim_authentication_scheme_t *scim_authentication_scheme);

scim_authentication_scheme_t *scim_authentication_scheme_parseFromJSON(cJSON *scim_authentication_schemeJSON);

cJSON *scim_authentication_scheme_convertToJSON(scim_authentication_scheme_t *scim_authentication_scheme);

#endif /* _scim_authentication_scheme_H_ */

