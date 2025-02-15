/*
 * ezsigntsarequirement_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/ezsigntsarequirement/getAutocomplete
 */

#ifndef _ezsigntsarequirement_get_autocomplete_v2_response_m_payload_H_
#define _ezsigntsarequirement_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t;

#include "ezsigntsarequirement_autocomplete_element_response.h"



typedef struct ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_ezsigntsarequirement; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t *ezsigntsarequirement_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezsigntsarequirement
);

void ezsigntsarequirement_get_autocomplete_v2_response_m_payload_free(ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t *ezsigntsarequirement_get_autocomplete_v2_response_m_payload);

ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t *ezsigntsarequirement_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezsigntsarequirement_get_autocomplete_v2_response_m_payloadJSON);

cJSON *ezsigntsarequirement_get_autocomplete_v2_response_m_payload_convertToJSON(ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t *ezsigntsarequirement_get_autocomplete_v2_response_m_payload);

#endif /* _ezsigntsarequirement_get_autocomplete_v2_response_m_payload_H_ */

