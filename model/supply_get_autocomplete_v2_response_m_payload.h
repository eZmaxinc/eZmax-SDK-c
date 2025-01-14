/*
 * supply_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/supply/getAutocomplete
 */

#ifndef _supply_get_autocomplete_v2_response_m_payload_H_
#define _supply_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supply_get_autocomplete_v2_response_m_payload_t supply_get_autocomplete_v2_response_m_payload_t;

#include "supply_autocomplete_element_response.h"



typedef struct supply_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_supply; //nonprimitive container

} supply_get_autocomplete_v2_response_m_payload_t;

supply_get_autocomplete_v2_response_m_payload_t *supply_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_supply
);

void supply_get_autocomplete_v2_response_m_payload_free(supply_get_autocomplete_v2_response_m_payload_t *supply_get_autocomplete_v2_response_m_payload);

supply_get_autocomplete_v2_response_m_payload_t *supply_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *supply_get_autocomplete_v2_response_m_payloadJSON);

cJSON *supply_get_autocomplete_v2_response_m_payload_convertToJSON(supply_get_autocomplete_v2_response_m_payload_t *supply_get_autocomplete_v2_response_m_payload);

#endif /* _supply_get_autocomplete_v2_response_m_payload_H_ */

