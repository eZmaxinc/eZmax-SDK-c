/*
 * currency_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/currency/getAutocomplete
 */

#ifndef _currency_get_autocomplete_v2_response_m_payload_H_
#define _currency_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct currency_get_autocomplete_v2_response_m_payload_t currency_get_autocomplete_v2_response_m_payload_t;

#include "currency_autocomplete_element_response.h"



typedef struct currency_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_currency; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} currency_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) currency_get_autocomplete_v2_response_m_payload_t *currency_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_currency
);

void currency_get_autocomplete_v2_response_m_payload_free(currency_get_autocomplete_v2_response_m_payload_t *currency_get_autocomplete_v2_response_m_payload);

currency_get_autocomplete_v2_response_m_payload_t *currency_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *currency_get_autocomplete_v2_response_m_payloadJSON);

cJSON *currency_get_autocomplete_v2_response_m_payload_convertToJSON(currency_get_autocomplete_v2_response_m_payload_t *currency_get_autocomplete_v2_response_m_payload);

#endif /* _currency_get_autocomplete_v2_response_m_payload_H_ */

