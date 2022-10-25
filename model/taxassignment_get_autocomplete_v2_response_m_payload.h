/*
 * taxassignment_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/taxassignment/getAutocomplete
 */

#ifndef _taxassignment_get_autocomplete_v2_response_m_payload_H_
#define _taxassignment_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct taxassignment_get_autocomplete_v2_response_m_payload_t taxassignment_get_autocomplete_v2_response_m_payload_t;

#include "taxassignment_autocomplete_element_response.h"



typedef struct taxassignment_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_taxassignment; //nonprimitive container

} taxassignment_get_autocomplete_v2_response_m_payload_t;

taxassignment_get_autocomplete_v2_response_m_payload_t *taxassignment_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_taxassignment
);

void taxassignment_get_autocomplete_v2_response_m_payload_free(taxassignment_get_autocomplete_v2_response_m_payload_t *taxassignment_get_autocomplete_v2_response_m_payload);

taxassignment_get_autocomplete_v2_response_m_payload_t *taxassignment_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *taxassignment_get_autocomplete_v2_response_m_payloadJSON);

cJSON *taxassignment_get_autocomplete_v2_response_m_payload_convertToJSON(taxassignment_get_autocomplete_v2_response_m_payload_t *taxassignment_get_autocomplete_v2_response_m_payload);

#endif /* _taxassignment_get_autocomplete_v2_response_m_payload_H_ */

