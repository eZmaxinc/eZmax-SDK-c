/*
 * creditcardmerchant_autocomplete_element_response.h
 *
 * A Creditcardmerchant AutocompleteElement Response
 */

#ifndef _creditcardmerchant_autocomplete_element_response_H_
#define _creditcardmerchant_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardmerchant_autocomplete_element_response_t creditcardmerchant_autocomplete_element_response_t;




typedef struct creditcardmerchant_autocomplete_element_response_t {
    int pki_creditcardmerchant_id; //numeric
    char *s_creditcardmerchant_description; // string
    int b_creditcardmerchant_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} creditcardmerchant_autocomplete_element_response_t;

__attribute__((deprecated)) creditcardmerchant_autocomplete_element_response_t *creditcardmerchant_autocomplete_element_response_create(
    int pki_creditcardmerchant_id,
    char *s_creditcardmerchant_description,
    int b_creditcardmerchant_isactive
);

void creditcardmerchant_autocomplete_element_response_free(creditcardmerchant_autocomplete_element_response_t *creditcardmerchant_autocomplete_element_response);

creditcardmerchant_autocomplete_element_response_t *creditcardmerchant_autocomplete_element_response_parseFromJSON(cJSON *creditcardmerchant_autocomplete_element_responseJSON);

cJSON *creditcardmerchant_autocomplete_element_response_convertToJSON(creditcardmerchant_autocomplete_element_response_t *creditcardmerchant_autocomplete_element_response);

#endif /* _creditcardmerchant_autocomplete_element_response_H_ */

