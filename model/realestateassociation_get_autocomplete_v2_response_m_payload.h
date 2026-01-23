/*
 * realestateassociation_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/realestateassociation/getAutocomplete
 */

#ifndef _realestateassociation_get_autocomplete_v2_response_m_payload_H_
#define _realestateassociation_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct realestateassociation_get_autocomplete_v2_response_m_payload_t realestateassociation_get_autocomplete_v2_response_m_payload_t;

#include "realestateassociation_autocomplete_element_response.h"



typedef struct realestateassociation_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_realestateassociation; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} realestateassociation_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) realestateassociation_get_autocomplete_v2_response_m_payload_t *realestateassociation_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_realestateassociation
);

void realestateassociation_get_autocomplete_v2_response_m_payload_free(realestateassociation_get_autocomplete_v2_response_m_payload_t *realestateassociation_get_autocomplete_v2_response_m_payload);

realestateassociation_get_autocomplete_v2_response_m_payload_t *realestateassociation_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *realestateassociation_get_autocomplete_v2_response_m_payloadJSON);

cJSON *realestateassociation_get_autocomplete_v2_response_m_payload_convertToJSON(realestateassociation_get_autocomplete_v2_response_m_payload_t *realestateassociation_get_autocomplete_v2_response_m_payload);

#endif /* _realestateassociation_get_autocomplete_v2_response_m_payload_H_ */

