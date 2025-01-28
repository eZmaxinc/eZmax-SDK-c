/*
 * user_autocomplete_element_response.h
 *
 * A User AutocompleteElement Response
 */

#ifndef _user_autocomplete_element_response_H_
#define _user_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_autocomplete_element_response_t user_autocomplete_element_response_t;

#include "field_e_user_type.h"



typedef struct user_autocomplete_element_response_t {
    ezmax_api_definition__full_field_e_user_type__e e_user_type; //referenced enum
    char *s_user_name; // string
    int pki_user_id; //numeric
    int b_user_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} user_autocomplete_element_response_t;

__attribute__((deprecated)) user_autocomplete_element_response_t *user_autocomplete_element_response_create(
    ezmax_api_definition__full_field_e_user_type__e e_user_type,
    char *s_user_name,
    int pki_user_id,
    int b_user_isactive
);

void user_autocomplete_element_response_free(user_autocomplete_element_response_t *user_autocomplete_element_response);

user_autocomplete_element_response_t *user_autocomplete_element_response_parseFromJSON(cJSON *user_autocomplete_element_responseJSON);

cJSON *user_autocomplete_element_response_convertToJSON(user_autocomplete_element_response_t *user_autocomplete_element_response);

#endif /* _user_autocomplete_element_response_H_ */

