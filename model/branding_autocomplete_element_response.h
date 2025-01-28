/*
 * branding_autocomplete_element_response.h
 *
 * Branding AutocompleteElement Response
 */

#ifndef _branding_autocomplete_element_response_H_
#define _branding_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_autocomplete_element_response_t branding_autocomplete_element_response_t;




typedef struct branding_autocomplete_element_response_t {
    char *s_branding_description_x; // string
    int pki_branding_id; //numeric
    int b_branding_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} branding_autocomplete_element_response_t;

__attribute__((deprecated)) branding_autocomplete_element_response_t *branding_autocomplete_element_response_create(
    char *s_branding_description_x,
    int pki_branding_id,
    int b_branding_isactive
);

void branding_autocomplete_element_response_free(branding_autocomplete_element_response_t *branding_autocomplete_element_response);

branding_autocomplete_element_response_t *branding_autocomplete_element_response_parseFromJSON(cJSON *branding_autocomplete_element_responseJSON);

cJSON *branding_autocomplete_element_response_convertToJSON(branding_autocomplete_element_response_t *branding_autocomplete_element_response);

#endif /* _branding_autocomplete_element_response_H_ */

