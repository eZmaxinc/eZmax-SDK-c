/*
 * ezmaxpartner_get_custom_developpers_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezmaxpartner/getCustomDeveloppers
 */

#ifndef _ezmaxpartner_get_custom_developpers_v1_response_m_payload_H_
#define _ezmaxpartner_get_custom_developpers_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxpartner_get_custom_developpers_v1_response_m_payload_t ezmaxpartner_get_custom_developpers_v1_response_m_payload_t;

#include "custom_ezmaxpartner_list_element.h"



typedef struct ezmaxpartner_get_custom_developpers_v1_response_m_payload_t {
    list_t *a_obj_ezmaxpartner; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxpartner_get_custom_developpers_v1_response_m_payload_t;

__attribute__((deprecated)) ezmaxpartner_get_custom_developpers_v1_response_m_payload_t *ezmaxpartner_get_custom_developpers_v1_response_m_payload_create(
    list_t *a_obj_ezmaxpartner
);

void ezmaxpartner_get_custom_developpers_v1_response_m_payload_free(ezmaxpartner_get_custom_developpers_v1_response_m_payload_t *ezmaxpartner_get_custom_developpers_v1_response_m_payload);

ezmaxpartner_get_custom_developpers_v1_response_m_payload_t *ezmaxpartner_get_custom_developpers_v1_response_m_payload_parseFromJSON(cJSON *ezmaxpartner_get_custom_developpers_v1_response_m_payloadJSON);

cJSON *ezmaxpartner_get_custom_developpers_v1_response_m_payload_convertToJSON(ezmaxpartner_get_custom_developpers_v1_response_m_payload_t *ezmaxpartner_get_custom_developpers_v1_response_m_payload);

#endif /* _ezmaxpartner_get_custom_developpers_v1_response_m_payload_H_ */

