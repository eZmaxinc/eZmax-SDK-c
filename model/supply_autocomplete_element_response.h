/*
 * supply_autocomplete_element_response.h
 *
 * A Supply AutocompleteElement Response
 */

#ifndef _supply_autocomplete_element_response_H_
#define _supply_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supply_autocomplete_element_response_t supply_autocomplete_element_response_t;




typedef struct supply_autocomplete_element_response_t {
    int pki_supply_id; //numeric
    char *s_supply_description_x; // string
    int b_supply_isactive; //boolean

} supply_autocomplete_element_response_t;

supply_autocomplete_element_response_t *supply_autocomplete_element_response_create(
    int pki_supply_id,
    char *s_supply_description_x,
    int b_supply_isactive
);

void supply_autocomplete_element_response_free(supply_autocomplete_element_response_t *supply_autocomplete_element_response);

supply_autocomplete_element_response_t *supply_autocomplete_element_response_parseFromJSON(cJSON *supply_autocomplete_element_responseJSON);

cJSON *supply_autocomplete_element_response_convertToJSON(supply_autocomplete_element_response_t *supply_autocomplete_element_response);

#endif /* _supply_autocomplete_element_response_H_ */

