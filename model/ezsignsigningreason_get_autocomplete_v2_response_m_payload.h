/*
 * ezsignsigningreason_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/ezsignsigningreason/getAutocomplete
 */

#ifndef _ezsignsigningreason_get_autocomplete_v2_response_m_payload_H_
#define _ezsignsigningreason_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigningreason_get_autocomplete_v2_response_m_payload_t ezsignsigningreason_get_autocomplete_v2_response_m_payload_t;

#include "ezsignsigningreason_autocomplete_element_response.h"



typedef struct ezsignsigningreason_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_ezsignsigningreason; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsigningreason_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) ezsignsigningreason_get_autocomplete_v2_response_m_payload_t *ezsignsigningreason_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezsignsigningreason
);

void ezsignsigningreason_get_autocomplete_v2_response_m_payload_free(ezsignsigningreason_get_autocomplete_v2_response_m_payload_t *ezsignsigningreason_get_autocomplete_v2_response_m_payload);

ezsignsigningreason_get_autocomplete_v2_response_m_payload_t *ezsignsigningreason_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezsignsigningreason_get_autocomplete_v2_response_m_payloadJSON);

cJSON *ezsignsigningreason_get_autocomplete_v2_response_m_payload_convertToJSON(ezsignsigningreason_get_autocomplete_v2_response_m_payload_t *ezsignsigningreason_get_autocomplete_v2_response_m_payload);

#endif /* _ezsignsigningreason_get_autocomplete_v2_response_m_payload_H_ */

