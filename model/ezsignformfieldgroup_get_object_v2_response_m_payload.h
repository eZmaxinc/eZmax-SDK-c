/*
 * ezsignformfieldgroup_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsignformfieldgroup/{pkiEzsignformfieldgroupID}
 */

#ifndef _ezsignformfieldgroup_get_object_v2_response_m_payload_H_
#define _ezsignformfieldgroup_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroup_get_object_v2_response_m_payload_t ezsignformfieldgroup_get_object_v2_response_m_payload_t;

#include "ezsignformfieldgroup_response_compound.h"



typedef struct ezsignformfieldgroup_get_object_v2_response_m_payload_t {
    struct ezsignformfieldgroup_response_compound_t *obj_ezsignformfieldgroup; //model

} ezsignformfieldgroup_get_object_v2_response_m_payload_t;

ezsignformfieldgroup_get_object_v2_response_m_payload_t *ezsignformfieldgroup_get_object_v2_response_m_payload_create(
    ezsignformfieldgroup_response_compound_t *obj_ezsignformfieldgroup
);

void ezsignformfieldgroup_get_object_v2_response_m_payload_free(ezsignformfieldgroup_get_object_v2_response_m_payload_t *ezsignformfieldgroup_get_object_v2_response_m_payload);

ezsignformfieldgroup_get_object_v2_response_m_payload_t *ezsignformfieldgroup_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignformfieldgroup_get_object_v2_response_m_payloadJSON);

cJSON *ezsignformfieldgroup_get_object_v2_response_m_payload_convertToJSON(ezsignformfieldgroup_get_object_v2_response_m_payload_t *ezsignformfieldgroup_get_object_v2_response_m_payload);

#endif /* _ezsignformfieldgroup_get_object_v2_response_m_payload_H_ */

