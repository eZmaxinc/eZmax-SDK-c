/*
 * billingentityinternal_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/billingentityinternal/getAutocomplete
 */

#ifndef _billingentityinternal_get_autocomplete_v2_response_m_payload_H_
#define _billingentityinternal_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternal_get_autocomplete_v2_response_m_payload_t billingentityinternal_get_autocomplete_v2_response_m_payload_t;

#include "billingentityinternal_autocomplete_element_response.h"



typedef struct billingentityinternal_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_billingentityinternal; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} billingentityinternal_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) billingentityinternal_get_autocomplete_v2_response_m_payload_t *billingentityinternal_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_billingentityinternal
);

void billingentityinternal_get_autocomplete_v2_response_m_payload_free(billingentityinternal_get_autocomplete_v2_response_m_payload_t *billingentityinternal_get_autocomplete_v2_response_m_payload);

billingentityinternal_get_autocomplete_v2_response_m_payload_t *billingentityinternal_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *billingentityinternal_get_autocomplete_v2_response_m_payloadJSON);

cJSON *billingentityinternal_get_autocomplete_v2_response_m_payload_convertToJSON(billingentityinternal_get_autocomplete_v2_response_m_payload_t *billingentityinternal_get_autocomplete_v2_response_m_payload);

#endif /* _billingentityinternal_get_autocomplete_v2_response_m_payload_H_ */

