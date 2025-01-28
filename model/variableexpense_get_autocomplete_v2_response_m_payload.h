/*
 * variableexpense_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/variableexpense/getAutocomplete
 */

#ifndef _variableexpense_get_autocomplete_v2_response_m_payload_H_
#define _variableexpense_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variableexpense_get_autocomplete_v2_response_m_payload_t variableexpense_get_autocomplete_v2_response_m_payload_t;

#include "variableexpense_autocomplete_element_response.h"



typedef struct variableexpense_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_variableexpense; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} variableexpense_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) variableexpense_get_autocomplete_v2_response_m_payload_t *variableexpense_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_variableexpense
);

void variableexpense_get_autocomplete_v2_response_m_payload_free(variableexpense_get_autocomplete_v2_response_m_payload_t *variableexpense_get_autocomplete_v2_response_m_payload);

variableexpense_get_autocomplete_v2_response_m_payload_t *variableexpense_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *variableexpense_get_autocomplete_v2_response_m_payloadJSON);

cJSON *variableexpense_get_autocomplete_v2_response_m_payload_convertToJSON(variableexpense_get_autocomplete_v2_response_m_payload_t *variableexpense_get_autocomplete_v2_response_m_payload);

#endif /* _variableexpense_get_autocomplete_v2_response_m_payload_H_ */

