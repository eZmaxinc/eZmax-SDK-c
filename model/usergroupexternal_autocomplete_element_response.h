/*
 * usergroupexternal_autocomplete_element_response.h
 *
 * A Usergroupexternal AutocompleteElement Response
 */

#ifndef _usergroupexternal_autocomplete_element_response_H_
#define _usergroupexternal_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupexternal_autocomplete_element_response_t usergroupexternal_autocomplete_element_response_t;




typedef struct usergroupexternal_autocomplete_element_response_t {
    int pki_usergroupexternal_id; //numeric
    char *s_usergroupexternal_name; // string
    int b_usergroupexternal_isactive; //boolean

} usergroupexternal_autocomplete_element_response_t;

usergroupexternal_autocomplete_element_response_t *usergroupexternal_autocomplete_element_response_create(
    int pki_usergroupexternal_id,
    char *s_usergroupexternal_name,
    int b_usergroupexternal_isactive
);

void usergroupexternal_autocomplete_element_response_free(usergroupexternal_autocomplete_element_response_t *usergroupexternal_autocomplete_element_response);

usergroupexternal_autocomplete_element_response_t *usergroupexternal_autocomplete_element_response_parseFromJSON(cJSON *usergroupexternal_autocomplete_element_responseJSON);

cJSON *usergroupexternal_autocomplete_element_response_convertToJSON(usergroupexternal_autocomplete_element_response_t *usergroupexternal_autocomplete_element_response);

#endif /* _usergroupexternal_autocomplete_element_response_H_ */

