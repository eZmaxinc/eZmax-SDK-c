/*
 * permission_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/permission/{pkiPermissionID}
 */

#ifndef _permission_delete_object_v1_response_H_
#define _permission_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct permission_delete_object_v1_response_t permission_delete_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct permission_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} permission_delete_object_v1_response_t;

permission_delete_object_v1_response_t *permission_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void permission_delete_object_v1_response_free(permission_delete_object_v1_response_t *permission_delete_object_v1_response);

permission_delete_object_v1_response_t *permission_delete_object_v1_response_parseFromJSON(cJSON *permission_delete_object_v1_responseJSON);

cJSON *permission_delete_object_v1_response_convertToJSON(permission_delete_object_v1_response_t *permission_delete_object_v1_response);

#endif /* _permission_delete_object_v1_response_H_ */

