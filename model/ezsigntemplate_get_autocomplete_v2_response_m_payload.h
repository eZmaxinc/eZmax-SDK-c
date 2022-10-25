/*
 * ezsigntemplate_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/ezsigntemplate/getAutocomplete
 */

#ifndef _ezsigntemplate_get_autocomplete_v2_response_m_payload_H_
#define _ezsigntemplate_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_get_autocomplete_v2_response_m_payload_t ezsigntemplate_get_autocomplete_v2_response_m_payload_t;

#include "ezsigntemplate_autocomplete_element_response.h"



typedef struct ezsigntemplate_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_ezsigntemplate; //nonprimitive container

} ezsigntemplate_get_autocomplete_v2_response_m_payload_t;

ezsigntemplate_get_autocomplete_v2_response_m_payload_t *ezsigntemplate_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezsigntemplate
);

void ezsigntemplate_get_autocomplete_v2_response_m_payload_free(ezsigntemplate_get_autocomplete_v2_response_m_payload_t *ezsigntemplate_get_autocomplete_v2_response_m_payload);

ezsigntemplate_get_autocomplete_v2_response_m_payload_t *ezsigntemplate_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplate_get_autocomplete_v2_response_m_payloadJSON);

cJSON *ezsigntemplate_get_autocomplete_v2_response_m_payload_convertToJSON(ezsigntemplate_get_autocomplete_v2_response_m_payload_t *ezsigntemplate_get_autocomplete_v2_response_m_payload);

#endif /* _ezsigntemplate_get_autocomplete_v2_response_m_payload_H_ */

