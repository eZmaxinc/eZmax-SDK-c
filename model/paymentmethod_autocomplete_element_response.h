/*
 * paymentmethod_autocomplete_element_response.h
 *
 * A Paymentmethod AutocompleteElement Response
 */

#ifndef _paymentmethod_autocomplete_element_response_H_
#define _paymentmethod_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentmethod_autocomplete_element_response_t paymentmethod_autocomplete_element_response_t;




typedef struct paymentmethod_autocomplete_element_response_t {
    int *pki_paymentmethod_id; //numeric
    char *s_paymentmethod_description_x; // string
    int *b_paymentmethod_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} paymentmethod_autocomplete_element_response_t;

__attribute__((deprecated)) paymentmethod_autocomplete_element_response_t *paymentmethod_autocomplete_element_response_create(
    int *pki_paymentmethod_id,
    char *s_paymentmethod_description_x,
    int *b_paymentmethod_isactive
);

void paymentmethod_autocomplete_element_response_free(paymentmethod_autocomplete_element_response_t *paymentmethod_autocomplete_element_response);

paymentmethod_autocomplete_element_response_t *paymentmethod_autocomplete_element_response_parseFromJSON(cJSON *paymentmethod_autocomplete_element_responseJSON);

cJSON *paymentmethod_autocomplete_element_response_convertToJSON(paymentmethod_autocomplete_element_response_t *paymentmethod_autocomplete_element_response);

#endif /* _paymentmethod_autocomplete_element_response_H_ */

