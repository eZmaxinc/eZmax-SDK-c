/*
 * creditcardtype_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/creditcardtype/getAutocomplete
 */

#ifndef _creditcardtype_get_autocomplete_v2_response_m_payload_H_
#define _creditcardtype_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardtype_get_autocomplete_v2_response_m_payload_t creditcardtype_get_autocomplete_v2_response_m_payload_t;

#include "creditcardtype_autocomplete_element_response.h"



typedef struct creditcardtype_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_creditcardtype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} creditcardtype_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) creditcardtype_get_autocomplete_v2_response_m_payload_t *creditcardtype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_creditcardtype
);

void creditcardtype_get_autocomplete_v2_response_m_payload_free(creditcardtype_get_autocomplete_v2_response_m_payload_t *creditcardtype_get_autocomplete_v2_response_m_payload);

creditcardtype_get_autocomplete_v2_response_m_payload_t *creditcardtype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *creditcardtype_get_autocomplete_v2_response_m_payloadJSON);

cJSON *creditcardtype_get_autocomplete_v2_response_m_payload_convertToJSON(creditcardtype_get_autocomplete_v2_response_m_payload_t *creditcardtype_get_autocomplete_v2_response_m_payload);

#endif /* _creditcardtype_get_autocomplete_v2_response_m_payload_H_ */

