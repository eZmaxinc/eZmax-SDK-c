/*
 * country_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/country/getAutocomplete
 */

#ifndef _country_get_autocomplete_v2_response_m_payload_H_
#define _country_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct country_get_autocomplete_v2_response_m_payload_t country_get_autocomplete_v2_response_m_payload_t;

#include "country_autocomplete_element_response.h"



typedef struct country_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_country; //nonprimitive container

} country_get_autocomplete_v2_response_m_payload_t;

country_get_autocomplete_v2_response_m_payload_t *country_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_country
);

void country_get_autocomplete_v2_response_m_payload_free(country_get_autocomplete_v2_response_m_payload_t *country_get_autocomplete_v2_response_m_payload);

country_get_autocomplete_v2_response_m_payload_t *country_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *country_get_autocomplete_v2_response_m_payloadJSON);

cJSON *country_get_autocomplete_v2_response_m_payload_convertToJSON(country_get_autocomplete_v2_response_m_payload_t *country_get_autocomplete_v2_response_m_payload);

#endif /* _country_get_autocomplete_v2_response_m_payload_H_ */

