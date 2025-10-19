/*
 * inscriptionchecklist_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/inscriptionchecklist/getAutocomplete
 */

#ifndef _inscriptionchecklist_get_autocomplete_v2_response_m_payload_H_
#define _inscriptionchecklist_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptionchecklist_get_autocomplete_v2_response_m_payload_t inscriptionchecklist_get_autocomplete_v2_response_m_payload_t;

#include "inscriptionchecklist_autocomplete_element_response.h"



typedef struct inscriptionchecklist_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_inscriptionchecklist; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptionchecklist_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) inscriptionchecklist_get_autocomplete_v2_response_m_payload_t *inscriptionchecklist_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_inscriptionchecklist
);

void inscriptionchecklist_get_autocomplete_v2_response_m_payload_free(inscriptionchecklist_get_autocomplete_v2_response_m_payload_t *inscriptionchecklist_get_autocomplete_v2_response_m_payload);

inscriptionchecklist_get_autocomplete_v2_response_m_payload_t *inscriptionchecklist_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *inscriptionchecklist_get_autocomplete_v2_response_m_payloadJSON);

cJSON *inscriptionchecklist_get_autocomplete_v2_response_m_payload_convertToJSON(inscriptionchecklist_get_autocomplete_v2_response_m_payload_t *inscriptionchecklist_get_autocomplete_v2_response_m_payload);

#endif /* _inscriptionchecklist_get_autocomplete_v2_response_m_payload_H_ */

