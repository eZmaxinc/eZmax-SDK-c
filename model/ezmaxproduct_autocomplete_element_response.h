/*
 * ezmaxproduct_autocomplete_element_response.h
 *
 * A Ezmaxproduct AutocompleteElement Response
 */

#ifndef _ezmaxproduct_autocomplete_element_response_H_
#define _ezmaxproduct_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxproduct_autocomplete_element_response_t ezmaxproduct_autocomplete_element_response_t;




typedef struct ezmaxproduct_autocomplete_element_response_t {
    int pki_ezmaxproduct_id; //numeric
    char *s_ezmaxproduct_description_x; // string
    int b_ezmaxproduct_isactive; //boolean

} ezmaxproduct_autocomplete_element_response_t;

ezmaxproduct_autocomplete_element_response_t *ezmaxproduct_autocomplete_element_response_create(
    int pki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    int b_ezmaxproduct_isactive
);

void ezmaxproduct_autocomplete_element_response_free(ezmaxproduct_autocomplete_element_response_t *ezmaxproduct_autocomplete_element_response);

ezmaxproduct_autocomplete_element_response_t *ezmaxproduct_autocomplete_element_response_parseFromJSON(cJSON *ezmaxproduct_autocomplete_element_responseJSON);

cJSON *ezmaxproduct_autocomplete_element_response_convertToJSON(ezmaxproduct_autocomplete_element_response_t *ezmaxproduct_autocomplete_element_response);

#endif /* _ezmaxproduct_autocomplete_element_response_H_ */

