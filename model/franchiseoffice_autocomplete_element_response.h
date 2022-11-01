/*
 * franchiseoffice_autocomplete_element_response.h
 *
 * A Franchiseoffice AutocompleteElement Response
 */

#ifndef _franchiseoffice_autocomplete_element_response_H_
#define _franchiseoffice_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct franchiseoffice_autocomplete_element_response_t franchiseoffice_autocomplete_element_response_t;




typedef struct franchiseoffice_autocomplete_element_response_t {
    char *s_franchiseoffice_description; // string
    int pki_franchiseoffice_id; //numeric
    int b_franchiseoffice_isactive; //boolean

} franchiseoffice_autocomplete_element_response_t;

franchiseoffice_autocomplete_element_response_t *franchiseoffice_autocomplete_element_response_create(
    char *s_franchiseoffice_description,
    int pki_franchiseoffice_id,
    int b_franchiseoffice_isactive
);

void franchiseoffice_autocomplete_element_response_free(franchiseoffice_autocomplete_element_response_t *franchiseoffice_autocomplete_element_response);

franchiseoffice_autocomplete_element_response_t *franchiseoffice_autocomplete_element_response_parseFromJSON(cJSON *franchiseoffice_autocomplete_element_responseJSON);

cJSON *franchiseoffice_autocomplete_element_response_convertToJSON(franchiseoffice_autocomplete_element_response_t *franchiseoffice_autocomplete_element_response);

#endif /* _franchiseoffice_autocomplete_element_response_H_ */

