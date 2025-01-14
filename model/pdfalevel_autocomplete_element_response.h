/*
 * pdfalevel_autocomplete_element_response.h
 *
 * A Pdfalevel AutocompleteElement Response
 */

#ifndef _pdfalevel_autocomplete_element_response_H_
#define _pdfalevel_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct pdfalevel_autocomplete_element_response_t pdfalevel_autocomplete_element_response_t;




typedef struct pdfalevel_autocomplete_element_response_t {
    int pki_pdfalevel_id; //numeric
    char *s_pdfalevel_name; // string
    int b_pdfalevel_isactive; //boolean

} pdfalevel_autocomplete_element_response_t;

pdfalevel_autocomplete_element_response_t *pdfalevel_autocomplete_element_response_create(
    int pki_pdfalevel_id,
    char *s_pdfalevel_name,
    int b_pdfalevel_isactive
);

void pdfalevel_autocomplete_element_response_free(pdfalevel_autocomplete_element_response_t *pdfalevel_autocomplete_element_response);

pdfalevel_autocomplete_element_response_t *pdfalevel_autocomplete_element_response_parseFromJSON(cJSON *pdfalevel_autocomplete_element_responseJSON);

cJSON *pdfalevel_autocomplete_element_response_convertToJSON(pdfalevel_autocomplete_element_response_t *pdfalevel_autocomplete_element_response);

#endif /* _pdfalevel_autocomplete_element_response_H_ */

