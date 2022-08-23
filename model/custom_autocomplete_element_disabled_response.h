/*
 * custom_autocomplete_element_disabled_response.h
 *
 * Generic AutocompleteElement Response with a bDisabled Flag
 */

#ifndef _custom_autocomplete_element_disabled_response_H_
#define _custom_autocomplete_element_disabled_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_autocomplete_element_disabled_response_t custom_autocomplete_element_disabled_response_t;

#include "custom_autocomplete_element_disabled_response_all_of.h"
#include "custom_autocomplete_element_response.h"



typedef struct custom_autocomplete_element_disabled_response_t {
    int b_disabled; //boolean
    char *s_category; // string
    char *s_label; // string
    char *s_value; // string
    char *m_value; // string
    int b_active; //boolean

} custom_autocomplete_element_disabled_response_t;

custom_autocomplete_element_disabled_response_t *custom_autocomplete_element_disabled_response_create(
    int b_disabled,
    char *s_category,
    char *s_label,
    char *s_value,
    char *m_value,
    int b_active
);

void custom_autocomplete_element_disabled_response_free(custom_autocomplete_element_disabled_response_t *custom_autocomplete_element_disabled_response);

custom_autocomplete_element_disabled_response_t *custom_autocomplete_element_disabled_response_parseFromJSON(cJSON *custom_autocomplete_element_disabled_responseJSON);

cJSON *custom_autocomplete_element_disabled_response_convertToJSON(custom_autocomplete_element_disabled_response_t *custom_autocomplete_element_disabled_response);

#endif /* _custom_autocomplete_element_disabled_response_H_ */

