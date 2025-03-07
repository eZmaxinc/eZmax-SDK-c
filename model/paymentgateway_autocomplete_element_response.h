/*
 * paymentgateway_autocomplete_element_response.h
 *
 * A Paymentgateway AutocompleteElement Response
 */

#ifndef _paymentgateway_autocomplete_element_response_H_
#define _paymentgateway_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentgateway_autocomplete_element_response_t paymentgateway_autocomplete_element_response_t;




typedef struct paymentgateway_autocomplete_element_response_t {
    int pki_paymentgateway_id; //numeric
    char *s_paymentgateway_description_x; // string
    int b_paymentgateway_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} paymentgateway_autocomplete_element_response_t;

__attribute__((deprecated)) paymentgateway_autocomplete_element_response_t *paymentgateway_autocomplete_element_response_create(
    int pki_paymentgateway_id,
    char *s_paymentgateway_description_x,
    int b_paymentgateway_isactive
);

void paymentgateway_autocomplete_element_response_free(paymentgateway_autocomplete_element_response_t *paymentgateway_autocomplete_element_response);

paymentgateway_autocomplete_element_response_t *paymentgateway_autocomplete_element_response_parseFromJSON(cJSON *paymentgateway_autocomplete_element_responseJSON);

cJSON *paymentgateway_autocomplete_element_response_convertToJSON(paymentgateway_autocomplete_element_response_t *paymentgateway_autocomplete_element_response);

#endif /* _paymentgateway_autocomplete_element_response_H_ */

