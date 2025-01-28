/*
 * ezsignformfieldgroup_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsignformfieldgroup/{pkiEzsignformfieldgroupID}
 */

#ifndef _ezsignformfieldgroup_get_object_v2_response_H_
#define _ezsignformfieldgroup_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroup_get_object_v2_response_t ezsignformfieldgroup_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignformfieldgroup_get_object_v2_response_m_payload.h"



typedef struct ezsignformfieldgroup_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsignformfieldgroup_get_object_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignformfieldgroup_get_object_v2_response_t;

__attribute__((deprecated)) ezsignformfieldgroup_get_object_v2_response_t *ezsignformfieldgroup_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignformfieldgroup_get_object_v2_response_m_payload_t *m_payload
);

void ezsignformfieldgroup_get_object_v2_response_free(ezsignformfieldgroup_get_object_v2_response_t *ezsignformfieldgroup_get_object_v2_response);

ezsignformfieldgroup_get_object_v2_response_t *ezsignformfieldgroup_get_object_v2_response_parseFromJSON(cJSON *ezsignformfieldgroup_get_object_v2_responseJSON);

cJSON *ezsignformfieldgroup_get_object_v2_response_convertToJSON(ezsignformfieldgroup_get_object_v2_response_t *ezsignformfieldgroup_get_object_v2_response);

#endif /* _ezsignformfieldgroup_get_object_v2_response_H_ */

