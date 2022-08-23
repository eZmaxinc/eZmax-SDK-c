/*
 * custom_autocomplete_element_response.h
 *
 * Generic AutocompleteElement Response
 */

#ifndef _custom_autocomplete_element_response_H_
#define _custom_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_autocomplete_element_response_t custom_autocomplete_element_response_t;




typedef struct custom_autocomplete_element_response_t {
    char *s_category; // string
    char *s_label; // string
    char *s_value; // string
    char *m_value; // string
    int b_active; //boolean

} custom_autocomplete_element_response_t;

custom_autocomplete_element_response_t *custom_autocomplete_element_response_create(
    char *s_category,
    char *s_label,
    char *s_value,
    char *m_value,
    int b_active
);

void custom_autocomplete_element_response_free(custom_autocomplete_element_response_t *custom_autocomplete_element_response);

custom_autocomplete_element_response_t *custom_autocomplete_element_response_parseFromJSON(cJSON *custom_autocomplete_element_responseJSON);

cJSON *custom_autocomplete_element_response_convertToJSON(custom_autocomplete_element_response_t *custom_autocomplete_element_response);

#endif /* _custom_autocomplete_element_response_H_ */

