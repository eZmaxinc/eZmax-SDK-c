/*
 * period_autocomplete_element_response.h
 *
 * A Period AutocompleteElement Response
 */

#ifndef _period_autocomplete_element_response_H_
#define _period_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct period_autocomplete_element_response_t period_autocomplete_element_response_t;




typedef struct period_autocomplete_element_response_t {
    char *s_period_yyyymm; // string
    int pki_period_id; //numeric
    int b_period_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} period_autocomplete_element_response_t;

__attribute__((deprecated)) period_autocomplete_element_response_t *period_autocomplete_element_response_create(
    char *s_period_yyyymm,
    int pki_period_id,
    int b_period_isactive
);

void period_autocomplete_element_response_free(period_autocomplete_element_response_t *period_autocomplete_element_response);

period_autocomplete_element_response_t *period_autocomplete_element_response_parseFromJSON(cJSON *period_autocomplete_element_responseJSON);

cJSON *period_autocomplete_element_response_convertToJSON(period_autocomplete_element_response_t *period_autocomplete_element_response);

#endif /* _period_autocomplete_element_response_H_ */

