/*
 * timezone_autocomplete_element_response.h
 *
 * A Timezone AutocompleteElement Response
 */

#ifndef _timezone_autocomplete_element_response_H_
#define _timezone_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct timezone_autocomplete_element_response_t timezone_autocomplete_element_response_t;




typedef struct timezone_autocomplete_element_response_t {
    char *s_timezone_name; // string
    int pki_timezone_id; //numeric
    int b_timezone_isactive; //boolean

} timezone_autocomplete_element_response_t;

timezone_autocomplete_element_response_t *timezone_autocomplete_element_response_create(
    char *s_timezone_name,
    int pki_timezone_id,
    int b_timezone_isactive
);

void timezone_autocomplete_element_response_free(timezone_autocomplete_element_response_t *timezone_autocomplete_element_response);

timezone_autocomplete_element_response_t *timezone_autocomplete_element_response_parseFromJSON(cJSON *timezone_autocomplete_element_responseJSON);

cJSON *timezone_autocomplete_element_response_convertToJSON(timezone_autocomplete_element_response_t *timezone_autocomplete_element_response);

#endif /* _timezone_autocomplete_element_response_H_ */

