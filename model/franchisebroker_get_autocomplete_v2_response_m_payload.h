/*
 * franchisebroker_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/franchisebroker/getAutocomplete
 */

#ifndef _franchisebroker_get_autocomplete_v2_response_m_payload_H_
#define _franchisebroker_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct franchisebroker_get_autocomplete_v2_response_m_payload_t franchisebroker_get_autocomplete_v2_response_m_payload_t;

#include "franchisebroker_autocomplete_element_response.h"



typedef struct franchisebroker_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_franchisebroker; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} franchisebroker_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) franchisebroker_get_autocomplete_v2_response_m_payload_t *franchisebroker_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_franchisebroker
);

void franchisebroker_get_autocomplete_v2_response_m_payload_free(franchisebroker_get_autocomplete_v2_response_m_payload_t *franchisebroker_get_autocomplete_v2_response_m_payload);

franchisebroker_get_autocomplete_v2_response_m_payload_t *franchisebroker_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *franchisebroker_get_autocomplete_v2_response_m_payloadJSON);

cJSON *franchisebroker_get_autocomplete_v2_response_m_payload_convertToJSON(franchisebroker_get_autocomplete_v2_response_m_payload_t *franchisebroker_get_autocomplete_v2_response_m_payload);

#endif /* _franchisebroker_get_autocomplete_v2_response_m_payload_H_ */

