/*
 * ezsignformfieldgroup_get_object_v1_response.h
 *
 * Response for GET /1/object/ezsignformfieldgroup/{pkiEzsignformfieldgroupID}
 */

#ifndef _ezsignformfieldgroup_get_object_v1_response_H_
#define _ezsignformfieldgroup_get_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroup_get_object_v1_response_t ezsignformfieldgroup_get_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignformfieldgroup_get_object_v1_response_m_payload.h"



typedef struct ezsignformfieldgroup_get_object_v1_response_t {
    struct ezsignformfieldgroup_get_object_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignformfieldgroup_get_object_v1_response_t;

ezsignformfieldgroup_get_object_v1_response_t *ezsignformfieldgroup_get_object_v1_response_create(
    ezsignformfieldgroup_get_object_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignformfieldgroup_get_object_v1_response_free(ezsignformfieldgroup_get_object_v1_response_t *ezsignformfieldgroup_get_object_v1_response);

ezsignformfieldgroup_get_object_v1_response_t *ezsignformfieldgroup_get_object_v1_response_parseFromJSON(cJSON *ezsignformfieldgroup_get_object_v1_responseJSON);

cJSON *ezsignformfieldgroup_get_object_v1_response_convertToJSON(ezsignformfieldgroup_get_object_v1_response_t *ezsignformfieldgroup_get_object_v1_response);

#endif /* _ezsignformfieldgroup_get_object_v1_response_H_ */

