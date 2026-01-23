/*
 * infrastructureregion_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/infrastructureregion/getAutocomplete
 */

#ifndef _infrastructureregion_get_autocomplete_v2_response_m_payload_H_
#define _infrastructureregion_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct infrastructureregion_get_autocomplete_v2_response_m_payload_t infrastructureregion_get_autocomplete_v2_response_m_payload_t;

#include "infrastructureregion_autocomplete_element_response.h"



typedef struct infrastructureregion_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_infrastructureregion; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} infrastructureregion_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) infrastructureregion_get_autocomplete_v2_response_m_payload_t *infrastructureregion_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_infrastructureregion
);

void infrastructureregion_get_autocomplete_v2_response_m_payload_free(infrastructureregion_get_autocomplete_v2_response_m_payload_t *infrastructureregion_get_autocomplete_v2_response_m_payload);

infrastructureregion_get_autocomplete_v2_response_m_payload_t *infrastructureregion_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *infrastructureregion_get_autocomplete_v2_response_m_payloadJSON);

cJSON *infrastructureregion_get_autocomplete_v2_response_m_payload_convertToJSON(infrastructureregion_get_autocomplete_v2_response_m_payload_t *infrastructureregion_get_autocomplete_v2_response_m_payload);

#endif /* _infrastructureregion_get_autocomplete_v2_response_m_payload_H_ */

