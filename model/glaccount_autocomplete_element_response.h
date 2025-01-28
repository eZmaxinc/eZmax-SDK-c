/*
 * glaccount_autocomplete_element_response.h
 *
 * A Glaccount AutocompleteElement Response
 */

#ifndef _glaccount_autocomplete_element_response_H_
#define _glaccount_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct glaccount_autocomplete_element_response_t glaccount_autocomplete_element_response_t;




typedef struct glaccount_autocomplete_element_response_t {
    int pki_glaccount_id; //numeric
    int i_glaccount_code; //numeric
    char *s_glaccount_description_x; // string
    int b_glaccount_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} glaccount_autocomplete_element_response_t;

__attribute__((deprecated)) glaccount_autocomplete_element_response_t *glaccount_autocomplete_element_response_create(
    int pki_glaccount_id,
    int i_glaccount_code,
    char *s_glaccount_description_x,
    int b_glaccount_isactive
);

void glaccount_autocomplete_element_response_free(glaccount_autocomplete_element_response_t *glaccount_autocomplete_element_response);

glaccount_autocomplete_element_response_t *glaccount_autocomplete_element_response_parseFromJSON(cJSON *glaccount_autocomplete_element_responseJSON);

cJSON *glaccount_autocomplete_element_response_convertToJSON(glaccount_autocomplete_element_response_t *glaccount_autocomplete_element_response);

#endif /* _glaccount_autocomplete_element_response_H_ */

