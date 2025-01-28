/*
 * permission_edit_object_v1_response.h
 *
 * Response for PUT /1/object/permission/{pkiPermissionID}
 */

#ifndef _permission_edit_object_v1_response_H_
#define _permission_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct permission_edit_object_v1_response_t permission_edit_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct permission_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} permission_edit_object_v1_response_t;

__attribute__((deprecated)) permission_edit_object_v1_response_t *permission_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void permission_edit_object_v1_response_free(permission_edit_object_v1_response_t *permission_edit_object_v1_response);

permission_edit_object_v1_response_t *permission_edit_object_v1_response_parseFromJSON(cJSON *permission_edit_object_v1_responseJSON);

cJSON *permission_edit_object_v1_response_convertToJSON(permission_edit_object_v1_response_t *permission_edit_object_v1_response);

#endif /* _permission_edit_object_v1_response_H_ */

