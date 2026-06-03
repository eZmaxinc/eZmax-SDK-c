/*
 * realestateassociation_autocomplete_element_response.h
 *
 * A Realestateassociation AutocompleteElement Response
 */

#ifndef _realestateassociation_autocomplete_element_response_H_
#define _realestateassociation_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct realestateassociation_autocomplete_element_response_t realestateassociation_autocomplete_element_response_t;




typedef struct realestateassociation_autocomplete_element_response_t {
    int *pki_realestateassociation_id; //numeric
    char *s_realestateassociation_name_x; // string
    char *s_realestateassociation_acronym_x; // string
    int *b_realestateassociation_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} realestateassociation_autocomplete_element_response_t;

__attribute__((deprecated)) realestateassociation_autocomplete_element_response_t *realestateassociation_autocomplete_element_response_create(
    int *pki_realestateassociation_id,
    char *s_realestateassociation_name_x,
    char *s_realestateassociation_acronym_x,
    int *b_realestateassociation_isactive
);

void realestateassociation_autocomplete_element_response_free(realestateassociation_autocomplete_element_response_t *realestateassociation_autocomplete_element_response);

realestateassociation_autocomplete_element_response_t *realestateassociation_autocomplete_element_response_parseFromJSON(cJSON *realestateassociation_autocomplete_element_responseJSON);

cJSON *realestateassociation_autocomplete_element_response_convertToJSON(realestateassociation_autocomplete_element_response_t *realestateassociation_autocomplete_element_response);

#endif /* _realestateassociation_autocomplete_element_response_H_ */

