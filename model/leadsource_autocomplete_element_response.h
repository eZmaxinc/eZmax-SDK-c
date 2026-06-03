/*
 * leadsource_autocomplete_element_response.h
 *
 * A Leadsource AutocompleteElement Response
 */

#ifndef _leadsource_autocomplete_element_response_H_
#define _leadsource_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct leadsource_autocomplete_element_response_t leadsource_autocomplete_element_response_t;




typedef struct leadsource_autocomplete_element_response_t {
    int *pki_leadsource_id; //numeric
    char *s_leadsource_name_x; // string
    int *b_leadsource_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} leadsource_autocomplete_element_response_t;

__attribute__((deprecated)) leadsource_autocomplete_element_response_t *leadsource_autocomplete_element_response_create(
    int *pki_leadsource_id,
    char *s_leadsource_name_x,
    int *b_leadsource_isactive
);

void leadsource_autocomplete_element_response_free(leadsource_autocomplete_element_response_t *leadsource_autocomplete_element_response);

leadsource_autocomplete_element_response_t *leadsource_autocomplete_element_response_parseFromJSON(cJSON *leadsource_autocomplete_element_responseJSON);

cJSON *leadsource_autocomplete_element_response_convertToJSON(leadsource_autocomplete_element_response_t *leadsource_autocomplete_element_response);

#endif /* _leadsource_autocomplete_element_response_H_ */

