/*
 * domain_autocomplete_element_response.h
 *
 * A Domain AutocompleteElement Response
 */

#ifndef _domain_autocomplete_element_response_H_
#define _domain_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_autocomplete_element_response_t domain_autocomplete_element_response_t;




typedef struct domain_autocomplete_element_response_t {
    int pki_domain_id; //numeric
    char *s_domain_name; // string
    int b_domain_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} domain_autocomplete_element_response_t;

__attribute__((deprecated)) domain_autocomplete_element_response_t *domain_autocomplete_element_response_create(
    int pki_domain_id,
    char *s_domain_name,
    int b_domain_isactive
);

void domain_autocomplete_element_response_free(domain_autocomplete_element_response_t *domain_autocomplete_element_response);

domain_autocomplete_element_response_t *domain_autocomplete_element_response_parseFromJSON(cJSON *domain_autocomplete_element_responseJSON);

cJSON *domain_autocomplete_element_response_convertToJSON(domain_autocomplete_element_response_t *domain_autocomplete_element_response);

#endif /* _domain_autocomplete_element_response_H_ */

