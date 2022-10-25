/*
 * ezsignfoldertype_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/ezsignfoldertype/getAutocomplete
 */

#ifndef _ezsignfoldertype_get_autocomplete_v2_response_m_payload_H_
#define _ezsignfoldertype_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_get_autocomplete_v2_response_m_payload_t ezsignfoldertype_get_autocomplete_v2_response_m_payload_t;

#include "ezsignfoldertype_autocomplete_element_response.h"



typedef struct ezsignfoldertype_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_ezsignfoldertype; //nonprimitive container

} ezsignfoldertype_get_autocomplete_v2_response_m_payload_t;

ezsignfoldertype_get_autocomplete_v2_response_m_payload_t *ezsignfoldertype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezsignfoldertype
);

void ezsignfoldertype_get_autocomplete_v2_response_m_payload_free(ezsignfoldertype_get_autocomplete_v2_response_m_payload_t *ezsignfoldertype_get_autocomplete_v2_response_m_payload);

ezsignfoldertype_get_autocomplete_v2_response_m_payload_t *ezsignfoldertype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezsignfoldertype_get_autocomplete_v2_response_m_payloadJSON);

cJSON *ezsignfoldertype_get_autocomplete_v2_response_m_payload_convertToJSON(ezsignfoldertype_get_autocomplete_v2_response_m_payload_t *ezsignfoldertype_get_autocomplete_v2_response_m_payload);

#endif /* _ezsignfoldertype_get_autocomplete_v2_response_m_payload_H_ */

