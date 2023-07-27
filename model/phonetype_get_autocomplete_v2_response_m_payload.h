/*
 * phonetype_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/phonetype/getAutocomplete
 */

#ifndef _phonetype_get_autocomplete_v2_response_m_payload_H_
#define _phonetype_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct phonetype_get_autocomplete_v2_response_m_payload_t phonetype_get_autocomplete_v2_response_m_payload_t;

#include "phonetype_autocomplete_element_response.h"



typedef struct phonetype_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_phonetype; //nonprimitive container

} phonetype_get_autocomplete_v2_response_m_payload_t;

phonetype_get_autocomplete_v2_response_m_payload_t *phonetype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_phonetype
);

void phonetype_get_autocomplete_v2_response_m_payload_free(phonetype_get_autocomplete_v2_response_m_payload_t *phonetype_get_autocomplete_v2_response_m_payload);

phonetype_get_autocomplete_v2_response_m_payload_t *phonetype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *phonetype_get_autocomplete_v2_response_m_payloadJSON);

cJSON *phonetype_get_autocomplete_v2_response_m_payload_convertToJSON(phonetype_get_autocomplete_v2_response_m_payload_t *phonetype_get_autocomplete_v2_response_m_payload);

#endif /* _phonetype_get_autocomplete_v2_response_m_payload_H_ */

