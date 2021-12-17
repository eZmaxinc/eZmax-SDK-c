/*
 * custom_autocomplete_element_response.h
 *
 * Generic Autocomplete Response
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
    char *m_value; // string

} custom_autocomplete_element_response_t;

custom_autocomplete_element_response_t *custom_autocomplete_element_response_create(
    char *s_category,
    char *s_label,
    char *m_value
);

void custom_autocomplete_element_response_free(custom_autocomplete_element_response_t *custom_autocomplete_element_response);

custom_autocomplete_element_response_t *custom_autocomplete_element_response_parseFromJSON(cJSON *custom_autocomplete_element_responseJSON);

cJSON *custom_autocomplete_element_response_convertToJSON(custom_autocomplete_element_response_t *custom_autocomplete_element_response);

#endif /* _custom_autocomplete_element_response_H_ */

