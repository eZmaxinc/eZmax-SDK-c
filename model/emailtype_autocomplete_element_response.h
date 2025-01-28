/*
 * emailtype_autocomplete_element_response.h
 *
 * A Emailtype AutocompleteElement Response
 */

#ifndef _emailtype_autocomplete_element_response_H_
#define _emailtype_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct emailtype_autocomplete_element_response_t emailtype_autocomplete_element_response_t;




typedef struct emailtype_autocomplete_element_response_t {
    int pki_emailtype_id; //numeric
    char *s_emailtype_name_x; // string
    int b_emailtype_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} emailtype_autocomplete_element_response_t;

__attribute__((deprecated)) emailtype_autocomplete_element_response_t *emailtype_autocomplete_element_response_create(
    int pki_emailtype_id,
    char *s_emailtype_name_x,
    int b_emailtype_isactive
);

void emailtype_autocomplete_element_response_free(emailtype_autocomplete_element_response_t *emailtype_autocomplete_element_response);

emailtype_autocomplete_element_response_t *emailtype_autocomplete_element_response_parseFromJSON(cJSON *emailtype_autocomplete_element_responseJSON);

cJSON *emailtype_autocomplete_element_response_convertToJSON(emailtype_autocomplete_element_response_t *emailtype_autocomplete_element_response);

#endif /* _emailtype_autocomplete_element_response_H_ */

