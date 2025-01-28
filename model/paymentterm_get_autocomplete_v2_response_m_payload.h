/*
 * paymentterm_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/paymentterm/getAutocomplete
 */

#ifndef _paymentterm_get_autocomplete_v2_response_m_payload_H_
#define _paymentterm_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentterm_get_autocomplete_v2_response_m_payload_t paymentterm_get_autocomplete_v2_response_m_payload_t;

#include "paymentterm_autocomplete_element_response.h"



typedef struct paymentterm_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_paymentterm; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} paymentterm_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) paymentterm_get_autocomplete_v2_response_m_payload_t *paymentterm_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_paymentterm
);

void paymentterm_get_autocomplete_v2_response_m_payload_free(paymentterm_get_autocomplete_v2_response_m_payload_t *paymentterm_get_autocomplete_v2_response_m_payload);

paymentterm_get_autocomplete_v2_response_m_payload_t *paymentterm_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *paymentterm_get_autocomplete_v2_response_m_payloadJSON);

cJSON *paymentterm_get_autocomplete_v2_response_m_payload_convertToJSON(paymentterm_get_autocomplete_v2_response_m_payload_t *paymentterm_get_autocomplete_v2_response_m_payload);

#endif /* _paymentterm_get_autocomplete_v2_response_m_payload_H_ */

