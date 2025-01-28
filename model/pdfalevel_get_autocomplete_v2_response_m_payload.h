/*
 * pdfalevel_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/pdfalevel/getAutocomplete
 */

#ifndef _pdfalevel_get_autocomplete_v2_response_m_payload_H_
#define _pdfalevel_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct pdfalevel_get_autocomplete_v2_response_m_payload_t pdfalevel_get_autocomplete_v2_response_m_payload_t;

#include "pdfalevel_autocomplete_element_response.h"



typedef struct pdfalevel_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_pdfalevel; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} pdfalevel_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) pdfalevel_get_autocomplete_v2_response_m_payload_t *pdfalevel_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_pdfalevel
);

void pdfalevel_get_autocomplete_v2_response_m_payload_free(pdfalevel_get_autocomplete_v2_response_m_payload_t *pdfalevel_get_autocomplete_v2_response_m_payload);

pdfalevel_get_autocomplete_v2_response_m_payload_t *pdfalevel_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *pdfalevel_get_autocomplete_v2_response_m_payloadJSON);

cJSON *pdfalevel_get_autocomplete_v2_response_m_payload_convertToJSON(pdfalevel_get_autocomplete_v2_response_m_payload_t *pdfalevel_get_autocomplete_v2_response_m_payload);

#endif /* _pdfalevel_get_autocomplete_v2_response_m_payload_H_ */

