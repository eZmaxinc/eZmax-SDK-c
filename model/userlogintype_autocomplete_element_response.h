/*
 * userlogintype_autocomplete_element_response.h
 *
 * A Userlogintype AutocompleteElement Response
 */

#ifndef _userlogintype_autocomplete_element_response_H_
#define _userlogintype_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct userlogintype_autocomplete_element_response_t userlogintype_autocomplete_element_response_t;




typedef struct userlogintype_autocomplete_element_response_t {
    int pki_userlogintype_id; //numeric
    char *s_userlogintype_description_x; // string
    int b_userlogintype_isactive; //boolean

} userlogintype_autocomplete_element_response_t;

userlogintype_autocomplete_element_response_t *userlogintype_autocomplete_element_response_create(
    int pki_userlogintype_id,
    char *s_userlogintype_description_x,
    int b_userlogintype_isactive
);

void userlogintype_autocomplete_element_response_free(userlogintype_autocomplete_element_response_t *userlogintype_autocomplete_element_response);

userlogintype_autocomplete_element_response_t *userlogintype_autocomplete_element_response_parseFromJSON(cJSON *userlogintype_autocomplete_element_responseJSON);

cJSON *userlogintype_autocomplete_element_response_convertToJSON(userlogintype_autocomplete_element_response_t *userlogintype_autocomplete_element_response);

#endif /* _userlogintype_autocomplete_element_response_H_ */

