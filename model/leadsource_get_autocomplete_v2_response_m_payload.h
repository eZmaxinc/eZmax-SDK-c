/*
 * leadsource_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/leadsource/getAutocomplete
 */

#ifndef _leadsource_get_autocomplete_v2_response_m_payload_H_
#define _leadsource_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct leadsource_get_autocomplete_v2_response_m_payload_t leadsource_get_autocomplete_v2_response_m_payload_t;

#include "leadsource_autocomplete_element_response.h"



typedef struct leadsource_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_leadsource; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} leadsource_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) leadsource_get_autocomplete_v2_response_m_payload_t *leadsource_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_leadsource
);

void leadsource_get_autocomplete_v2_response_m_payload_free(leadsource_get_autocomplete_v2_response_m_payload_t *leadsource_get_autocomplete_v2_response_m_payload);

leadsource_get_autocomplete_v2_response_m_payload_t *leadsource_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *leadsource_get_autocomplete_v2_response_m_payloadJSON);

cJSON *leadsource_get_autocomplete_v2_response_m_payload_convertToJSON(leadsource_get_autocomplete_v2_response_m_payload_t *leadsource_get_autocomplete_v2_response_m_payload);

#endif /* _leadsource_get_autocomplete_v2_response_m_payload_H_ */

