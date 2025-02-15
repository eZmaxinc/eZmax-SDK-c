/*
 * billingentityexternal_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/billingentityexternal/getAutocomplete
 */

#ifndef _billingentityexternal_get_autocomplete_v2_response_m_payload_H_
#define _billingentityexternal_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityexternal_get_autocomplete_v2_response_m_payload_t billingentityexternal_get_autocomplete_v2_response_m_payload_t;

#include "billingentityexternal_autocomplete_element_response.h"



typedef struct billingentityexternal_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_billingentityexternal; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} billingentityexternal_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) billingentityexternal_get_autocomplete_v2_response_m_payload_t *billingentityexternal_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_billingentityexternal
);

void billingentityexternal_get_autocomplete_v2_response_m_payload_free(billingentityexternal_get_autocomplete_v2_response_m_payload_t *billingentityexternal_get_autocomplete_v2_response_m_payload);

billingentityexternal_get_autocomplete_v2_response_m_payload_t *billingentityexternal_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *billingentityexternal_get_autocomplete_v2_response_m_payloadJSON);

cJSON *billingentityexternal_get_autocomplete_v2_response_m_payload_convertToJSON(billingentityexternal_get_autocomplete_v2_response_m_payload_t *billingentityexternal_get_autocomplete_v2_response_m_payload);

#endif /* _billingentityexternal_get_autocomplete_v2_response_m_payload_H_ */

