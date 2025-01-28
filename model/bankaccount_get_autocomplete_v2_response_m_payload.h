/*
 * bankaccount_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/bankaccount/getAutocomplete
 */

#ifndef _bankaccount_get_autocomplete_v2_response_m_payload_H_
#define _bankaccount_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bankaccount_get_autocomplete_v2_response_m_payload_t bankaccount_get_autocomplete_v2_response_m_payload_t;

#include "bankaccount_autocomplete_element_response.h"



typedef struct bankaccount_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_bankaccount; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} bankaccount_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) bankaccount_get_autocomplete_v2_response_m_payload_t *bankaccount_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_bankaccount
);

void bankaccount_get_autocomplete_v2_response_m_payload_free(bankaccount_get_autocomplete_v2_response_m_payload_t *bankaccount_get_autocomplete_v2_response_m_payload);

bankaccount_get_autocomplete_v2_response_m_payload_t *bankaccount_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *bankaccount_get_autocomplete_v2_response_m_payloadJSON);

cJSON *bankaccount_get_autocomplete_v2_response_m_payload_convertToJSON(bankaccount_get_autocomplete_v2_response_m_payload_t *bankaccount_get_autocomplete_v2_response_m_payload);

#endif /* _bankaccount_get_autocomplete_v2_response_m_payload_H_ */

