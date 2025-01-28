/*
 * billingentityexternal_autocomplete_element_response.h
 *
 * A Billingentityexternal AutocompleteElement Response
 */

#ifndef _billingentityexternal_autocomplete_element_response_H_
#define _billingentityexternal_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityexternal_autocomplete_element_response_t billingentityexternal_autocomplete_element_response_t;




typedef struct billingentityexternal_autocomplete_element_response_t {
    int pki_billingentityexternal_id; //numeric
    char *s_billingentityexternal_description; // string
    int b_billingentityexternal_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} billingentityexternal_autocomplete_element_response_t;

__attribute__((deprecated)) billingentityexternal_autocomplete_element_response_t *billingentityexternal_autocomplete_element_response_create(
    int pki_billingentityexternal_id,
    char *s_billingentityexternal_description,
    int b_billingentityexternal_isactive
);

void billingentityexternal_autocomplete_element_response_free(billingentityexternal_autocomplete_element_response_t *billingentityexternal_autocomplete_element_response);

billingentityexternal_autocomplete_element_response_t *billingentityexternal_autocomplete_element_response_parseFromJSON(cJSON *billingentityexternal_autocomplete_element_responseJSON);

cJSON *billingentityexternal_autocomplete_element_response_convertToJSON(billingentityexternal_autocomplete_element_response_t *billingentityexternal_autocomplete_element_response);

#endif /* _billingentityexternal_autocomplete_element_response_H_ */

