/*
 * bankaccount_autocomplete_element_response.h
 *
 * A Bankaccount AutocompleteElement Response
 */

#ifndef _bankaccount_autocomplete_element_response_H_
#define _bankaccount_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bankaccount_autocomplete_element_response_t bankaccount_autocomplete_element_response_t;




typedef struct bankaccount_autocomplete_element_response_t {
    int pki_bankaccount_id; //numeric
    char *s_bankaccount_bankname; // string
    int b_bankaccount_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} bankaccount_autocomplete_element_response_t;

__attribute__((deprecated)) bankaccount_autocomplete_element_response_t *bankaccount_autocomplete_element_response_create(
    int pki_bankaccount_id,
    char *s_bankaccount_bankname,
    int b_bankaccount_isactive
);

void bankaccount_autocomplete_element_response_free(bankaccount_autocomplete_element_response_t *bankaccount_autocomplete_element_response);

bankaccount_autocomplete_element_response_t *bankaccount_autocomplete_element_response_parseFromJSON(cJSON *bankaccount_autocomplete_element_responseJSON);

cJSON *bankaccount_autocomplete_element_response_convertToJSON(bankaccount_autocomplete_element_response_t *bankaccount_autocomplete_element_response);

#endif /* _bankaccount_autocomplete_element_response_H_ */

