/*
 * glaccountcontainer_autocomplete_element_response.h
 *
 * A Glaccountcontainer AutocompleteElement Response
 */

#ifndef _glaccountcontainer_autocomplete_element_response_H_
#define _glaccountcontainer_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct glaccountcontainer_autocomplete_element_response_t glaccountcontainer_autocomplete_element_response_t;




typedef struct glaccountcontainer_autocomplete_element_response_t {
    int pki_glaccountcontainer_id; //numeric
    char *s_glaccountcontainer_longcode; // string
    char *s_glaccountcontainer_longdescription_x; // string
    int b_glaccountcontainer_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} glaccountcontainer_autocomplete_element_response_t;

__attribute__((deprecated)) glaccountcontainer_autocomplete_element_response_t *glaccountcontainer_autocomplete_element_response_create(
    int pki_glaccountcontainer_id,
    char *s_glaccountcontainer_longcode,
    char *s_glaccountcontainer_longdescription_x,
    int b_glaccountcontainer_isactive
);

void glaccountcontainer_autocomplete_element_response_free(glaccountcontainer_autocomplete_element_response_t *glaccountcontainer_autocomplete_element_response);

glaccountcontainer_autocomplete_element_response_t *glaccountcontainer_autocomplete_element_response_parseFromJSON(cJSON *glaccountcontainer_autocomplete_element_responseJSON);

cJSON *glaccountcontainer_autocomplete_element_response_convertToJSON(glaccountcontainer_autocomplete_element_response_t *glaccountcontainer_autocomplete_element_response);

#endif /* _glaccountcontainer_autocomplete_element_response_H_ */

