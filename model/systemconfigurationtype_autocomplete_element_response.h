/*
 * systemconfigurationtype_autocomplete_element_response.h
 *
 * A Systemconfigurationtype AutocompleteElement Response
 */

#ifndef _systemconfigurationtype_autocomplete_element_response_H_
#define _systemconfigurationtype_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct systemconfigurationtype_autocomplete_element_response_t systemconfigurationtype_autocomplete_element_response_t;




typedef struct systemconfigurationtype_autocomplete_element_response_t {
    int pki_systemconfigurationtype_id; //numeric
    char *s_systemconfigurationtype_description_x; // string
    int b_systemconfigurationtype_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} systemconfigurationtype_autocomplete_element_response_t;

__attribute__((deprecated)) systemconfigurationtype_autocomplete_element_response_t *systemconfigurationtype_autocomplete_element_response_create(
    int pki_systemconfigurationtype_id,
    char *s_systemconfigurationtype_description_x,
    int b_systemconfigurationtype_isactive
);

void systemconfigurationtype_autocomplete_element_response_free(systemconfigurationtype_autocomplete_element_response_t *systemconfigurationtype_autocomplete_element_response);

systemconfigurationtype_autocomplete_element_response_t *systemconfigurationtype_autocomplete_element_response_parseFromJSON(cJSON *systemconfigurationtype_autocomplete_element_responseJSON);

cJSON *systemconfigurationtype_autocomplete_element_response_convertToJSON(systemconfigurationtype_autocomplete_element_response_t *systemconfigurationtype_autocomplete_element_response);

#endif /* _systemconfigurationtype_autocomplete_element_response_H_ */

