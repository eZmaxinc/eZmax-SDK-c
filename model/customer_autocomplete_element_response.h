/*
 * customer_autocomplete_element_response.h
 *
 * A Customer AutocompleteElement Response
 */

#ifndef _customer_autocomplete_element_response_H_
#define _customer_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_autocomplete_element_response_t customer_autocomplete_element_response_t;




typedef struct customer_autocomplete_element_response_t {
    int pki_customer_id; //numeric
    char *s_customer_name; // string
    int b_customer_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} customer_autocomplete_element_response_t;

__attribute__((deprecated)) customer_autocomplete_element_response_t *customer_autocomplete_element_response_create(
    int pki_customer_id,
    char *s_customer_name,
    int b_customer_isactive
);

void customer_autocomplete_element_response_free(customer_autocomplete_element_response_t *customer_autocomplete_element_response);

customer_autocomplete_element_response_t *customer_autocomplete_element_response_parseFromJSON(cJSON *customer_autocomplete_element_responseJSON);

cJSON *customer_autocomplete_element_response_convertToJSON(customer_autocomplete_element_response_t *customer_autocomplete_element_response);

#endif /* _customer_autocomplete_element_response_H_ */

