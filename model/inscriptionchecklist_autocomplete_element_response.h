/*
 * inscriptionchecklist_autocomplete_element_response.h
 *
 * A Inscriptionchecklist AutocompleteElement Response
 */

#ifndef _inscriptionchecklist_autocomplete_element_response_H_
#define _inscriptionchecklist_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptionchecklist_autocomplete_element_response_t inscriptionchecklist_autocomplete_element_response_t;




typedef struct inscriptionchecklist_autocomplete_element_response_t {
    int pki_inscriptionchecklist_id; //numeric
    char *s_inscriptionchecklistelement_name_x; // string
    int b_inscriptionchecklist_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptionchecklist_autocomplete_element_response_t;

__attribute__((deprecated)) inscriptionchecklist_autocomplete_element_response_t *inscriptionchecklist_autocomplete_element_response_create(
    int pki_inscriptionchecklist_id,
    char *s_inscriptionchecklistelement_name_x,
    int b_inscriptionchecklist_isactive
);

void inscriptionchecklist_autocomplete_element_response_free(inscriptionchecklist_autocomplete_element_response_t *inscriptionchecklist_autocomplete_element_response);

inscriptionchecklist_autocomplete_element_response_t *inscriptionchecklist_autocomplete_element_response_parseFromJSON(cJSON *inscriptionchecklist_autocomplete_element_responseJSON);

cJSON *inscriptionchecklist_autocomplete_element_response_convertToJSON(inscriptionchecklist_autocomplete_element_response_t *inscriptionchecklist_autocomplete_element_response);

#endif /* _inscriptionchecklist_autocomplete_element_response_H_ */

