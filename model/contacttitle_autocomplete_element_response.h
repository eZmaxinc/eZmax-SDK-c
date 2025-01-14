/*
 * contacttitle_autocomplete_element_response.h
 *
 * A Contacttitle AutocompleteElement Response
 */

#ifndef _contacttitle_autocomplete_element_response_H_
#define _contacttitle_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contacttitle_autocomplete_element_response_t contacttitle_autocomplete_element_response_t;




typedef struct contacttitle_autocomplete_element_response_t {
    int pki_contacttitle_id; //numeric
    char *s_contacttitle_name_x; // string

} contacttitle_autocomplete_element_response_t;

contacttitle_autocomplete_element_response_t *contacttitle_autocomplete_element_response_create(
    int pki_contacttitle_id,
    char *s_contacttitle_name_x
);

void contacttitle_autocomplete_element_response_free(contacttitle_autocomplete_element_response_t *contacttitle_autocomplete_element_response);

contacttitle_autocomplete_element_response_t *contacttitle_autocomplete_element_response_parseFromJSON(cJSON *contacttitle_autocomplete_element_responseJSON);

cJSON *contacttitle_autocomplete_element_response_convertToJSON(contacttitle_autocomplete_element_response_t *contacttitle_autocomplete_element_response);

#endif /* _contacttitle_autocomplete_element_response_H_ */

