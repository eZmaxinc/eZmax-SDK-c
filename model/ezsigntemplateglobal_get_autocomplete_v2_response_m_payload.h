/*
 * ezsigntemplateglobal_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/ezsigntemplateglobal/getAutocomplete
 */

#ifndef _ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_H_
#define _ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t;

#include "ezsigntemplateglobal_autocomplete_element_response.h"



typedef struct ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_ezsigntemplateglobal; //nonprimitive container

} ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t;

ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t *ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezsigntemplateglobal
);

void ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_free(ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t *ezsigntemplateglobal_get_autocomplete_v2_response_m_payload);

ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t *ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplateglobal_get_autocomplete_v2_response_m_payloadJSON);

cJSON *ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_convertToJSON(ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t *ezsigntemplateglobal_get_autocomplete_v2_response_m_payload);

#endif /* _ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_H_ */
