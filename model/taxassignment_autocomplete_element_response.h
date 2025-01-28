/*
 * taxassignment_autocomplete_element_response.h
 *
 * A Taxassignment AutocompleteElement Response
 */

#ifndef _taxassignment_autocomplete_element_response_H_
#define _taxassignment_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct taxassignment_autocomplete_element_response_t taxassignment_autocomplete_element_response_t;




typedef struct taxassignment_autocomplete_element_response_t {
    char *s_taxassignment_description_x; // string
    int pki_taxassignment_id; //numeric
    int b_taxassignment_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} taxassignment_autocomplete_element_response_t;

__attribute__((deprecated)) taxassignment_autocomplete_element_response_t *taxassignment_autocomplete_element_response_create(
    char *s_taxassignment_description_x,
    int pki_taxassignment_id,
    int b_taxassignment_isactive
);

void taxassignment_autocomplete_element_response_free(taxassignment_autocomplete_element_response_t *taxassignment_autocomplete_element_response);

taxassignment_autocomplete_element_response_t *taxassignment_autocomplete_element_response_parseFromJSON(cJSON *taxassignment_autocomplete_element_responseJSON);

cJSON *taxassignment_autocomplete_element_response_convertToJSON(taxassignment_autocomplete_element_response_t *taxassignment_autocomplete_element_response);

#endif /* _taxassignment_autocomplete_element_response_H_ */

