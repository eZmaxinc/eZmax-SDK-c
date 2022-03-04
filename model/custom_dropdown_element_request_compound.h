/*
 * custom_dropdown_element_request_compound.h
 *
 * A Generic DropdownElement Object and children to create a complete structure
 */

#ifndef _custom_dropdown_element_request_compound_H_
#define _custom_dropdown_element_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_dropdown_element_request_compound_t custom_dropdown_element_request_compound_t;

#include "custom_dropdown_element_request.h"



typedef struct custom_dropdown_element_request_compound_t {
    char *s_label; // string
    char *s_value; // string

} custom_dropdown_element_request_compound_t;

custom_dropdown_element_request_compound_t *custom_dropdown_element_request_compound_create(
    char *s_label,
    char *s_value
);

void custom_dropdown_element_request_compound_free(custom_dropdown_element_request_compound_t *custom_dropdown_element_request_compound);

custom_dropdown_element_request_compound_t *custom_dropdown_element_request_compound_parseFromJSON(cJSON *custom_dropdown_element_request_compoundJSON);

cJSON *custom_dropdown_element_request_compound_convertToJSON(custom_dropdown_element_request_compound_t *custom_dropdown_element_request_compound);

#endif /* _custom_dropdown_element_request_compound_H_ */

