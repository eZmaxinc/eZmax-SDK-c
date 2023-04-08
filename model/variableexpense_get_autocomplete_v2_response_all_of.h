/*
 * variableexpense_get_autocomplete_v2_response_all_of.h
 *
 * 
 */

#ifndef _variableexpense_get_autocomplete_v2_response_all_of_H_
#define _variableexpense_get_autocomplete_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variableexpense_get_autocomplete_v2_response_all_of_t variableexpense_get_autocomplete_v2_response_all_of_t;

#include "variableexpense_get_autocomplete_v2_response_m_payload.h"



typedef struct variableexpense_get_autocomplete_v2_response_all_of_t {
    struct variableexpense_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} variableexpense_get_autocomplete_v2_response_all_of_t;

variableexpense_get_autocomplete_v2_response_all_of_t *variableexpense_get_autocomplete_v2_response_all_of_create(
    variableexpense_get_autocomplete_v2_response_m_payload_t *m_payload
);

void variableexpense_get_autocomplete_v2_response_all_of_free(variableexpense_get_autocomplete_v2_response_all_of_t *variableexpense_get_autocomplete_v2_response_all_of);

variableexpense_get_autocomplete_v2_response_all_of_t *variableexpense_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *variableexpense_get_autocomplete_v2_response_all_ofJSON);

cJSON *variableexpense_get_autocomplete_v2_response_all_of_convertToJSON(variableexpense_get_autocomplete_v2_response_all_of_t *variableexpense_get_autocomplete_v2_response_all_of);

#endif /* _variableexpense_get_autocomplete_v2_response_all_of_H_ */

