/*
 * ezsignformfieldgroup_create_object_v1_response_m_payload.h
 *
 * Payload for the /1/object/ezsignformfieldgroup/createObject API Request
 */

#ifndef _ezsignformfieldgroup_create_object_v1_response_m_payload_H_
#define _ezsignformfieldgroup_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroup_create_object_v1_response_m_payload_t ezsignformfieldgroup_create_object_v1_response_m_payload_t;




typedef struct ezsignformfieldgroup_create_object_v1_response_m_payload_t {
    list_t *a_pki_ezsignformfieldgroup_id; //primitive container

} ezsignformfieldgroup_create_object_v1_response_m_payload_t;

ezsignformfieldgroup_create_object_v1_response_m_payload_t *ezsignformfieldgroup_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignformfieldgroup_id
);

void ezsignformfieldgroup_create_object_v1_response_m_payload_free(ezsignformfieldgroup_create_object_v1_response_m_payload_t *ezsignformfieldgroup_create_object_v1_response_m_payload);

ezsignformfieldgroup_create_object_v1_response_m_payload_t *ezsignformfieldgroup_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignformfieldgroup_create_object_v1_response_m_payloadJSON);

cJSON *ezsignformfieldgroup_create_object_v1_response_m_payload_convertToJSON(ezsignformfieldgroup_create_object_v1_response_m_payload_t *ezsignformfieldgroup_create_object_v1_response_m_payload);

#endif /* _ezsignformfieldgroup_create_object_v1_response_m_payload_H_ */

