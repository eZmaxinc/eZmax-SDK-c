/*
 * inscriptiontype_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/inscriptiontype/getAutocomplete
 */

#ifndef _inscriptiontype_get_autocomplete_v2_response_m_payload_H_
#define _inscriptiontype_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptiontype_get_autocomplete_v2_response_m_payload_t inscriptiontype_get_autocomplete_v2_response_m_payload_t;

#include "inscriptiontype_autocomplete_element_response.h"



typedef struct inscriptiontype_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_inscriptiontype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptiontype_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) inscriptiontype_get_autocomplete_v2_response_m_payload_t *inscriptiontype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_inscriptiontype
);

void inscriptiontype_get_autocomplete_v2_response_m_payload_free(inscriptiontype_get_autocomplete_v2_response_m_payload_t *inscriptiontype_get_autocomplete_v2_response_m_payload);

inscriptiontype_get_autocomplete_v2_response_m_payload_t *inscriptiontype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *inscriptiontype_get_autocomplete_v2_response_m_payloadJSON);

cJSON *inscriptiontype_get_autocomplete_v2_response_m_payload_convertToJSON(inscriptiontype_get_autocomplete_v2_response_m_payload_t *inscriptiontype_get_autocomplete_v2_response_m_payload);

#endif /* _inscriptiontype_get_autocomplete_v2_response_m_payload_H_ */

