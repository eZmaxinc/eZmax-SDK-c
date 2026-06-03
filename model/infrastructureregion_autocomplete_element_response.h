/*
 * infrastructureregion_autocomplete_element_response.h
 *
 * A Infrastructureregion AutocompleteElement Response
 */

#ifndef _infrastructureregion_autocomplete_element_response_H_
#define _infrastructureregion_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct infrastructureregion_autocomplete_element_response_t infrastructureregion_autocomplete_element_response_t;




typedef struct infrastructureregion_autocomplete_element_response_t {
    int *pki_infrastructureregion_id; //numeric
    char *s_infrastructureregion_code; // string
    int *b_infrastructureregion_programmer; //boolean
    int *b_infrastructureregion_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} infrastructureregion_autocomplete_element_response_t;

__attribute__((deprecated)) infrastructureregion_autocomplete_element_response_t *infrastructureregion_autocomplete_element_response_create(
    int *pki_infrastructureregion_id,
    char *s_infrastructureregion_code,
    int *b_infrastructureregion_programmer,
    int *b_infrastructureregion_isactive
);

void infrastructureregion_autocomplete_element_response_free(infrastructureregion_autocomplete_element_response_t *infrastructureregion_autocomplete_element_response);

infrastructureregion_autocomplete_element_response_t *infrastructureregion_autocomplete_element_response_parseFromJSON(cJSON *infrastructureregion_autocomplete_element_responseJSON);

cJSON *infrastructureregion_autocomplete_element_response_convertToJSON(infrastructureregion_autocomplete_element_response_t *infrastructureregion_autocomplete_element_response);

#endif /* _infrastructureregion_autocomplete_element_response_H_ */

