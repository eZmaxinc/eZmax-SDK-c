/*
 * module_autocomplete_element_response.h
 *
 * A Module AutocompleteElement Response
 */

#ifndef _module_autocomplete_element_response_H_
#define _module_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct module_autocomplete_element_response_t module_autocomplete_element_response_t;




typedef struct module_autocomplete_element_response_t {
    int pki_module_id; //numeric
    char *s_module_name_x; // string
    int b_module_isactive; //boolean

} module_autocomplete_element_response_t;

module_autocomplete_element_response_t *module_autocomplete_element_response_create(
    int pki_module_id,
    char *s_module_name_x,
    int b_module_isactive
);

void module_autocomplete_element_response_free(module_autocomplete_element_response_t *module_autocomplete_element_response);

module_autocomplete_element_response_t *module_autocomplete_element_response_parseFromJSON(cJSON *module_autocomplete_element_responseJSON);

cJSON *module_autocomplete_element_response_convertToJSON(module_autocomplete_element_response_t *module_autocomplete_element_response);

#endif /* _module_autocomplete_element_response_H_ */

