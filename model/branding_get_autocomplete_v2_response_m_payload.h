/*
 * branding_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/branding/getAutocomplete
 */

#ifndef _branding_get_autocomplete_v2_response_m_payload_H_
#define _branding_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_get_autocomplete_v2_response_m_payload_t branding_get_autocomplete_v2_response_m_payload_t;

#include "branding_autocomplete_element_response.h"



typedef struct branding_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_branding; //nonprimitive container

} branding_get_autocomplete_v2_response_m_payload_t;

branding_get_autocomplete_v2_response_m_payload_t *branding_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_branding
);

void branding_get_autocomplete_v2_response_m_payload_free(branding_get_autocomplete_v2_response_m_payload_t *branding_get_autocomplete_v2_response_m_payload);

branding_get_autocomplete_v2_response_m_payload_t *branding_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *branding_get_autocomplete_v2_response_m_payloadJSON);

cJSON *branding_get_autocomplete_v2_response_m_payload_convertToJSON(branding_get_autocomplete_v2_response_m_payload_t *branding_get_autocomplete_v2_response_m_payload);

#endif /* _branding_get_autocomplete_v2_response_m_payload_H_ */

