/*
 * ezmaxproduct_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/ezmaxproduct/getAutocomplete
 */

#ifndef _ezmaxproduct_get_autocomplete_v2_response_m_payload_H_
#define _ezmaxproduct_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxproduct_get_autocomplete_v2_response_m_payload_t ezmaxproduct_get_autocomplete_v2_response_m_payload_t;

#include "ezmaxproduct_autocomplete_element_response.h"



typedef struct ezmaxproduct_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_ezmaxproduct; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxproduct_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) ezmaxproduct_get_autocomplete_v2_response_m_payload_t *ezmaxproduct_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezmaxproduct
);

void ezmaxproduct_get_autocomplete_v2_response_m_payload_free(ezmaxproduct_get_autocomplete_v2_response_m_payload_t *ezmaxproduct_get_autocomplete_v2_response_m_payload);

ezmaxproduct_get_autocomplete_v2_response_m_payload_t *ezmaxproduct_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezmaxproduct_get_autocomplete_v2_response_m_payloadJSON);

cJSON *ezmaxproduct_get_autocomplete_v2_response_m_payload_convertToJSON(ezmaxproduct_get_autocomplete_v2_response_m_payload_t *ezmaxproduct_get_autocomplete_v2_response_m_payload);

#endif /* _ezmaxproduct_get_autocomplete_v2_response_m_payload_H_ */

