/*
 * custom_autocomplete_element_disabled_response_all_of.h
 *
 * 
 */

#ifndef _custom_autocomplete_element_disabled_response_all_of_H_
#define _custom_autocomplete_element_disabled_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_autocomplete_element_disabled_response_all_of_t custom_autocomplete_element_disabled_response_all_of_t;




typedef struct custom_autocomplete_element_disabled_response_all_of_t {
    int b_disabled; //boolean

} custom_autocomplete_element_disabled_response_all_of_t;

custom_autocomplete_element_disabled_response_all_of_t *custom_autocomplete_element_disabled_response_all_of_create(
    int b_disabled
);

void custom_autocomplete_element_disabled_response_all_of_free(custom_autocomplete_element_disabled_response_all_of_t *custom_autocomplete_element_disabled_response_all_of);

custom_autocomplete_element_disabled_response_all_of_t *custom_autocomplete_element_disabled_response_all_of_parseFromJSON(cJSON *custom_autocomplete_element_disabled_response_all_ofJSON);

cJSON *custom_autocomplete_element_disabled_response_all_of_convertToJSON(custom_autocomplete_element_disabled_response_all_of_t *custom_autocomplete_element_disabled_response_all_of);

#endif /* _custom_autocomplete_element_disabled_response_all_of_H_ */

