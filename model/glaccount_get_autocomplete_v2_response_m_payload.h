/*
 * glaccount_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/glaccount/getAutocomplete
 */

#ifndef _glaccount_get_autocomplete_v2_response_m_payload_H_
#define _glaccount_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct glaccount_get_autocomplete_v2_response_m_payload_t glaccount_get_autocomplete_v2_response_m_payload_t;

#include "glaccount_autocomplete_element_response.h"



typedef struct glaccount_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_glaccount; //nonprimitive container

} glaccount_get_autocomplete_v2_response_m_payload_t;

glaccount_get_autocomplete_v2_response_m_payload_t *glaccount_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_glaccount
);

void glaccount_get_autocomplete_v2_response_m_payload_free(glaccount_get_autocomplete_v2_response_m_payload_t *glaccount_get_autocomplete_v2_response_m_payload);

glaccount_get_autocomplete_v2_response_m_payload_t *glaccount_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *glaccount_get_autocomplete_v2_response_m_payloadJSON);

cJSON *glaccount_get_autocomplete_v2_response_m_payload_convertToJSON(glaccount_get_autocomplete_v2_response_m_payload_t *glaccount_get_autocomplete_v2_response_m_payload);

#endif /* _glaccount_get_autocomplete_v2_response_m_payload_H_ */

