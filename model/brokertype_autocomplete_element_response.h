/*
 * brokertype_autocomplete_element_response.h
 *
 * A Brokertype AutocompleteElement Response
 */

#ifndef _brokertype_autocomplete_element_response_H_
#define _brokertype_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct brokertype_autocomplete_element_response_t brokertype_autocomplete_element_response_t;




typedef struct brokertype_autocomplete_element_response_t {
    int pki_brokertype_id; //numeric
    char *s_brokertype_name_x; // string
    int b_brokertype_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} brokertype_autocomplete_element_response_t;

__attribute__((deprecated)) brokertype_autocomplete_element_response_t *brokertype_autocomplete_element_response_create(
    int pki_brokertype_id,
    char *s_brokertype_name_x,
    int b_brokertype_isactive
);

void brokertype_autocomplete_element_response_free(brokertype_autocomplete_element_response_t *brokertype_autocomplete_element_response);

brokertype_autocomplete_element_response_t *brokertype_autocomplete_element_response_parseFromJSON(cJSON *brokertype_autocomplete_element_responseJSON);

cJSON *brokertype_autocomplete_element_response_convertToJSON(brokertype_autocomplete_element_response_t *brokertype_autocomplete_element_response);

#endif /* _brokertype_autocomplete_element_response_H_ */

