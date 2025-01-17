/*
 * ezsignformfieldgroup_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/ezsignformfieldgroup/{pkiEzsignformfieldgroupID}
 */

#ifndef _ezsignformfieldgroup_delete_object_v1_response_H_
#define _ezsignformfieldgroup_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroup_delete_object_v1_response_t ezsignformfieldgroup_delete_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignformfieldgroup_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignformfieldgroup_delete_object_v1_response_t;

ezsignformfieldgroup_delete_object_v1_response_t *ezsignformfieldgroup_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignformfieldgroup_delete_object_v1_response_free(ezsignformfieldgroup_delete_object_v1_response_t *ezsignformfieldgroup_delete_object_v1_response);

ezsignformfieldgroup_delete_object_v1_response_t *ezsignformfieldgroup_delete_object_v1_response_parseFromJSON(cJSON *ezsignformfieldgroup_delete_object_v1_responseJSON);

cJSON *ezsignformfieldgroup_delete_object_v1_response_convertToJSON(ezsignformfieldgroup_delete_object_v1_response_t *ezsignformfieldgroup_delete_object_v1_response);

#endif /* _ezsignformfieldgroup_delete_object_v1_response_H_ */

