/*
 * usergroup_autocomplete_element_response.h
 *
 * A Usergroup AutocompleteElement Response
 */

#ifndef _usergroup_autocomplete_element_response_H_
#define _usergroup_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_autocomplete_element_response_t usergroup_autocomplete_element_response_t;




typedef struct usergroup_autocomplete_element_response_t {
    char *s_usergroup_name_x; // string
    int pki_usergroup_id; //numeric
    int b_usergroup_isactive; //boolean

} usergroup_autocomplete_element_response_t;

usergroup_autocomplete_element_response_t *usergroup_autocomplete_element_response_create(
    char *s_usergroup_name_x,
    int pki_usergroup_id,
    int b_usergroup_isactive
);

void usergroup_autocomplete_element_response_free(usergroup_autocomplete_element_response_t *usergroup_autocomplete_element_response);

usergroup_autocomplete_element_response_t *usergroup_autocomplete_element_response_parseFromJSON(cJSON *usergroup_autocomplete_element_responseJSON);

cJSON *usergroup_autocomplete_element_response_convertToJSON(usergroup_autocomplete_element_response_t *usergroup_autocomplete_element_response);

#endif /* _usergroup_autocomplete_element_response_H_ */

