/*
 * authenticationexternal_autocomplete_element_response.h
 *
 * A Authenticationexternal AutocompleteElement Response
 */

#ifndef _authenticationexternal_autocomplete_element_response_H_
#define _authenticationexternal_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticationexternal_autocomplete_element_response_t authenticationexternal_autocomplete_element_response_t;




typedef struct authenticationexternal_autocomplete_element_response_t {
    int pki_authenticationexternal_id; //numeric
    char *s_authenticationexternal_description; // string
    int b_authenticationexternal_isactive; //boolean

} authenticationexternal_autocomplete_element_response_t;

authenticationexternal_autocomplete_element_response_t *authenticationexternal_autocomplete_element_response_create(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    int b_authenticationexternal_isactive
);

void authenticationexternal_autocomplete_element_response_free(authenticationexternal_autocomplete_element_response_t *authenticationexternal_autocomplete_element_response);

authenticationexternal_autocomplete_element_response_t *authenticationexternal_autocomplete_element_response_parseFromJSON(cJSON *authenticationexternal_autocomplete_element_responseJSON);

cJSON *authenticationexternal_autocomplete_element_response_convertToJSON(authenticationexternal_autocomplete_element_response_t *authenticationexternal_autocomplete_element_response);

#endif /* _authenticationexternal_autocomplete_element_response_H_ */

