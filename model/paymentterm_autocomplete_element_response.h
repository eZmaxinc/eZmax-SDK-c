/*
 * paymentterm_autocomplete_element_response.h
 *
 * A Paymentterm AutocompleteElement Response
 */

#ifndef _paymentterm_autocomplete_element_response_H_
#define _paymentterm_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentterm_autocomplete_element_response_t paymentterm_autocomplete_element_response_t;




typedef struct paymentterm_autocomplete_element_response_t {
    int pki_paymentterm_id; //numeric
    char *s_paymentterm_description_x; // string
    int b_paymentterm_isactive; //boolean

} paymentterm_autocomplete_element_response_t;

paymentterm_autocomplete_element_response_t *paymentterm_autocomplete_element_response_create(
    int pki_paymentterm_id,
    char *s_paymentterm_description_x,
    int b_paymentterm_isactive
);

void paymentterm_autocomplete_element_response_free(paymentterm_autocomplete_element_response_t *paymentterm_autocomplete_element_response);

paymentterm_autocomplete_element_response_t *paymentterm_autocomplete_element_response_parseFromJSON(cJSON *paymentterm_autocomplete_element_responseJSON);

cJSON *paymentterm_autocomplete_element_response_convertToJSON(paymentterm_autocomplete_element_response_t *paymentterm_autocomplete_element_response);

#endif /* _paymentterm_autocomplete_element_response_H_ */

