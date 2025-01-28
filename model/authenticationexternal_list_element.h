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



typedef struct authenticationexternal_list_element_t {
    int pki_authenticationexternal_id; //numeric
    char *s_authenticationexternal_description; // string
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type; //referenced enum
    int b_authenticationexternal_connected; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} authenticationexternal_list_element_t;

__attribute__((deprecated)) authenticationexternal_list_element_t *authenticationexternal_list_element_create(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type,
    int b_authenticationexternal_connected
);

void authenticationexternal_list_element_free(authenticationexternal_list_element_t *authenticationexternal_list_element);

authenticationexternal_list_element_t *authenticationexternal_list_element_parseFromJSON(cJSON *authenticationexternal_list_elementJSON);

cJSON *authenticationexternal_list_element_convertToJSON(authenticationexternal_list_element_t *authenticationexternal_list_element);

#endif /* _authenticationexternal_list_element_H_ */

