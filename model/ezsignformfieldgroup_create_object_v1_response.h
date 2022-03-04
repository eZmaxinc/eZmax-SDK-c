/*
 * ezsignformfieldgroup_create_object_v1_response.h
 *
 * Response for the /1/object/ezsignformfieldgroup/createObject API Request
 */

#ifndef _ezsignformfieldgroup_create_object_v1_response_H_
#define _ezsignformfieldgroup_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroup_create_object_v1_response_t ezsignformfieldgroup_create_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignformfieldgroup_create_object_v1_response_all_of.h"
#include "ezsignformfieldgroup_create_object_v1_response_m_payload.h"



typedef struct ezsignformfieldgroup_create_object_v1_response_t {
    struct ezsignformfieldgroup_create_object_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignformfieldgroup_create_object_v1_response_t;

ezsignformfieldgroup_create_object_v1_response_t *ezsignformfieldgroup_create_object_v1_response_create(
    ezsignformfieldgroup_create_object_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignformfieldgroup_create_object_v1_response_free(ezsignformfieldgroup_create_object_v1_response_t *ezsignformfieldgroup_create_object_v1_response);

ezsignformfieldgroup_create_object_v1_response_t *ezsignformfieldgroup_create_object_v1_response_parseFromJSON(cJSON *ezsignformfieldgroup_create_object_v1_responseJSON);

cJSON *ezsignformfieldgroup_create_object_v1_response_convertToJSON(ezsignformfieldgroup_create_object_v1_response_t *ezsignformfieldgroup_create_object_v1_response);

#endif /* _ezsignformfieldgroup_create_object_v1_response_H_ */

