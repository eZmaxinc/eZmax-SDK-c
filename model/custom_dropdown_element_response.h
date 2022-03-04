/*
 * custom_dropdown_element_response.h
 *
 * Generic DropdownElement Response
 */

#ifndef _custom_dropdown_element_response_H_
#define _custom_dropdown_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_dropdown_element_response_t custom_dropdown_element_response_t;




typedef struct custom_dropdown_element_response_t {
    char *s_label; // string
    char *s_value; // string

} custom_dropdown_element_response_t;

custom_dropdown_element_response_t *custom_dropdown_element_response_create(
    char *s_label,
    char *s_value
);

void custom_dropdown_element_response_free(custom_dropdown_element_response_t *custom_dropdown_element_response);

custom_dropdown_element_response_t *custom_dropdown_element_response_parseFromJSON(cJSON *custom_dropdown_element_responseJSON);

cJSON *custom_dropdown_element_response_convertToJSON(custom_dropdown_element_response_t *custom_dropdown_element_response);

#endif /* _custom_dropdown_element_response_H_ */

