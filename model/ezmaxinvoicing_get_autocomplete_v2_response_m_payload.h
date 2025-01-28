/*
 * ezmaxinvoicing_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/ezmaxinvoicing/getAutocomplete
 */

#ifndef _ezmaxinvoicing_get_autocomplete_v2_response_m_payload_H_
#define _ezmaxinvoicing_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t;

#include "ezmaxinvoicing_autocomplete_element_response.h"



typedef struct ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_ezmaxinvoicing; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t *ezmaxinvoicing_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezmaxinvoicing
);

void ezmaxinvoicing_get_autocomplete_v2_response_m_payload_free(ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t *ezmaxinvoicing_get_autocomplete_v2_response_m_payload);

ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t *ezmaxinvoicing_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezmaxinvoicing_get_autocomplete_v2_response_m_payloadJSON);

cJSON *ezmaxinvoicing_get_autocomplete_v2_response_m_payload_convertToJSON(ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t *ezmaxinvoicing_get_autocomplete_v2_response_m_payload);

#endif /* _ezmaxinvoicing_get_autocomplete_v2_response_m_payload_H_ */

