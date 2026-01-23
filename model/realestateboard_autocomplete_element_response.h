/*
 * realestateboard_autocomplete_element_response.h
 *
 * A Realestateboard AutocompleteElement Response
 */

#ifndef _realestateboard_autocomplete_element_response_H_
#define _realestateboard_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct realestateboard_autocomplete_element_response_t realestateboard_autocomplete_element_response_t;




typedef struct realestateboard_autocomplete_element_response_t {
    int pki_realestateboard_id; //numeric
    char *s_province_name_x; // string
    char *s_realestateboard_name_x; // string
    int b_realestateboard_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} realestateboard_autocomplete_element_response_t;

__attribute__((deprecated)) realestateboard_autocomplete_element_response_t *realestateboard_autocomplete_element_response_create(
    int pki_realestateboard_id,
    char *s_province_name_x,
    char *s_realestateboard_name_x,
    int b_realestateboard_isactive
);

void realestateboard_autocomplete_element_response_free(realestateboard_autocomplete_element_response_t *realestateboard_autocomplete_element_response);

realestateboard_autocomplete_element_response_t *realestateboard_autocomplete_element_response_parseFromJSON(cJSON *realestateboard_autocomplete_element_responseJSON);

cJSON *realestateboard_autocomplete_element_response_convertToJSON(realestateboard_autocomplete_element_response_t *realestateboard_autocomplete_element_response);

#endif /* _realestateboard_autocomplete_element_response_H_ */

