/*
 * authenticationexternal_list_element.h
 *
 * A Authenticationexternal List Element
 */

#ifndef _authenticationexternal_list_element_H_
#define _authenticationexternal_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticationexternal_list_element_t authenticationexternal_list_element_t;

#include "field_e_authenticationexternal_type.h"

// Enum  for authenticationexternal_list_element

typedef enum  { ezmax_api_definition__full_authenticationexternal_list_element__NULL = 0, ezmax_api_definition__full_authenticationexternal_list_element__Salesforce, ezmax_api_definition__full_authenticationexternal_list_element__SalesforceSandbox } ezmax_api_definition__full_authenticationexternal_list_element__e;

char* authenticationexternal_list_element_e_authenticationexternal_type_ToString(ezmax_api_definition__full_authenticationexternal_list_element__e e_authenticationexternal_type);

ezmax_api_definition__full_authenticationexternal_list_element__e authenticationexternal_list_element_e_authenticationexternal_type_FromString(char* e_authenticationexternal_type);



typedef struct authenticationexternal_list_element_t {
    int pki_authenticationexternal_id; //numeric
    char *s_authenticationexternal_description; // string
    field_e_authenticationexternal_type_t *e_authenticationexternal_type; // custom
    int b_authenticationexternal_connected; //boolean

} authenticationexternal_list_element_t;

authenticationexternal_list_element_t *authenticationexternal_list_element_create(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    field_e_authenticationexternal_type_t *e_authenticationexternal_type,
    int b_authenticationexternal_connected
);

void authenticationexternal_list_element_free(authenticationexternal_list_element_t *authenticationexternal_list_element);

authenticationexternal_list_element_t *authenticationexternal_list_element_parseFromJSON(cJSON *authenticationexternal_list_elementJSON);

cJSON *authenticationexternal_list_element_convertToJSON(authenticationexternal_list_element_t *authenticationexternal_list_element);

#endif /* _authenticationexternal_list_element_H_ */

