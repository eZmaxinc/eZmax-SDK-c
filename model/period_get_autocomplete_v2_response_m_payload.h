/*
 * period_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/period/getAutocomplete
 */

#ifndef _period_get_autocomplete_v2_response_m_payload_H_
#define _period_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct period_get_autocomplete_v2_response_m_payload_t period_get_autocomplete_v2_response_m_payload_t;

#include "period_autocomplete_element_response.h"



typedef struct period_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_period; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} period_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) period_get_autocomplete_v2_response_m_payload_t *period_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_period
);

void period_get_autocomplete_v2_response_m_payload_free(period_get_autocomplete_v2_response_m_payload_t *period_get_autocomplete_v2_response_m_payload);

period_get_autocomplete_v2_response_m_payload_t *period_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *period_get_autocomplete_v2_response_m_payloadJSON);

cJSON *period_get_autocomplete_v2_response_m_payload_convertToJSON(period_get_autocomplete_v2_response_m_payload_t *period_get_autocomplete_v2_response_m_payload);

#endif /* _period_get_autocomplete_v2_response_m_payload_H_ */

