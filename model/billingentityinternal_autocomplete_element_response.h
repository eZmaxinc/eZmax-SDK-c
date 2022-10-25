/*
 * billingentityinternal_autocomplete_element_response.h
 *
 * A Billingentityinternal AutocompleteElement Response
 */

#ifndef _billingentityinternal_autocomplete_element_response_H_
#define _billingentityinternal_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternal_autocomplete_element_response_t billingentityinternal_autocomplete_element_response_t;




typedef struct billingentityinternal_autocomplete_element_response_t {
    char *s_billingentityinternal_description_x; // string
    int pki_billingentityinternal_id; //numeric
    int b_billingentityinternal_isactive; //boolean

} billingentityinternal_autocomplete_element_response_t;

billingentityinternal_autocomplete_element_response_t *billingentityinternal_autocomplete_element_response_create(
    char *s_billingentityinternal_description_x,
    int pki_billingentityinternal_id,
    int b_billingentityinternal_isactive
);

void billingentityinternal_autocomplete_element_response_free(billingentityinternal_autocomplete_element_response_t *billingentityinternal_autocomplete_element_response);

billingentityinternal_autocomplete_element_response_t *billingentityinternal_autocomplete_element_response_parseFromJSON(cJSON *billingentityinternal_autocomplete_element_responseJSON);

cJSON *billingentityinternal_autocomplete_element_response_convertToJSON(billingentityinternal_autocomplete_element_response_t *billingentityinternal_autocomplete_element_response);

#endif /* _billingentityinternal_autocomplete_element_response_H_ */

