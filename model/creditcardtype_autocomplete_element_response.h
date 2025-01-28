/*
 * creditcardtype_autocomplete_element_response.h
 *
 * Creditcardtype AutocompleteElement Response
 */

#ifndef _creditcardtype_autocomplete_element_response_H_
#define _creditcardtype_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardtype_autocomplete_element_response_t creditcardtype_autocomplete_element_response_t;

#include "field_e_creditcardtype_codename.h"



typedef struct creditcardtype_autocomplete_element_response_t {
    char *s_creditcardtype_name; // string
    int pki_creditcardtype_id; //numeric
    ezmax_api_definition__full_field_e_creditcardtype_codename__e e_creditcardtype_codename; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} creditcardtype_autocomplete_element_response_t;

__attribute__((deprecated)) creditcardtype_autocomplete_element_response_t *creditcardtype_autocomplete_element_response_create(
    char *s_creditcardtype_name,
    int pki_creditcardtype_id,
    ezmax_api_definition__full_field_e_creditcardtype_codename__e e_creditcardtype_codename
);

void creditcardtype_autocomplete_element_response_free(creditcardtype_autocomplete_element_response_t *creditcardtype_autocomplete_element_response);

creditcardtype_autocomplete_element_response_t *creditcardtype_autocomplete_element_response_parseFromJSON(cJSON *creditcardtype_autocomplete_element_responseJSON);

cJSON *creditcardtype_autocomplete_element_response_convertToJSON(creditcardtype_autocomplete_element_response_t *creditcardtype_autocomplete_element_response);

#endif /* _creditcardtype_autocomplete_element_response_H_ */

