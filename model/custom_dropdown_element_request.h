/*
 * custom_dropdown_element_request.h
 *
 * Generic DropdownElement Request
 */

#ifndef _custom_dropdown_element_request_H_
#define _custom_dropdown_element_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_dropdown_element_request_t custom_dropdown_element_request_t;




typedef struct custom_dropdown_element_request_t {
    char *s_label; // string
    char *s_value; // string

    int _library_owned; // Is the library responsible for freeing this object?
} custom_dropdown_element_request_t;

__attribute__((deprecated)) custom_dropdown_element_request_t *custom_dropdown_element_request_create(
    char *s_label,
    char *s_value
);

void custom_dropdown_element_request_free(custom_dropdown_element_request_t *custom_dropdown_element_request);

custom_dropdown_element_request_t *custom_dropdown_element_request_parseFromJSON(cJSON *custom_dropdown_element_requestJSON);

cJSON *custom_dropdown_element_request_convertToJSON(custom_dropdown_element_request_t *custom_dropdown_element_request);

#endif /* _custom_dropdown_element_request_H_ */

