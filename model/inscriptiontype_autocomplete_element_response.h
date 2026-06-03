/*
 * inscriptiontype_autocomplete_element_response.h
 *
 * A Inscriptiontype AutocompleteElement Response
 */

#ifndef _inscriptiontype_autocomplete_element_response_H_
#define _inscriptiontype_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptiontype_autocomplete_element_response_t inscriptiontype_autocomplete_element_response_t;




typedef struct inscriptiontype_autocomplete_element_response_t {
    int *pki_inscriptiontype_id; //numeric
    char *s_inscriptiontype_name_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptiontype_autocomplete_element_response_t;

__attribute__((deprecated)) inscriptiontype_autocomplete_element_response_t *inscriptiontype_autocomplete_element_response_create(
    int *pki_inscriptiontype_id,
    char *s_inscriptiontype_name_x
);

void inscriptiontype_autocomplete_element_response_free(inscriptiontype_autocomplete_element_response_t *inscriptiontype_autocomplete_element_response);

inscriptiontype_autocomplete_element_response_t *inscriptiontype_autocomplete_element_response_parseFromJSON(cJSON *inscriptiontype_autocomplete_element_responseJSON);

cJSON *inscriptiontype_autocomplete_element_response_convertToJSON(inscriptiontype_autocomplete_element_response_t *inscriptiontype_autocomplete_element_response);

#endif /* _inscriptiontype_autocomplete_element_response_H_ */

