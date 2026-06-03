/*
 * agenttype_autocomplete_element_response.h
 *
 * A Agenttype AutocompleteElement Response
 */

#ifndef _agenttype_autocomplete_element_response_H_
#define _agenttype_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agenttype_autocomplete_element_response_t agenttype_autocomplete_element_response_t;




typedef struct agenttype_autocomplete_element_response_t {
    int *pki_agenttype_id; //numeric
    char *s_agenttype_name_x; // string
    int *b_agenttype_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} agenttype_autocomplete_element_response_t;

__attribute__((deprecated)) agenttype_autocomplete_element_response_t *agenttype_autocomplete_element_response_create(
    int *pki_agenttype_id,
    char *s_agenttype_name_x,
    int *b_agenttype_isactive
);

void agenttype_autocomplete_element_response_free(agenttype_autocomplete_element_response_t *agenttype_autocomplete_element_response);

agenttype_autocomplete_element_response_t *agenttype_autocomplete_element_response_parseFromJSON(cJSON *agenttype_autocomplete_element_responseJSON);

cJSON *agenttype_autocomplete_element_response_convertToJSON(agenttype_autocomplete_element_response_t *agenttype_autocomplete_element_response);

#endif /* _agenttype_autocomplete_element_response_H_ */

