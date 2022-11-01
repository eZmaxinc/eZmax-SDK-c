/*
 * franchisebroker_autocomplete_element_response.h
 *
 * A Franchisebroker AutocompleteElement Response
 */

#ifndef _franchisebroker_autocomplete_element_response_H_
#define _franchisebroker_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct franchisebroker_autocomplete_element_response_t franchisebroker_autocomplete_element_response_t;




typedef struct franchisebroker_autocomplete_element_response_t {
    char *s_franchisebroker_name; // string
    int pki_franchisebroker_id; //numeric
    int b_franchisebroker_isactive; //boolean

} franchisebroker_autocomplete_element_response_t;

franchisebroker_autocomplete_element_response_t *franchisebroker_autocomplete_element_response_create(
    char *s_franchisebroker_name,
    int pki_franchisebroker_id,
    int b_franchisebroker_isactive
);

void franchisebroker_autocomplete_element_response_free(franchisebroker_autocomplete_element_response_t *franchisebroker_autocomplete_element_response);

franchisebroker_autocomplete_element_response_t *franchisebroker_autocomplete_element_response_parseFromJSON(cJSON *franchisebroker_autocomplete_element_responseJSON);

cJSON *franchisebroker_autocomplete_element_response_convertToJSON(franchisebroker_autocomplete_element_response_t *franchisebroker_autocomplete_element_response);

#endif /* _franchisebroker_autocomplete_element_response_H_ */

